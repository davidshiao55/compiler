/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler.y"

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

#line 102 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LET = 258,                     /* LET  */
    MUT = 259,                     /* MUT  */
    NEWLINE = 260,                 /* NEWLINE  */
    INT = 261,                     /* INT  */
    FLOAT = 262,                   /* FLOAT  */
    BOOL = 263,                    /* BOOL  */
    STR = 264,                     /* STR  */
    TRUE = 265,                    /* TRUE  */
    FALSE = 266,                   /* FALSE  */
    GEQ = 267,                     /* GEQ  */
    LEQ = 268,                     /* LEQ  */
    EQL = 269,                     /* EQL  */
    NEQ = 270,                     /* NEQ  */
    LOR = 271,                     /* LOR  */
    LAND = 272,                    /* LAND  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 275,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 276,              /* DIV_ASSIGN  */
    REM_ASSIGN = 277,              /* REM_ASSIGN  */
    IF = 278,                      /* IF  */
    ELSE = 279,                    /* ELSE  */
    FOR = 280,                     /* FOR  */
    WHILE = 281,                   /* WHILE  */
    LOOP = 282,                    /* LOOP  */
    PRINT = 283,                   /* PRINT  */
    PRINTLN = 284,                 /* PRINTLN  */
    FUNC = 285,                    /* FUNC  */
    RETURN = 286,                  /* RETURN  */
    BREAK = 287,                   /* BREAK  */
    ID = 288,                      /* ID  */
    ARROW = 289,                   /* ARROW  */
    AS = 290,                      /* AS  */
    IN = 291,                      /* IN  */
    DOTDOT = 292,                  /* DOTDOT  */
    RSHIFT = 293,                  /* RSHIFT  */
    LSHIFT = 294,                  /* LSHIFT  */
    INT_LIT = 295,                 /* INT_LIT  */
    FLOAT_LIT = 296,               /* FLOAT_LIT  */
    STRING_LIT = 297               /* STRING_LIT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LET 258
#define MUT 259
#define NEWLINE 260
#define INT 261
#define FLOAT 262
#define BOOL 263
#define STR 264
#define TRUE 265
#define FALSE 266
#define GEQ 267
#define LEQ 268
#define EQL 269
#define NEQ 270
#define LOR 271
#define LAND 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define REM_ASSIGN 277
#define IF 278
#define ELSE 279
#define FOR 280
#define WHILE 281
#define LOOP 282
#define PRINT 283
#define PRINTLN 284
#define FUNC 285
#define RETURN 286
#define BREAK 287
#define ID 288
#define ARROW 289
#define AS 290
#define IN 291
#define DOTDOT 292
#define RSHIFT 293
#define LSHIFT 294
#define INT_LIT 295
#define FLOAT_LIT 296
#define STRING_LIT 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "compiler.y"

    int i_val;
    float f_val;
    char *s_val;
    /* ... */

