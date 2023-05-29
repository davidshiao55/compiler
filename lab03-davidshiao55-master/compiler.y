/* Please feel free to modify any content */

/* Definition section */
%{
    #include "compiler_common.h" //Extern variables that communicate with lex
    #define N 100
    // #define YYDEBUG 1
    // int yydebug = 1;

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;

    int yylex_destroy ();
    void yyerror (char const *s)
    {
        printf("error:%d: %s\n", yylineno, s);
    }

    extern int yylineno;
    extern int yylex();
    extern FILE *yyin;

    /* Symbol table function - you can add new functions if needed. */
    /* parameters and return type can be changed */
    #include "symTab.h"
    int scope = 0;
    symtab *tables = NULL;

    /* Global variables */
    bool HAS_ERROR = false;
    int addr = 0;
%}

%error-verbose

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 *  - you can add new fields if needed.
 */
%union {
    int i_val;
    float f_val;
    char *s_val;
    /* ... */
}

/* Token without return */
%token LET MUT NEWLINE
%token INT FLOAT BOOL STR
%token TRUE FALSE
%token GEQ LEQ EQL NEQ LOR LAND
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN REM_ASSIGN
%token IF ELSE FOR WHILE LOOP
%token PRINT PRINTLN
%token FUNC RETURN BREAK
%token ID ARROW AS IN DOTDOT RSHIFT LSHIFT

/* Token with return, which need to sepcify type */
%token <i_val> INT_LIT
%token <f_val> FLOAT_LIT
%token <s_val> STRING_LIT

/* Nonterminal with return, which need to sepcify type */
%type <s_val> Type

/* Yacc will start at this nonterminal */
%start Program

/* Grammar section */
%%

Program
    : { create_symbol(); } StatementList { dump_symbol(); }
    ;

StatementList 
    : StatementList Statement
    | Statement
    ;

Statement
    : Item
    | LetStatement
    | ExpressionStatement
    ;

LetStatement
    : LetSpecifier ID ';'   {
    }
    | LetSpecifier ID '=' Expression';'   {
        insert_symbol($<s_val>2, $<s_val>4, $<i_val>1, addr++, yylineno, "-");
    }
    | LetSpecifier ID ':' Type ';'  {
        insert_symbol($<s_val>2, $<s_val>4, $<i_val>1, addr++, yylineno, "-");
    }
    | LetSpecifier ID ':' Type '=' Expression ';'    {
        insert_symbol($<s_val>2, $<s_val>4, $<i_val>1, addr++, yylineno, "-");
    }
    ;

LetSpecifier
    : LET   { $<i_val>$ = 0; }
    | LET MUT { $<i_val>$ = 1; }
    ;

Type
    : PrimitiveType
    | ReferenceType
    | ArrayType { $<s_val>$ = strdup("array"); }
    ;

ArrayType
    : '[' Type ';' Expression ']'
    ;

ReferenceType
    : '&' Type  { $<s_val>$ = strdup($<s_val>2); }
    ;

PrimitiveType
    : INT { $<s_val>$ = strdup("i32"); }
    | FLOAT { $<s_val>$ = strdup("f32"); }
    | BOOL { $<s_val>$ = strdup("bool"); }
    | STR { $<s_val>$ = strdup("str"); }
    ;

ExpressionStatement
    : ';'
    | ExpressionWithBlock   ';'
    | ExpressionWithoutBlock ';'   
    | ExpressionWithBlock   
    | ExpressionWithoutBlock    { printf("%creturn\n", $<s_val>1[0]); }
    ;

Expression
    : ExpressionWithoutBlock
    | ExpressionWithBlock
    ;

ExpressionWithoutBlock 
    : OperatorExpression
    | ReturnExpression
    | BreakExpression
    | RangeExpression
    ;

ReturnExpression
    : RETURN Expression   { printf("%creturn\n", $<s_val>2[0]); }
    ;

BreakExpression
    : BREAK Expression
    ;

RangeExpression
    : DOTDOT  { printf("DOTDOT\n"); } primary_expression
    | primary_expression DOTDOT { printf("DOTDOT\n"); } primary_expression
    | primary_expression DOTDOT { printf("DOTDOT\n"); }
    ; 

OperatorExpression
    : AssignmentExpression
    // | Expression ',' AssignmentExpression
    ;

AssignmentExpression
    : LogicalOrExpression
    // | UnaryExpression AssignmentOperator AssignmentExpression
    | ID AssignmentOperator AssignmentExpression    { 
        QNode *node = lookup_symbol($<s_val>1);
        if(node)
        {
            printf("%s\n", $<s_val>2);
        }
        else
        {
            char tmp[N];
            sprintf(tmp, "undefined: %s", $<s_val>1);
            yyerror(tmp);
        } 
    }
    ;

