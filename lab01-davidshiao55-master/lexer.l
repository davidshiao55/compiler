/*
    filename: lexer.l
*/

/* Definition section */
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define YY_NO_UNPUT
    #define YY_NO_INPUT
    #define print_token(token) \
        printf("%-8s \t %s\n", strcmp(token, "NEWLINE")? yytext: "", token)

    extern int yylineno;
    int line_num = 0;
    int comment_num = 0;
    int last_comment_line = -1;
%}

%x comment
%x string

/* Define regular expression label */
letter [a-zA-Z_]
digit [0-9]
  
/* Rules section */
%%
"//".*              {
    print_token("COMMENT"); 
    comment_num++;
}

"\""                { print_token("QUOTA"); BEGIN(string); }
<string>[^\n"\""]*  { print_token("STRING_LIT"); }
<string>"\""        { BEGIN(INITIAL); print_token("QUOTA");}

"/*"                    { printf("%s", yytext); BEGIN(comment); }
<comment>[^*\n]*        { printf("%s", yytext); }/* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   { printf("%s", yytext); }/* eat up '*'s not followed by '/'s */
<comment>\n             { printf("%s", yytext); ++line_num; ++comment_num; }
<comment>"*"+"/"        {
    BEGIN(INITIAL);
    print_token("MUTI_LINE_COMMENT");
    if(last_comment_line != yylineno)
        comment_num++;
    last_comment_line = yylineno;
}

"+"         { print_token("ADD"); }
"-"         { print_token("SUB"); }
"*"         { print_token("MUL"); }
"/"         { print_token("QUO"); }
"%"         { print_token("REM"); }
">"         { print_token("GTR"); }
"<"         { print_token("LSS"); }
">="        { print_token("GEQ"); }
"<="        { print_token("LEQ"); }
"=="        { print_token("EQL"); }
"!="        { print_token("NEQ"); }
"="         { print_token("ASSIGN"); }
"+="        { print_token("ADD_ASSIGN"); }
"-="        { print_token("SUB_ASSIGN"); }
"*="        { print_token("MUL_ASSIGN"); }
"/="        { print_token("QUO_ASSIGN"); }
"%="        { print_token("REM_ASSIGN"); }
"&"         { print_token("BAND"); }
"|"         { print_token("BOR"); }
"~"         { print_token("BNOT"); }
">>"        { print_token("RSHIFT"); }
"&&"        { print_token("LAND"); }
"||"        { print_token("LOR"); }
"!"         { print_token("NOT"); }
"("         { print_token("LPAREN"); }
")"         { print_token("RPAREN"); }
"["         { print_token("LBRACK"); }
"]"         { print_token("RBRACK"); }
"{"         { print_token("LBRACE"); }
"}"         { print_token("RBRACE"); }
";"         { print_token("SEMICOLON"); }
","         { print_token("COMMA"); }
":"         { print_token("COLON"); }
"->"        { print_token("ARROW"); }
"<<"        { print_token("LSHIFT"); }
"print"     { print_token("PRINT"); }
"println"   { print_token("PRINTLN"); }
"if"        { print_token("IF"); }
"else"      { print_token("ELSE"); }
"for"       { print_token("FOR"); }
"i32"       { print_token("INT"); }
"f32"       { print_token("FLOAT"); }
".."        { print_token("DOTDOT"); }
"bool"      { print_token("BOOL"); }
"true"      { print_token("TRUE"); }
"false"     { print_token("FALSE"); }
"let"       { print_token("LET"); }
"mut"       { print_token("MUT"); }
"fn"        { print_token("FUNC"); }
"return"    { print_token("RETURN"); }
"break"     { print_token("BREAK"); }
"as"        { print_token("AS"); }
"in"        { print_token("IN"); }
"while"     { print_token("WHILE"); }
"loop"      { print_token("LOOP"); }
"\n"        { line_num++; print_token("NEWLINE"); }


[ \t]+                                        {;}
{letter}+({letter}|{digit})*                  { print_token("IDENT"); }
{digit}*"."{digit}+                           { print_token("FLOAT_LIT");}
{digit}+                                      { print_token("INT_LIT");}
<<EOF>>                     { line_num++; yyterminate(); }
.                           {;}
%%

/*  C Code section */
int yywrap(void)
{
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc == 2) {
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    yylex();
    printf("\nFinish scanning,\n");
    printf("total line: %d\n", line_num);
    printf("comment line: %d\n", comment_num);
    fclose(yyin);
    return 0;
}