#line 246 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LET = 3,                        /* LET  */
  YYSYMBOL_MUT = 4,                        /* MUT  */
  YYSYMBOL_NEWLINE = 5,                    /* NEWLINE  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_BOOL = 8,                       /* BOOL  */
  YYSYMBOL_STR = 9,                        /* STR  */
  YYSYMBOL_TRUE = 10,                      /* TRUE  */
  YYSYMBOL_FALSE = 11,                     /* FALSE  */
  YYSYMBOL_GEQ = 12,                       /* GEQ  */
  YYSYMBOL_LEQ = 13,                       /* LEQ  */
  YYSYMBOL_EQL = 14,                       /* EQL  */
  YYSYMBOL_NEQ = 15,                       /* NEQ  */
  YYSYMBOL_LOR = 16,                       /* LOR  */
  YYSYMBOL_LAND = 17,                      /* LAND  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_REM_ASSIGN = 22,                /* REM_ASSIGN  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_FOR = 25,                       /* FOR  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_LOOP = 27,                      /* LOOP  */
  YYSYMBOL_PRINT = 28,                     /* PRINT  */
  YYSYMBOL_PRINTLN = 29,                   /* PRINTLN  */
  YYSYMBOL_FUNC = 30,                      /* FUNC  */
  YYSYMBOL_RETURN = 31,                    /* RETURN  */
  YYSYMBOL_BREAK = 32,                     /* BREAK  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_ARROW = 34,                     /* ARROW  */
  YYSYMBOL_AS = 35,                        /* AS  */
  YYSYMBOL_IN = 36,                        /* IN  */
  YYSYMBOL_DOTDOT = 37,                    /* DOTDOT  */
  YYSYMBOL_RSHIFT = 38,                    /* RSHIFT  */
  YYSYMBOL_LSHIFT = 39,                    /* LSHIFT  */
  YYSYMBOL_INT_LIT = 40,                   /* INT_LIT  */
  YYSYMBOL_FLOAT_LIT = 41,                 /* FLOAT_LIT  */
  YYSYMBOL_STRING_LIT = 42,                /* STRING_LIT  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '='  */
  YYSYMBOL_45_ = 45,                       /* ':'  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '&'  */
  YYSYMBOL_49_ = 49,                       /* '|'  */
  YYSYMBOL_50_ = 50,                       /* '<'  */
  YYSYMBOL_51_ = 51,                       /* '>'  */
  YYSYMBOL_52_ = 52,                       /* '+'  */
  YYSYMBOL_53_ = 53,                       /* '-'  */
  YYSYMBOL_54_ = 54,                       /* '*'  */
  YYSYMBOL_55_ = 55,                       /* '/'  */
  YYSYMBOL_56_ = 56,                       /* '%'  */
  YYSYMBOL_57_ = 57,                       /* '!'  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_59_ = 59,                       /* ')'  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_61_ = 61,                       /* '"'  */
  YYSYMBOL_62_ = 62,                       /* '{'  */
  YYSYMBOL_63_ = 63,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_Program = 65,                   /* Program  */
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_StatementList = 67,             /* StatementList  */
  YYSYMBOL_Statement = 68,                 /* Statement  */
  YYSYMBOL_LetStatement = 69,              /* LetStatement  */
  YYSYMBOL_LetSpecifier = 70,              /* LetSpecifier  */
  YYSYMBOL_Type = 71,                      /* Type  */
  YYSYMBOL_ArrayType = 72,                 /* ArrayType  */
  YYSYMBOL_ReferenceType = 73,             /* ReferenceType  */
  YYSYMBOL_PrimitiveType = 74,             /* PrimitiveType  */
  YYSYMBOL_ExpressionStatement = 75,       /* ExpressionStatement  */
  YYSYMBOL_Expression = 76,                /* Expression  */
  YYSYMBOL_ExpressionWithoutBlock = 77,    /* ExpressionWithoutBlock  */
  YYSYMBOL_ReturnExpression = 78,          /* ReturnExpression  */
  YYSYMBOL_BreakExpression = 79,           /* BreakExpression  */
  YYSYMBOL_RangeExpression = 80,           /* RangeExpression  */
  YYSYMBOL_81_2 = 81,                      /* $@2  */
  YYSYMBOL_82_3 = 82,                      /* $@3  */
  YYSYMBOL_OperatorExpression = 83,        /* OperatorExpression  */
  YYSYMBOL_AssignmentExpression = 84,      /* AssignmentExpression  */
  YYSYMBOL_AssignmentOperator = 85,        /* AssignmentOperator  */
  YYSYMBOL_LogicalOrExpression = 86,       /* LogicalOrExpression  */
  YYSYMBOL_LogicalAndExpression = 87,      /* LogicalAndExpression  */
  YYSYMBOL_OrExpression = 88,              /* OrExpression  */
  YYSYMBOL_AndExpression = 89,             /* AndExpression  */
  YYSYMBOL_EqualityExpression = 90,        /* EqualityExpression  */
  YYSYMBOL_RelationalExpression = 91,      /* RelationalExpression  */
  YYSYMBOL_ShiftExpression = 92,           /* ShiftExpression  */
  YYSYMBOL_AdditiveExpression = 93,        /* AdditiveExpression  */
  YYSYMBOL_MultiplicativeExpression = 94,  /* MultiplicativeExpression  */
  YYSYMBOL_CastExpression = 95,            /* CastExpression  */
  YYSYMBOL_UnaryExpression = 96,           /* UnaryExpression  */
  YYSYMBOL_PostfixExpression = 97,         /* PostfixExpression  */
  YYSYMBOL_CallParams = 98,                /* CallParams  */
  YYSYMBOL_CallParam = 99,                 /* CallParam  */
  YYSYMBOL_primary_expression = 100,       /* primary_expression  */
  YYSYMBOL_ArrayExpression = 101,          /* ArrayExpression  */
  YYSYMBOL_ArrayElements = 102,            /* ArrayElements  */
  YYSYMBOL_LiteralExpression = 103,        /* LiteralExpression  */
  YYSYMBOL_PathExpression = 104,           /* PathExpression  */
  YYSYMBOL_PrimaryFunction = 105,          /* PrimaryFunction  */
  YYSYMBOL_ExpressionWithBlock = 106,      /* ExpressionWithBlock  */
  YYSYMBOL_BlockExpression = 107,          /* BlockExpression  */
  YYSYMBOL_108_4 = 108,                    /* $@4  */
  YYSYMBOL_109_5 = 109,                    /* $@5  */
  YYSYMBOL_IfExpression = 110,             /* IfExpression  */
  YYSYMBOL_LoopExpression = 111,           /* LoopExpression  */
  YYSYMBOL_PredicateLoopExpression = 112,  /* PredicateLoopExpression  */
  YYSYMBOL_InfiniteLoopExpression = 113,   /* InfiniteLoopExpression  */
  YYSYMBOL_IteratorLoopExpression = 114,   /* IteratorLoopExpression  */
  YYSYMBOL_115_6 = 115,                    /* $@6  */
  YYSYMBOL_Item = 116,                     /* Item  */
  YYSYMBOL_Function = 117,                 /* Function  */
  YYSYMBOL_118_7 = 118,                    /* $@7  */
  YYSYMBOL_119_8 = 119,                    /* $@8  */
  YYSYMBOL_FunctionParameterList = 120,    /* FunctionParameterList  */
  YYSYMBOL_FunctionParameter = 121,        /* FunctionParameter  */
  YYSYMBOL_FunctionReturnType = 122        /* FunctionReturnType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,    61,     2,     2,    56,    48,     2,
      58,    59,    54,    52,    60,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    43,
      50,    44,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    49,    63,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    74,    78,    79,    83,    84,    85,    89,
      91,    94,    97,   103,   104,   108,   109,   110,   114,   118,
     122,   123,   124,   125,   129,   130,   131,   132,   133,   137,
     138,   142,   143,   144,   145,   149,   153,   157,   157,   158,
     158,   159,   163,   168,   170,   186,   187,   188,   189,   190,
     191,   195,   196,   200,   201,   205,   206,   210,   211,   215,
     216,   217,   221,   222,   233,   244,   254,   267,   268,   277,
     289,   290,   291,   295,   296,   297,   298,   302,   303,   307,
     308,   309,   310,   314,   315,   321,   325,   326,   330,   331,
     335,   336,   337,   338,   342,   346,   347,   351,   352,   353,
     354,   355,   356,   360,   385,   389,   390,   394,   395,   396,
     400,   400,   401,   401,   404,   405,   409,   410,   411,   415,
     419,   423,   423,   437,   441,   448,   441,   462,   463,   470,
     477,   481,   487
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LET", "MUT",
  "NEWLINE", "INT", "FLOAT", "BOOL", "STR", "TRUE", "FALSE", "GEQ", "LEQ",
  "EQL", "NEQ", "LOR", "LAND", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "REM_ASSIGN", "IF", "ELSE", "FOR", "WHILE", "LOOP",
  "PRINT", "PRINTLN", "FUNC", "RETURN", "BREAK", "ID", "ARROW", "AS", "IN",
  "DOTDOT", "RSHIFT", "LSHIFT", "INT_LIT", "FLOAT_LIT", "STRING_LIT",
  "';'", "'='", "':'", "'['", "']'", "'&'", "'|'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "'('", "')'", "','", "'\"'", "'{'",
  "'}'", "$accept", "Program", "$@1", "StatementList", "Statement",
  "LetStatement", "LetSpecifier", "Type", "ArrayType", "ReferenceType",
  "PrimitiveType", "ExpressionStatement", "Expression",
  "ExpressionWithoutBlock", "ReturnExpression", "BreakExpression",
  "RangeExpression", "$@2", "$@3", "OperatorExpression",
  "AssignmentExpression", "AssignmentOperator", "LogicalOrExpression",
  "LogicalAndExpression", "OrExpression", "AndExpression",
  "EqualityExpression", "RelationalExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "CastExpression",
  "UnaryExpression", "PostfixExpression", "CallParams", "CallParam",
  "primary_expression", "ArrayExpression", "ArrayElements",
  "LiteralExpression", "PathExpression", "PrimaryFunction",
  "ExpressionWithBlock", "BlockExpression", "$@4", "$@5", "IfExpression",
  "LoopExpression", "PredicateLoopExpression", "InfiniteLoopExpression",
  "IteratorLoopExpression", "$@6", "Item", "Function", "$@7", "$@8",
  "FunctionParameterList", "FunctionParameter", "FunctionReturnType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-111)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -128,    10,   311,  -128,    16,  -128,  -128,   351,   -19,   351,
     -35,  -128,  -128,     5,   351,   351,    23,  -128,  -128,  -128,
    -128,   351,    22,    22,    22,   351,   -30,    -7,   311,  -128,
    -128,    33,  -128,    17,  -128,  -128,  -128,  -128,  -128,    53,
      76,    50,    55,    58,    27,    43,    32,   -38,  -128,    69,
     -33,    68,  -128,  -128,  -128,  -128,    63,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,   -35,  -128,  -128,    72,
     -35,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,   390,   400,  -128,   -36,  -128,  -128,  -128,  -128,  -128,
      60,    48,  -128,    51,   311,  -128,     9,  -128,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    28,   351,   351,   416,  -128,
      96,   351,  -128,    64,  -128,  -128,  -128,   351,  -128,  -128,
    -128,   188,  -128,   351,    28,    76,    50,    55,    58,    27,
      27,    43,    43,    43,    43,    32,    32,   -38,   -38,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,    28,    28,  -128,  -128,
    -128,  -128,    77,  -128,    29,  -128,   400,   -35,  -128,    90,
    -128,  -128,    82,    47,    83,  -128,  -128,  -128,   351,  -128,
    -128,    66,    85,    36,  -128,  -128,  -128,   351,   351,  -128,
     311,    28,    98,    90,   107,   104,   229,  -128,    28,  -128,
    -128,  -128,  -128,  -128,  -128,    91,   311,   270,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    13,   101,   102,     0,     0,     0,
       0,   105,   106,     0,     0,     0,   103,    37,    99,   100,
      24,     0,     0,     0,     0,     0,     0,   112,     3,     5,
       7,     0,     8,    28,    32,    33,    34,    31,    42,    43,
      51,    53,    55,    57,    59,    62,    67,    70,    73,    77,
      79,    83,    93,    91,    90,   104,    27,   107,   108,   109,
     116,   117,   118,     6,   123,    14,     0,    29,    30,     0,
       0,   120,   124,    35,    36,    49,    50,    46,    47,    48,
      45,     0,     0,    95,     0,   103,    82,    83,    80,    81,
       0,     0,    98,     0,     0,     4,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    41,    25,
     114,     0,   119,     0,    44,    38,    94,     0,    92,    97,
     111,     0,     9,     0,     0,    52,    54,    56,    58,    60,
      61,    65,    66,    63,    64,    68,    69,    71,    72,    74,
      75,    76,    20,    21,    22,    23,     0,     0,    78,    17,
      16,    15,     0,    88,     0,    86,     0,     0,   121,   130,
      96,   113,     0,     0,     0,    19,    85,    84,    89,    40,
     115,     0,     0,     0,   127,    10,    11,     0,     0,    87,
       0,     0,   132,   130,     0,     0,     0,   129,     0,   125,
     128,    12,    18,   122,   131,     0,     0,     0,   126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,   -88,   -24,  -128,  -128,  -127,  -128,  -128,
    -128,  -128,    -6,    -2,  -128,  -128,  -128,  -128,  -128,  -128,
      71,  -128,  -128,    56,    57,    59,    54,   -16,   -58,   -11,
     -10,    -1,  -128,  -128,  -128,   -21,    35,  -128,  -128,  -128,
    -128,  -128,     0,    -5,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,   -32,  -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    28,    29,    30,    31,   158,   159,   160,
     161,    32,   163,    67,    34,    35,    36,    82,   166,    37,
      38,    81,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   164,   165,    51,    52,    84,    53,
      54,    55,    68,    57,    93,    94,    58,    59,    60,    61,
      62,   181,    63,    64,   123,   205,   183,   184,   199
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    66,    56,    70,    95,    71,   131,   173,    73,    74,
       3,   126,    91,   116,    69,    83,   112,   113,   114,    90,
      65,    86,    88,    89,   127,   117,    33,    27,    56,   174,
     175,    92,     5,     6,   152,   153,   154,   155,    72,   104,
     105,    75,    76,    77,    78,    79,   141,   142,   143,   144,
      11,    12,   132,   133,   134,    85,  -110,    87,    87,    87,
      97,   120,    18,    19,   197,   122,    96,    80,    21,    98,
      22,   204,   102,   103,   156,    23,   157,   106,   107,    24,
      25,   108,   109,    26,   110,   111,   139,   140,   177,   178,
     186,   187,    33,    99,    56,   192,   193,   145,   146,   100,
     147,   148,   196,   101,   115,   118,   119,    95,   121,   129,
     162,   149,   150,   151,   130,   168,    87,   125,   207,   128,
     167,   170,   169,   182,   176,   185,   188,   172,   190,    33,
     191,    56,   198,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
     201,   202,   124,   206,   135,   138,   136,   189,     0,   137,
       0,   200,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,   194,   195,    95,     0,     0,     0,     0,    33,     0,
      56,     4,     0,     0,    33,     0,    56,     0,     5,     6,
       0,   179,     0,     0,    33,    33,    56,    56,     0,     0,
       0,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,    17,     0,     0,    18,    19,
       0,    20,     4,     0,    21,     0,    22,     0,     0,     5,
       6,    23,     0,     0,     0,    24,    25,     0,     0,    26,
      27,   171,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,    17,     0,     0,    18,
      19,     0,    20,     4,     0,    21,     0,    22,     0,     0,
       5,     6,    23,     0,     0,     0,    24,    25,     0,     0,
      26,    27,   203,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,    17,     0,     0,
      18,    19,     0,    20,     4,     0,    21,     0,    22,     0,
       0,     5,     6,    23,     0,     0,     0,    24,    25,     0,
       0,    26,    27,   208,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,    17,     0,
       0,    18,    19,     0,    20,     0,     0,    21,     0,    22,
       0,     5,     6,     0,    23,     0,     0,     0,    24,    25,
       0,     0,    26,    27,     7,     0,     8,     9,    10,    11,
      12,     0,    14,    15,    16,     0,     0,     0,    17,     0,
       0,    18,    19,     0,     0,     0,     0,    21,     0,    22,
       5,     6,     0,     0,    23,     0,     0,     0,    24,    25,
       5,     6,    26,    27,     0,     0,     0,     0,    11,    12,
       0,     0,     0,    16,     0,     0,   -39,   -39,    11,    12,
      18,    19,     0,    85,     0,     0,    21,     0,    22,     0,
      18,    19,     0,    23,   -39,   -39,    21,    24,    25,   -39,
       0,    26,     0,     0,     0,     0,   -39,   -39,    25,     0,
       0,    26,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,     0,     0,   -39
};

static const yytype_int16 yycheck[] =
{
       2,     7,     2,     9,    28,    10,    94,   134,    14,    15,
       0,    47,    42,    46,    33,    21,    54,    55,    56,    25,
       4,    22,    23,    24,    60,    58,    28,    62,    28,   156,
     157,    61,    10,    11,     6,     7,     8,     9,    33,    12,
      13,    18,    19,    20,    21,    22,   104,   105,   106,   107,
      28,    29,    43,    44,    45,    33,    63,    22,    23,    24,
      43,    66,    40,    41,   191,    70,    33,    44,    46,    16,
      48,   198,    14,    15,    46,    53,    48,    50,    51,    57,
      58,    38,    39,    61,    52,    53,   102,   103,    59,    60,
      43,    44,    94,    17,    94,    59,    60,   108,   109,    49,
     110,   111,   190,    48,    35,    37,    43,   131,    36,    61,
     116,   112,   113,   114,    63,   121,    81,    82,   206,    59,
      24,   127,    58,    33,    47,    43,    43,   133,    62,   131,
      45,   131,    34,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      43,    47,    81,    62,    98,   101,    99,   178,    -1,   100,
      -1,   193,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,   188,   207,    -1,    -1,    -1,    -1,   190,    -1,
     190,     3,    -1,    -1,   196,    -1,   196,    -1,    10,    11,
      -1,   166,    -1,    -1,   206,   207,   206,   207,    -1,    -1,
      -1,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    43,     3,    -1,    46,    -1,    48,    -1,    -1,    10,
      11,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,
      62,    63,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,    40,
      41,    -1,    43,     3,    -1,    46,    -1,    48,    -1,    -1,
      10,    11,    53,    -1,    -1,    -1,    57,    58,    -1,    -1,
      61,    62,    63,    23,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,
      40,    41,    -1,    43,     3,    -1,    46,    -1,    48,    -1,
      -1,    10,    11,    53,    -1,    -1,    -1,    57,    58,    -1,
      -1,    61,    62,    63,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    37,    -1,
      -1,    40,    41,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    10,    11,    -1,    53,    -1,    -1,    -1,    57,    58,
      -1,    -1,    61,    62,    23,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    -1,    -1,    -1,    37,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,    48,
      10,    11,    -1,    -1,    53,    -1,    -1,    -1,    57,    58,
      10,    11,    61,    62,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    -1,    -1,    10,    11,    28,    29,
      40,    41,    -1,    33,    -1,    -1,    46,    -1,    48,    -1,
      40,    41,    -1,    53,    28,    29,    46,    57,    58,    33,
      -1,    61,    -1,    -1,    -1,    -1,    40,    41,    58,    -1,
      -1,    61,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,    66,     0,     3,    10,    11,    23,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    37,    40,    41,
      43,    46,    48,    53,    57,    58,    61,    62,    67,    68,
      69,    70,    75,    77,    78,    79,    80,    83,    84,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   100,   101,   103,   104,   105,   106,   107,   110,   111,
     112,   113,   114,   116,   117,     4,    76,    77,   106,    33,
      76,   107,    33,    76,    76,    18,    19,    20,    21,    22,
      44,    85,    81,    76,   102,    33,    95,   100,    95,    95,
      76,    42,    61,   108,   109,    68,    33,    43,    16,    17,
      49,    48,    14,    15,    12,    13,    50,    51,    38,    39,
      52,    53,    54,    55,    56,    35,    46,    58,    37,    43,
     107,    36,   107,   118,    84,   100,    47,    60,    59,    61,
      63,    67,    43,    44,    45,    87,    88,    89,    90,    91,
      91,    92,    92,    92,    92,    93,    93,    94,    94,    95,
      95,    95,     6,     7,     8,     9,    46,    48,    71,    72,
      73,    74,    76,    76,    98,    99,    82,    24,    76,    58,
      76,    63,    76,    71,    71,    71,    47,    59,    60,   100,
     107,   115,    33,   120,   121,    43,    43,    44,    43,    99,
      62,    45,    59,    60,    76,    76,    67,    71,    34,   122,
     121,    43,    47,    63,    71,   119,    62,    67,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    66,    65,    67,    67,    68,    68,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    71,    72,    73,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    77,    77,    77,    77,    78,    79,    81,    80,    82,
      80,    80,    83,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   104,   105,   105,   106,   106,   106,
     108,   107,   109,   107,   110,   110,   111,   111,   111,   112,
     113,   115,   114,   116,   118,   119,   117,   120,   120,   121,
     121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     3,
       5,     5,     7,     1,     2,     1,     1,     1,     5,     2,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     3,     0,
       4,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       2,     2,     2,     1,     4,     4,     1,     3,     1,     0,
       1,     1,     3,     1,     3,     1,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     4,     3,     5,     1,     1,     1,     3,
       2,     0,     8,     1,     0,     0,    11,     1,     3,     3,
       0,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 74 "compiler.y"
      { create_symbol(); }
#line 1832 "y.tab.c"
    break;

  case 3: /* Program: $@1 StatementList  */