AssignmentOperator
    : '='   { $<s_val>$ = strdup("ASSIGN"); }
    | MUL_ASSIGN    { $<s_val>$ = strdup("MUL_ASSIGN"); }
    | DIV_ASSIGN    { $<s_val>$ = strdup("DIV_ASSIGN"); }
    | REM_ASSIGN    { $<s_val>$ = strdup("REM_ASSIGN"); }
    | ADD_ASSIGN    { $<s_val>$ = strdup("ADD_ASSIGN"); }
    | SUB_ASSIGN    { $<s_val>$ = strdup("SUB_ASSIGN"); }
    ;

LogicalOrExpression
    : LogicalAndExpression
    | LogicalOrExpression LOR LogicalAndExpression  { printf("LOR\n"); $<s_val>$ = strdup("bool");}
    ;

LogicalAndExpression
    : OrExpression
    | LogicalAndExpression LAND OrExpression    { printf("LAND\n"); $<s_val>$ = strdup("bool");}
    ;

OrExpression
    : AndExpression
    | OrExpression '|' AndExpression
    ;

AndExpression
    : EqualityExpression
    | AndExpression '&' EqualityExpression
    ;

EqualityExpression
    : RelationalExpression
    | EqualityExpression EQL RelationalExpression   { printf("EQL\n"); $<s_val>$ = strdup("bool");}
    | EqualityExpression NEQ RelationalExpression   { printf("NEQ\n"); $<s_val>$ = strdup("bool");}
    ;

RelationalExpression
    : ShiftExpression
    | RelationalExpression '<' ShiftExpression  { 
        $<s_val>$ = strdup("bool");
        if(strcmp($<s_val>1, $<s_val>3))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LSS (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);

        }
        printf("LSS\n");
    }
    | RelationalExpression '>' ShiftExpression  { 
        $<s_val>$ = strdup("bool");
        if(strcmp($<s_val>1, $<s_val>3))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: GTR (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);

        }
        printf("GTR\n");
    }
    | RelationalExpression GEQ ShiftExpression  { 
        $<s_val>$ = strdup("bool");
        if(strcmp($<s_val>1, $<s_val>3))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: GEQ (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);

        }
        printf("GEQ\n");}
    | RelationalExpression LEQ ShiftExpression  { 
        $<s_val>$ = strdup("bool");
        if(strcmp($<s_val>1, $<s_val>3))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LEQ (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);

        }
        printf("LEQ\n");}
    ;

ShiftExpression
    : AdditiveExpression
    | ShiftExpression RSHIFT AdditiveExpression { 
        if(strcmp($<s_val>3, "i32"))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: RSHIFT (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);
        }
        printf("RSHIFT\n"); 
    }
    | ShiftExpression LSHIFT AdditiveExpression { 
        if(strcmp($<s_val>3, "i32"))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LSHIFT (mismatched types %s and %s)", $<s_val>1, $<s_val>3);
            yyerror(tmp);
        }
        printf("LSHIFT\n");
    }
    ;

AdditiveExpression
    : MultiplicativeExpression
    | AdditiveExpression '+' MultiplicativeExpression   { printf("ADD\n"); }
    | AdditiveExpression '-' MultiplicativeExpression   { printf("SUB\n"); }
    ;

MultiplicativeExpression
	: CastExpression
	| MultiplicativeExpression '*' CastExpression   { printf("MUL\n"); }
	| MultiplicativeExpression '/' CastExpression   { printf("DIV\n"); }
	| MultiplicativeExpression '%' CastExpression   { printf("REM\n"); }
	;

CastExpression    
    : UnaryExpression
    | UnaryExpression AS Type   { printf("%c2%c\n", $<s_val>1[0], $<s_val>3[0]); $<s_val>$ = strdup($<s_val>3); }
    ;

UnaryExpression
	: PostfixExpression
	| '-' CastExpression  { printf("NEG\n"); $<s_val>$ = strdup($<s_val>2); }
	| '!' CastExpression  { printf("NOT\n"); $<s_val>$ = strdup($<s_val>2); }
	| '&' CastExpression  { $<s_val>$ = strdup($<s_val>2); }
    ;

PostfixExpression
	: primary_expression
	| PostfixExpression '(' CallParams ')'{
        if(!strncmp($<s_val>1, "call: ", 6))
            printf("%s\n", $<s_val>1);
        else
            printf("%s %s\n", $<s_val>1, $<s_val>3);
    }
	| PostfixExpression '[' Expression ']'
	;

CallParams
    : CallParam
    | CallParams ',' CallParam
    ;

CallParam
    : Expression
    |   
    ;

primary_expression
    : PathExpression
    | LiteralExpression
    | '(' Expression ')'
    | ArrayExpression
    ;

ArrayExpression
    : '[' ArrayElements']'  { $<s_val>$ = strdup("array"); }
    ;