#line 74 "compiler.y"
                                         { dump_symbol(); }
#line 1838 "y.tab.c"
    break;

  case 9: /* LetStatement: LetSpecifier ID ';'  */
#line 89 "compiler.y"
                            {
    }
#line 1845 "y.tab.c"
    break;

  case 10: /* LetStatement: LetSpecifier ID '=' Expression ';'  */
#line 91 "compiler.y"
                                          {
        insert_symbol((yyvsp[-3].s_val), (yyvsp[-1].s_val), (yyvsp[-4].i_val), addr++, yylineno, "-");
    }
#line 1853 "y.tab.c"
    break;

  case 11: /* LetStatement: LetSpecifier ID ':' Type ';'  */
#line 94 "compiler.y"
                                    {
        insert_symbol((yyvsp[-3].s_val), (yyvsp[-1].s_val), (yyvsp[-4].i_val), addr++, yylineno, "-");
    }
#line 1861 "y.tab.c"
    break;

  case 12: /* LetStatement: LetSpecifier ID ':' Type '=' Expression ';'  */
#line 97 "compiler.y"
                                                     {
        insert_symbol((yyvsp[-5].s_val), (yyvsp[-3].s_val), (yyvsp[-6].i_val), addr++, yylineno, "-");
    }
#line 1869 "y.tab.c"
    break;

  case 13: /* LetSpecifier: LET  */
#line 103 "compiler.y"
            { (yyval.i_val) = 0; }
#line 1875 "y.tab.c"
    break;

  case 14: /* LetSpecifier: LET MUT  */
#line 104 "compiler.y"
              { (yyval.i_val) = 1; }
#line 1881 "y.tab.c"
    break;

  case 17: /* Type: ArrayType  */
#line 110 "compiler.y"
                { (yyval.s_val) = strdup("array"); }
#line 1887 "y.tab.c"
    break;

  case 19: /* ReferenceType: '&' Type  */
#line 118 "compiler.y"
                { (yyval.s_val) = strdup((yyvsp[0].s_val)); }
#line 1893 "y.tab.c"
    break;

  case 20: /* PrimitiveType: INT  */
#line 122 "compiler.y"
          { (yyval.s_val) = strdup("i32"); }
#line 1899 "y.tab.c"
    break;

  case 21: /* PrimitiveType: FLOAT  */
#line 123 "compiler.y"
            { (yyval.s_val) = strdup("f32"); }
#line 1905 "y.tab.c"
    break;

  case 22: /* PrimitiveType: BOOL  */
#line 124 "compiler.y"
           { (yyval.s_val) = strdup("bool"); }
#line 1911 "y.tab.c"
    break;

  case 23: /* PrimitiveType: STR  */