ArrayElements
    : Expression
    | ArrayElements ',' Expression
    ;

LiteralExpression
    : '"' STRING_LIT '"'    { printf("STRING_LIT \"%s\"\n", $<s_val>2); $<s_val>$ = strdup("str"); }
    | '"' '"'    { printf("STRING_LIT \"\"\n"); $<s_val>$ = strdup("str"); }
    | INT_LIT   { printf("INT_LIT %d\n", $<i_val>1); $<s_val>$ = strdup("i32"); }
    | FLOAT_LIT { printf("FLOAT_LIT %f\n", $<f_val>1); $<s_val>$ = strdup("f32");}
    | TRUE  { printf("bool TRUE\n"); $<s_val>$ = strdup("bool");}
    | FALSE { printf("bool FALSE\n"); $<s_val>$ = strdup("bool");}
    ;

PathExpression
    : ID {
        QNode *node = lookup_symbol($<s_val>1);
        if(node)
        { 
            symrec rec = lookup_symbol($<s_val>1)->rec;
            if (!strcmp(rec.type, "func"))
            {
                char tmp[N];
                sprintf(tmp, "call: %s%s", rec.name, rec.Func_sig);
                $<s_val>$ = strdup(tmp);
            }
            else
            {
                printf("IDENT (name=%s, address=%d)\n", rec.name, rec.addr);
                $<s_val>$ = strdup(rec.type);
            }
        }
        else
        {
            $<s_val>$ = strdup("undefined");
            char tmp[N];
            sprintf(tmp, "undefined: %s", $<s_val>1);
            yyerror(tmp);
        }
    }
    | PrimaryFunction
    ;

PrimaryFunction
    : PRINT { $<s_val>$ = strdup("PRINT"); }
    | PRINTLN  { $<s_val>$ = strdup("PRINTLN"); }
    ;

ExpressionWithBlock
    : BlockExpression
    | IfExpression
    | LoopExpression
    ;

BlockExpression
    : '{' { scope++; create_symbol(); } '}' { dump_symbol(); scope--;}
    | '{' { scope++; create_symbol(); } StatementList '}' { dump_symbol(); scope--;}

IfExpression
    : IF Expression BlockExpression
    | IF Expression BlockExpression ELSE BlockExpression
    ;

LoopExpression
    : PredicateLoopExpression
    | InfiniteLoopExpression
    | IteratorLoopExpression
    ;

PredicateLoopExpression
    : WHILE Expression BlockExpression
    ;

InfiniteLoopExpression
    : LOOP BlockExpression
    ;

IteratorLoopExpression
    : FOR ID IN Expression  {
        scope++;
        create_symbol();
        insert_symbol($<s_val>2, "i32", 0, addr++, yylineno, "-");
    } 
    '{'
    StatementList
    '}' {
        dump_symbol();
        scope--;
    }
    ;

Item
    : Function
    ;

Function
    : FUNC ID {
        printf("func: %s\n", $<s_val>2); 
        insert_symbol($<s_val>2, "func", -1, -1, yylineno, "");
        scope++;
        create_symbol();
    }
    '('FunctionParameterList ')' FunctionReturnType 
    {
        symrec funcRec = lookup_symbol($<s_val>2)->rec;
        funcRec.Func_sig = (char *)realloc(funcRec.Func_sig, strlen($<s_val>5) + strlen($<s_val>7) + 3);
        sprintf(funcRec.Func_sig, "(%s)%s", $<s_val>5, $<s_val>7);
    }
    '{' 
    StatementList
    '}' {
        dump_symbol();
        scope--;
    }
    ;

FunctionParameterList
    : FunctionParameter { }
    | FunctionParameterList ',' FunctionParameter {  
        $<s_val>$ = realloc($<s_val>$, strlen($<s_val>$) + 2);
        strncat($<s_val>$, $<s_val>3, 1);
    }
    ;

FunctionParameter
    : ID ':' Type   {
        insert_symbol($<s_val>1, $<s_val>3, 0, addr++, yylineno, "-");
        char tmp[2];
        tmp[0] = toupper($<s_val>3[0]);
        tmp[1] = '\0';
        $<s_val>$ = strdup(tmp);
    }
    |   { $<s_val>$ = strdup("V"); }
    ;

FunctionReturnType
    : ARROW Type    { 
        char tmp[2];
        tmp[0] = toupper($<s_val>2[0]);
        tmp[1] = '\0';
        $<s_val>$ = strdup(tmp); 
    }
    |   { $<s_val>$ = strdup("V"); }
    ;

%%

/* C code section */

int main(int argc, char *argv[])
{
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }

    yylineno = 1;
    yyparse();

	printf("Total lines: %d\n", yylineno);
    fclose(yyin);
    return 0;
}