#line 125 "compiler.y"
          { (yyval.s_val) = strdup("str"); }
#line 1917 "y.tab.c"
    break;

  case 28: /* ExpressionStatement: ExpressionWithoutBlock  */
#line 133 "compiler.y"
                                { printf("%creturn\n", (yyvsp[0].s_val)[0]); }
#line 1923 "y.tab.c"
    break;

  case 35: /* ReturnExpression: RETURN Expression  */
#line 149 "compiler.y"
                          { printf("%creturn\n", (yyvsp[0].s_val)[0]); }
#line 1929 "y.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 157 "compiler.y"
              { printf("DOTDOT\n"); }
#line 1935 "y.tab.c"
    break;

  case 39: /* $@3: %empty  */
#line 158 "compiler.y"
                                { printf("DOTDOT\n"); }
#line 1941 "y.tab.c"
    break;

  case 41: /* RangeExpression: primary_expression DOTDOT  */
#line 159 "compiler.y"
                                { printf("DOTDOT\n"); }
#line 1947 "y.tab.c"
    break;

  case 44: /* AssignmentExpression: ID AssignmentOperator AssignmentExpression  */
#line 170 "compiler.y"
                                                    { 
        QNode *node = lookup_symbol((yyvsp[-2].s_val));
        if(node)
        {
            printf("%s\n", (yyvsp[-1].s_val));
        }
        else
        {
            char tmp[N];
            sprintf(tmp, "undefined: %s", (yyvsp[-2].s_val));
            yyerror(tmp);
        } 
    }
#line 1965 "y.tab.c"
    break;

  case 45: /* AssignmentOperator: '='  */
#line 186 "compiler.y"
            { (yyval.s_val) = strdup("ASSIGN"); }
#line 1971 "y.tab.c"
    break;

  case 46: /* AssignmentOperator: MUL_ASSIGN  */
#line 187 "compiler.y"
                    { (yyval.s_val) = strdup("MUL_ASSIGN"); }
#line 1977 "y.tab.c"
    break;

  case 47: /* AssignmentOperator: DIV_ASSIGN  */
#line 188 "compiler.y"
                    { (yyval.s_val) = strdup("DIV_ASSIGN"); }
#line 1983 "y.tab.c"
    break;

  case 48: /* AssignmentOperator: REM_ASSIGN  */
#line 189 "compiler.y"
                    { (yyval.s_val) = strdup("REM_ASSIGN"); }
#line 1989 "y.tab.c"
    break;

  case 49: /* AssignmentOperator: ADD_ASSIGN  */
#line 190 "compiler.y"
                    { (yyval.s_val) = strdup("ADD_ASSIGN"); }
#line 1995 "y.tab.c"
    break;

  case 50: /* AssignmentOperator: SUB_ASSIGN  */
#line 191 "compiler.y"
                    { (yyval.s_val) = strdup("SUB_ASSIGN"); }
#line 2001 "y.tab.c"
    break;

  case 52: /* LogicalOrExpression: LogicalOrExpression LOR LogicalAndExpression  */
#line 196 "compiler.y"
                                                    { printf("LOR\n"); (yyval.s_val) = strdup("bool");}
#line 2007 "y.tab.c"
    break;

  case 54: /* LogicalAndExpression: LogicalAndExpression LAND OrExpression  */
#line 201 "compiler.y"
                                                { printf("LAND\n"); (yyval.s_val) = strdup("bool");}
#line 2013 "y.tab.c"
    break;

  case 60: /* EqualityExpression: EqualityExpression EQL RelationalExpression  */
#line 216 "compiler.y"
                                                    { printf("EQL\n"); (yyval.s_val) = strdup("bool");}
#line 2019 "y.tab.c"
    break;

  case 61: /* EqualityExpression: EqualityExpression NEQ RelationalExpression  */
#line 217 "compiler.y"
                                                    { printf("NEQ\n"); (yyval.s_val) = strdup("bool");}
#line 2025 "y.tab.c"
    break;

  case 63: /* RelationalExpression: RelationalExpression '<' ShiftExpression  */
#line 222 "compiler.y"
                                                { 
        (yyval.s_val) = strdup("bool");
        if(strcmp((yyvsp[-2].s_val), (yyvsp[0].s_val)))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LSS (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);

        }
        printf("LSS\n");
    }
#line 2041 "y.tab.c"
    break;

  case 64: /* RelationalExpression: RelationalExpression '>' ShiftExpression  */
#line 233 "compiler.y"
                                                { 
        (yyval.s_val) = strdup("bool");
        if(strcmp((yyvsp[-2].s_val), (yyvsp[0].s_val)))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: GTR (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);

        }
        printf("GTR\n");
    }
#line 2057 "y.tab.c"
    break;

  case 65: /* RelationalExpression: RelationalExpression GEQ ShiftExpression  */
#line 244 "compiler.y"
                                                { 
        (yyval.s_val) = strdup("bool");
        if(strcmp((yyvsp[-2].s_val), (yyvsp[0].s_val)))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: GEQ (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);

        }
        printf("GEQ\n");}
#line 2072 "y.tab.c"
    break;

  case 66: /* RelationalExpression: RelationalExpression LEQ ShiftExpression  */
#line 254 "compiler.y"
                                                { 
        (yyval.s_val) = strdup("bool");
        if(strcmp((yyvsp[-2].s_val), (yyvsp[0].s_val)))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LEQ (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);

        }
        printf("LEQ\n");}
#line 2087 "y.tab.c"
    break;

  case 68: /* ShiftExpression: ShiftExpression RSHIFT AdditiveExpression  */
#line 268 "compiler.y"
                                                { 
        if(strcmp((yyvsp[0].s_val), "i32"))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: RSHIFT (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);
        }
        printf("RSHIFT\n"); 
    }
#line 2101 "y.tab.c"
    break;

  case 69: /* ShiftExpression: ShiftExpression LSHIFT AdditiveExpression  */
#line 277 "compiler.y"
                                                { 
        if(strcmp((yyvsp[0].s_val), "i32"))
        {
            char tmp[N];
            sprintf(tmp, "invalid operation: LSHIFT (mismatched types %s and %s)", (yyvsp[-2].s_val), (yyvsp[0].s_val));
            yyerror(tmp);
        }
        printf("LSHIFT\n");
    }
#line 2115 "y.tab.c"
    break;

  case 71: /* AdditiveExpression: AdditiveExpression '+' MultiplicativeExpression  */
#line 290 "compiler.y"
                                                        { printf("ADD\n"); }
#line 2121 "y.tab.c"
    break;

  case 72: /* AdditiveExpression: AdditiveExpression '-' MultiplicativeExpression  */
#line 291 "compiler.y"
                                                        { printf("SUB\n"); }
#line 2127 "y.tab.c"
    break;

  case 74: /* MultiplicativeExpression: MultiplicativeExpression '*' CastExpression  */
#line 296 "compiler.y"
                                                        { printf("MUL\n"); }
#line 2133 "y.tab.c"
    break;

  case 75: /* MultiplicativeExpression: MultiplicativeExpression '/' CastExpression  */
#line 297 "compiler.y"
                                                        { printf("DIV\n"); }
#line 2139 "y.tab.c"
    break;

  case 76: /* MultiplicativeExpression: MultiplicativeExpression '%' CastExpression  */
#line 298 "compiler.y"
                                                        { printf("REM\n"); }
#line 2145 "y.tab.c"
    break;

  case 78: /* CastExpression: UnaryExpression AS Type  */
#line 303 "compiler.y"
                                { printf("%c2%c\n", (yyvsp[-2].s_val)[0], (yyvsp[0].s_val)[0]); (yyval.s_val) = strdup((yyvsp[0].s_val)); }
#line 2151 "y.tab.c"
    break;

  case 80: /* UnaryExpression: '-' CastExpression  */
#line 308 "compiler.y"
                              { printf("NEG\n"); (yyval.s_val) = strdup((yyvsp[0].s_val)); }
#line 2157 "y.tab.c"
    break;

  case 81: /* UnaryExpression: '!' CastExpression  */
#line 309 "compiler.y"
                              { printf("NOT\n"); (yyval.s_val) = strdup((yyvsp[0].s_val)); }
#line 2163 "y.tab.c"
    break;

  case 82: /* UnaryExpression: '&' CastExpression  */
#line 310 "compiler.y"
                              { (yyval.s_val) = strdup((yyvsp[0].s_val)); }
#line 2169 "y.tab.c"
    break;

  case 84: /* PostfixExpression: PostfixExpression '(' CallParams ')'  */
#line 315 "compiler.y"
                                              {
        if(!strncmp((yyvsp[-3].s_val), "call: ", 6))
            printf("%s\n", (yyvsp[-3].s_val));
        else
            printf("%s %s\n", (yyvsp[-3].s_val), (yyvsp[-1].s_val));
    }
#line 2180 "y.tab.c"
    break;

  case 94: /* ArrayExpression: '[' ArrayElements ']'  */
#line 342 "compiler.y"
                            { (yyval.s_val) = strdup("array"); }
#line 2186 "y.tab.c"
    break;

  case 97: /* LiteralExpression: '"' STRING_LIT '"'  */
#line 351 "compiler.y"
                            { printf("STRING_LIT \"%s\"\n", (yyvsp[-1].s_val)); (yyval.s_val) = strdup("str"); }
#line 2192 "y.tab.c"
    break;

  case 98: /* LiteralExpression: '"' '"'  */
#line 352 "compiler.y"
                 { printf("STRING_LIT \"\"\n"); (yyval.s_val) = strdup("str"); }
#line 2198 "y.tab.c"
    break;

  case 99: /* LiteralExpression: INT_LIT  */
#line 353 "compiler.y"
                { printf("INT_LIT %d\n", (yyvsp[0].i_val)); (yyval.s_val) = strdup("i32"); }
#line 2204 "y.tab.c"
    break;

  case 100: /* LiteralExpression: FLOAT_LIT  */
#line 354 "compiler.y"
                { printf("FLOAT_LIT %f\n", (yyvsp[0].f_val)); (yyval.s_val) = strdup("f32");}
#line 2210 "y.tab.c"
    break;

  case 101: /* LiteralExpression: TRUE  */
#line 355 "compiler.y"
            { printf("bool TRUE\n"); (yyval.s_val) = strdup("bool");}
#line 2216 "y.tab.c"
    break;

  case 102: /* LiteralExpression: FALSE  */
#line 356 "compiler.y"
            { printf("bool FALSE\n"); (yyval.s_val) = strdup("bool");}
#line 2222 "y.tab.c"
    break;

  case 103: /* PathExpression: ID  */
#line 360 "compiler.y"
         {
        QNode *node = lookup_symbol((yyvsp[0].s_val));
        if(node)
        { 
            symrec rec = lookup_symbol((yyvsp[0].s_val))->rec;
            if (!strcmp(rec.type, "func"))
            {
                char tmp[N];
                sprintf(tmp, "call: %s%s", rec.name, rec.Func_sig);
                (yyval.s_val) = strdup(tmp);
            }
            else
            {
                printf("IDENT (name=%s, address=%d)\n", rec.name, rec.addr);
                (yyval.s_val) = strdup(rec.type);
            }
        }
        else
        {
            (yyval.s_val) = strdup("undefined");
            char tmp[N];
            sprintf(tmp, "undefined: %s", (yyvsp[0].s_val));
            yyerror(tmp);
        }
    }
#line 2252 "y.tab.c"
    break;

  case 105: /* PrimaryFunction: PRINT  */
#line 389 "compiler.y"
            { (yyval.s_val) = strdup("PRINT"); }
#line 2258 "y.tab.c"
    break;

  case 106: /* PrimaryFunction: PRINTLN  */
#line 390 "compiler.y"
               { (yyval.s_val) = strdup("PRINTLN"); }
#line 2264 "y.tab.c"
    break;

  case 110: /* $@4: %empty  */
#line 400 "compiler.y"
          { scope++; create_symbol(); }
#line 2270 "y.tab.c"
    break;

  case 111: /* BlockExpression: '{' $@4 '}'  */
#line 400 "compiler.y"
                                            { dump_symbol(); scope--;}
#line 2276 "y.tab.c"
    break;

  case 112: /* $@5: %empty  */
#line 401 "compiler.y"
          { scope++; create_symbol(); }
#line 2282 "y.tab.c"
    break;

  case 113: /* BlockExpression: '{' $@5 StatementList '}'  */
#line 401 "compiler.y"
                                                          { dump_symbol(); scope--;}
#line 2288 "y.tab.c"
    break;

  case 121: /* $@6: %empty  */
#line 423 "compiler.y"
                            {
        scope++;
        create_symbol();
        insert_symbol((yyvsp[-2].s_val), "i32", 0, addr++, yylineno, "-");
    }
#line 2298 "y.tab.c"
    break;

  case 122: /* IteratorLoopExpression: FOR ID IN Expression $@6 '{' StatementList '}'  */
#line 430 "compiler.y"
        {
        dump_symbol();
        scope--;
    }
#line 2307 "y.tab.c"
    break;

  case 124: /* $@7: %empty  */
#line 441 "compiler.y"
              {
        printf("func: %s\n", (yyvsp[0].s_val)); 
        insert_symbol((yyvsp[0].s_val), "func", -1, -1, yylineno, "");
        scope++;
        create_symbol();
    }
#line 2318 "y.tab.c"
    break;

  case 125: /* $@8: %empty  */
#line 448 "compiler.y"
    {
        symrec funcRec = lookup_symbol((yyvsp[-5].s_val))->rec;
        funcRec.Func_sig = (char *)realloc(funcRec.Func_sig, strlen((yyvsp[-2].s_val)) + strlen((yyvsp[0].s_val)) + 3);
        sprintf(funcRec.Func_sig, "(%s)%s", (yyvsp[-2].s_val), (yyvsp[0].s_val));
    }
#line 2328 "y.tab.c"
    break;

  case 126: /* Function: FUNC ID $@7 '(' FunctionParameterList ')' FunctionReturnType $@8 '{' StatementList '}'  */
#line 455 "compiler.y"
        {
        dump_symbol();
        scope--;
    }
#line 2337 "y.tab.c"
    break;

  case 127: /* FunctionParameterList: FunctionParameter  */
#line 462 "compiler.y"
                        { }
#line 2343 "y.tab.c"
    break;

  case 128: /* FunctionParameterList: FunctionParameterList ',' FunctionParameter  */
#line 463 "compiler.y"
                                                  {  
        (yyval.s_val) = realloc((yyval.s_val), strlen((yyval.s_val)) + 2);
        strncat((yyval.s_val), (yyvsp[0].s_val), 1);
    }
#line 2352 "y.tab.c"
    break;

  case 129: /* FunctionParameter: ID ':' Type  */
#line 470 "compiler.y"
                    {
        insert_symbol((yyvsp[-2].s_val), (yyvsp[0].s_val), 0, addr++, yylineno, "-");
        char tmp[2];
        tmp[0] = toupper((yyvsp[0].s_val)[0]);
        tmp[1] = '\0';
        (yyval.s_val) = strdup(tmp);
    }
#line 2364 "y.tab.c"
    break;

  case 130: /* FunctionParameter: %empty  */
#line 477 "compiler.y"
        { (yyval.s_val) = strdup("V"); }
#line 2370 "y.tab.c"
    break;

  case 131: /* FunctionReturnType: ARROW Type  */
#line 481 "compiler.y"
                    { 
        char tmp[2];
        tmp[0] = toupper((yyvsp[0].s_val)[0]);
        tmp[1] = '\0';
        (yyval.s_val) = strdup(tmp); 
    }
#line 2381 "y.tab.c"
    break;

  case 132: /* FunctionReturnType: %empty  */
#line 487 "compiler.y"
        { (yyval.s_val) = strdup("V"); }
#line 2387 "y.tab.c"
    break;


#line 2391 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 490 "compiler.y"


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

