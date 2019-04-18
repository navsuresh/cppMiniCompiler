/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ansi.y" /* yacc.c:339  */

#if YYBISON
union YYSTYPE;
int yylex();
void yyerror();
#endif
#include<string.h>
#include<stdio.h>
char st[100][10];
int top=0;
char i_[2]="0";
char temp[2]="t";
int lnum=0;
int start=1;
extern char* yytext;
void push()
 {
	 
  strcpy(st[++top], yytext);
 }

void codegen()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	top-=2;
	strcpy(st[top],temp);
	i_[0]++;
}

void codegen_umin()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = -%s\n",temp,st[top]);
	top--;
	strcpy(st[top],temp);
	i_[0]++;
}

void codegen_assign()
{
	printf("%s = %s\n",st[top-2],st[top]);
	top-=2;
}

void codegen_assign_unary()
{
	printf("%s = %s%c1\n",st[top-2],st[top - 1], st[top][0]);
	printf("%s = %s\n",st[top-1],st[top - 2]);

	top-=2;
}

void lab1_while()
{
	printf("L%d: \n",lnum++);
}

void lab2_while()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = not %s\n",temp,st[top]);
	printf("if %s goto L%d\n",temp,lnum);
	i_[0]++;

}

void lab3_while()
{
	printf("goto L%d \n",start);
	printf("L%d: \n",lnum++);
}
void lab1_for()
{
	printf("L%d: \n",lnum++);
}

void lab2_for()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = not %s\n",temp,st[top]);
	printf("if %s goto L%d\n",temp,lnum++);
	i_[0]++;
	printf("goto L%d\n", lnum++);
	printf("L%d:\n", lnum++);
}

void lab3_for()
{
	printf("L%d:\n", lnum - 2);
}
void lab4_for()
{
	printf("goto L%d \n",lnum - 1);
	printf("L%d: \n",lnum - 3);
}

#line 168 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315,
    IFX = 316,
    FOR1 = 317,
    FOR2 = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   771

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    77,    70,     2,
      64,    65,    71,    72,    69,    73,    68,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    85,
      78,    84,    79,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    81,    87,    74,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   123,   124,   128,   129,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   144,   145,   145,
     146,   147,   148,   152,   153,   154,   155,   156,   157,   163,
     164,   164,   165,   165,   166,   166,   170,   171,   171,   172,
     172,   176,   177,   177,   178,   178,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   190,   191,   191,   192,   192,
     196,   197,   201,   202,   206,   207,   211,   212,   216,   217,
     221,   222,   226,   227,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   245,   246,   250,   254,   255,
     259,   260,   264,   265,   269,   270,   270,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   288,   289,   293,
     297,   298,   299,   300,   301,   302,   303,   307,   308,   312,
     313,   317,   318,   322,   323,   327,   332,   333,   334,   338,
     339,   343,   344,   345,   346,   351,   352,   353,   354,   358,
     359,   363,   364,   368,   369,   373,   374,   378,   378,   378,
     379,   380,   380,   380,   383,   383,   384,   384,   386,   387,
     391,   392,   396,   397,   398,   399
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "IFX", "FOR1", "FOR2", "'('", "')'",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@1", "$@2",
  "unary_operator", "multiplicative_expression", "$@3", "$@4", "$@5",
  "additive_expression", "$@6", "$@7", "shift_expression", "$@8", "$@9",
  "relational_expression", "$@10", "$@11", "$@12", "$@13",
  "equality_expression", "$@14", "$@15", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "$@16", "type_specifier", "specifier_qualifier_list", "declarator",
  "direct_declarator", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "$@17", "$@18", "$@19",
  "$@20", "for_without_last", "$@21", "$@22", "translation_unit",
  "external_declaration", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    40,    41,    91,    93,    46,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     654,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,    16,  -148,     1,   721,   685,   -46,   614,  -148,
    -148,   -55,  -148,   -48,  -148,   668,  -148,   174,  -148,     1,
    -148,   685,   632,   443,  -148,  -148,  -148,    16,  -148,  -148,
    -148,   685,  -148,  -148,  -148,   538,  -148,  -148,   -31,  -148,
     357,   -20,   559,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,    31,    33,   559,   -29,    54,    79,    15,   131,
      -9,   -14,    21,    66,   -11,  -148,  -148,   -47,  -148,  -148,
     228,   272,  -148,  -148,  -148,    -5,  -148,  -148,  -148,  -148,
      16,    40,    41,  -148,   -24,  -148,  -148,  -148,     3,  -148,
     386,  -148,   465,  -148,   559,   559,   559,    49,    65,   411,
      -2,  -148,  -148,   486,   559,   126,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   559,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   559,   559,   559,   559,   559,   559,   559,  -148,
    -148,   313,  -148,  -148,  -148,  -148,   699,  -148,   135,  -148,
     386,  -148,  -148,   721,  -148,    84,  -148,  -148,    23,   559,
      88,  -148,  -148,  -148,    38,  -148,    29,  -148,  -148,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   131,    -9,   -14,    21,    66,   -53,  -148,  -148,
    -148,  -148,  -148,  -148,   -62,  -148,  -148,   357,    43,   559,
     411,  -148,   559,  -148,  -148,  -148,  -148,   -29,   -29,    54,
      54,    79,    79,    79,    79,    15,    15,   559,    69,  -148,
     120,  -148,    46,  -148,  -148,  -148,  -148,  -148,   357,   357,
      89,   516,  -148,  -148,  -148,  -148,    63,  -148,   357,  -148,
    -148,   357,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   110,   106,    98,    99,   100,   101,   104,   105,   102,
     103,    97,     0,   161,     0,    90,     0,   109,     0,   158,
     160,     0,    88,     0,    92,    94,    91,     0,   139,     0,
     165,     0,     0,     0,     1,   159,   111,     0,    89,    95,
     163,     0,     2,     3,     4,     0,    16,    18,     0,   147,
       0,     0,     0,    23,    24,    25,    26,    27,    28,   143,
     135,     6,    15,    29,     0,    36,    41,    46,    55,    60,
      62,    64,    66,    68,    70,    72,    85,     0,   141,   131,
       0,     0,   132,   133,   134,    94,   140,   164,   123,   116,
     122,     0,   117,   119,     0,   113,    29,    87,     0,    93,
       0,   162,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    74,     0,    20,    30,
      32,    34,    37,    39,    42,    44,    51,    53,    47,    49,
      56,    58,     0,     0,     0,     0,     0,     0,     0,   144,
     137,     0,   136,   142,   121,   114,     0,   115,     0,   112,
       0,   126,    96,   108,   125,     0,    17,    19,     0,     0,
       0,   151,     5,     8,     0,    13,     0,    10,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    63,    65,    67,    69,     0,    86,   138,
     118,   120,   124,   129,     0,   107,    22,     0,     0,     0,
       0,     9,     0,     7,    31,    33,    35,    38,    40,    43,
      45,    52,    54,    48,    50,    57,    59,     0,     0,   127,
     145,   148,     0,   152,    14,    71,   128,   130,     0,     0,
       0,     0,   146,   149,   150,   154,     0,   153,     0,   156,
     155,     0,   157
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,  -148,   -21,  -148,  -148,  -148,   -35,  -148,
    -148,  -148,   -34,  -148,  -148,   -52,  -148,  -148,   -37,  -148,
    -148,  -148,  -148,    34,  -148,  -148,    32,    37,    39,    44,
    -148,   -32,   -98,  -148,   -38,  -148,     5,    17,  -148,   148,
    -148,   -94,    24,    -3,  -148,  -148,  -148,    30,  -148,  -148,
    -147,  -148,   -50,    75,    93,   111,  -106,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   175,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    61,    62,   174,    63,   104,   105,    64,    65,   179,
     180,   181,    66,   182,   183,    67,   184,   185,    68,   188,
     189,   186,   187,    69,   190,   191,    70,    71,    72,    73,
      74,    75,    76,   127,    77,    98,    28,    29,    23,    24,
     100,    15,   164,    16,    17,    91,    92,    93,    94,   165,
     162,   204,    78,    79,    31,    81,    82,    83,    84,   107,
     239,   210,   241,   247,   248,   251,    18,    19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     108,    97,   161,   171,     1,    13,   146,   228,   163,    21,
      36,    25,    96,   203,   110,   175,   148,    14,    32,     1,
      33,    37,   148,    13,   103,   229,    85,   136,   137,   178,
     227,   153,    26,   106,    85,    14,    86,    38,   149,   111,
     112,   157,   129,   128,   109,   158,    86,   130,   131,    90,
     198,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   142,   161,   172,   110,    12,   143,   148,   168,   163,
     159,   147,    42,    43,    44,    45,   176,    46,    47,    39,
      12,   237,   145,   166,   167,    86,    22,   154,   207,   134,
     135,    30,   148,   138,   139,   113,   213,   114,   148,   115,
      40,   153,   144,   211,   233,   155,    87,   212,   231,   197,
     156,   240,   148,   169,   234,   148,   101,   126,    41,   170,
      80,    96,    96,    96,    96,    96,   132,   133,   249,   177,
     161,   208,   148,    52,   221,   222,   223,   224,   202,    53,
      54,    55,    56,    57,    58,   140,   141,   217,   218,   206,
     219,   220,   209,   225,   226,   160,   236,   230,   214,   215,
     216,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,   232,   238,    90,   244,   193,   192,    42,    43,    44,
      45,   194,    46,    47,   195,    99,   201,   205,   242,   243,
     196,   151,     0,    35,     0,   235,     0,     0,   250,     0,
       0,   252,     2,   246,     0,     0,    96,     0,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
      51,    42,    43,    44,    45,     0,    46,    47,    52,     0,
       0,     0,     0,     0,    53,    54,    55,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     2,     0,     0,    59,
      27,    60,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,    11,     0,     0,    42,    43,    44,    45,    48,
      46,    47,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    27,   150,    42,    43,    44,    45,
       0,    46,    47,    48,     0,     0,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    27,   152,
      42,    43,    44,    45,    48,    46,    47,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    42,
      43,    44,    45,     0,    46,    47,     0,     0,    59,    27,
     199,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,    49,    50,    51,    42,    43,    44,    45,     0,    46,
      47,    52,     0,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    27,     0,     0,    42,    43,    44,    45,
      52,    46,    47,     0,     0,     0,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,   160,    46,    47,    52,     0,     0,     0,     0,
       0,    53,    54,    55,    56,    57,    58,     0,     0,    42,
      43,    44,    45,     2,    46,    47,    59,     0,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    52,     0,    11,
      95,     0,     0,    53,    54,    55,    56,    57,    58,    42,
      43,    44,    45,     0,    46,    47,     0,     0,     0,    52,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    42,    43,    44,    45,     0,    46,    47,     0,     0,
      52,   173,     0,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    42,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   245,     0,     0,     0,     0,    53,    54,    55,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    34,     0,     0,     1,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    88,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     1,    11,     0,
       2,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,    11,     0,    12,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,     2,    89,    11,     0,
       0,     0,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,    11,     2,     0,     0,     0,     0,    12,     3,
       4,     5,     6,     7,     8,     9,    10,     2,     0,    11,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,    11,     0,     0,     0,   200,     0,     2,
       0,     0,    39,     0,    27,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    11,     0,     0,     0,     0,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      50,    33,   100,   109,     3,     0,    17,    69,   102,    12,
      65,    14,    33,   160,    52,   113,    69,     0,    64,     3,
      66,    69,    69,    18,    45,    87,    29,    12,    13,   127,
      83,    81,    15,    64,    37,    18,    31,    85,    85,     8,
       9,    65,    71,    64,    64,    69,    41,    76,    77,    32,
     148,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    70,   160,    65,   102,    64,    80,    69,   106,   163,
      67,    82,     3,     4,     5,     6,   114,     8,     9,    84,
      64,   228,    16,   104,   105,    80,    85,    90,    65,    10,
      11,    16,    69,    78,    79,    64,    67,    66,    69,    68,
      25,   151,    81,    65,   210,    65,    31,    69,    65,   147,
      69,    65,    69,    64,   212,    69,    41,    84,    25,    54,
      27,   142,   143,   144,   145,   146,    72,    73,    65,     3,
     228,   169,    69,    64,   186,   187,   188,   189,     3,    70,
      71,    72,    73,    74,    75,    14,    15,   182,   183,    65,
     184,   185,    64,   190,   191,    86,    87,   207,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   209,    52,   156,    85,   143,   142,     3,     4,     5,
       6,   144,     8,     9,   145,    37,   156,   163,   238,   239,
     146,    80,    -1,    18,    -1,   227,    -1,    -1,   248,    -1,
      -1,   251,    28,   241,    -1,    -1,   227,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,
      56,     3,     4,     5,     6,    -1,     8,     9,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    85,
      86,    87,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,     3,     4,     5,     6,    51,
       8,     9,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,     3,     4,     5,     6,
      -1,     8,     9,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
       3,     4,     5,     6,    51,     8,     9,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    56,     3,     4,     5,     6,    -1,     8,
       9,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,     3,     4,     5,     6,
      64,     8,     9,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    86,     8,     9,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    -1,    -1,     3,
       4,     5,     6,    28,     8,     9,    85,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    64,    -1,    44,
      67,    -1,    -1,    70,    71,    72,    73,    74,    75,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,     0,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,     3,    44,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    64,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    28,    65,    44,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    28,    -1,    -1,    -1,    -1,    64,    34,
      35,    36,    37,    38,    39,    40,    41,    28,    -1,    44,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    28,
      -1,    -1,    84,    -1,    86,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    34,    35,    36,    37,    38,    39,    40,
      41,    44,    64,   124,   125,   129,   131,   132,   154,   155,
     156,   131,    85,   126,   127,   131,   125,    86,   124,   125,
     141,   142,    64,    66,     0,   155,    65,    69,    85,    84,
     141,   142,     3,     4,     5,     6,     8,     9,    51,    54,
      55,    56,    64,    70,    71,    72,    73,    74,    75,    85,
      87,    89,    90,    92,    95,    96,   100,   103,   106,   111,
     114,   115,   116,   117,   118,   119,   120,   122,   140,   141,
     142,   143,   144,   145,   146,   131,   124,   141,     3,    65,
     125,   133,   134,   135,   136,    67,    92,   119,   123,   127,
     128,   141,    64,    92,    93,    94,    64,   147,   140,    64,
     122,     8,     9,    64,    66,    68,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    84,   121,    92,    71,
      76,    77,    72,    73,    10,    11,    12,    13,    78,    79,
      14,    15,    70,    80,    81,    16,    17,    82,    69,    85,
      87,   143,    87,   140,   131,    65,    69,    65,    69,    67,
      86,   120,   138,   129,   130,   137,    92,    92,   122,    64,
      54,   144,    65,    65,    91,   120,   122,     3,   120,    97,
      98,    99,   101,   102,   104,   105,   109,   110,   107,   108,
     112,   113,   111,   114,   115,   116,   117,   122,   120,    87,
      48,   135,     3,   138,   139,   130,    65,    65,   122,    64,
     149,    65,    69,    67,    92,    92,    92,    96,    96,   100,
     100,   103,   103,   103,   103,   106,   106,    83,    69,    87,
     140,    65,   122,   144,   120,   119,    87,   138,    52,   148,
      65,   150,   140,   140,    85,    65,   122,   151,   152,    65,
     140,   153,   140
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    91,    91,    92,    93,    92,    94,    92,
      92,    92,    92,    95,    95,    95,    95,    95,    95,    96,
      97,    96,    98,    96,    99,    96,   100,   101,   100,   102,
     100,   103,   104,   103,   105,   103,   106,   107,   106,   108,
     106,   109,   106,   110,   106,   111,   112,   111,   113,   111,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   127,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   131,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   138,   138,   138,   139,
     139,   140,   140,   140,   140,   141,   141,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   147,   148,   146,
     146,   149,   150,   146,   152,   151,   153,   151,   154,   154,
     155,   155,   156,   156,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     0,     3,     0,     3,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     3,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     4,     3,     4,     4,     3,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     1,
       3,     1,     1,     1,     1,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     7,     0,     0,     7,
       7,     0,     0,     7,     0,     3,     0,     4,     1,     2,
       1,     1,     4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 121 "ansi.y" /* yacc.c:1646  */
    { push();}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 122 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 133 "ansi.y" /* yacc.c:1646  */
    {push(); codegen_assign_unary();}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "ansi.y" /* yacc.c:1646  */
    {push(); codegen_assign_unary();}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 144 "ansi.y" /* yacc.c:1646  */
    {codegen_assign_unary();}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 145 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "ansi.y" /* yacc.c:1646  */
    {codegen_assign_unary();}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 164 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 165 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 166 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 171 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 172 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 172 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 177 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 178 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 178 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 183 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 184 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 186 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 192 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "ansi.y" /* yacc.c:1646  */
    {codegen();}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 227 "ansi.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 231 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 270 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 270 "ansi.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 297 "ansi.y" /* yacc.c:1646  */
    {push();}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 378 "ansi.y" /* yacc.c:1646  */
    {lab1_while();}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 378 "ansi.y" /* yacc.c:1646  */
    {lab2_while();}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 378 "ansi.y" /* yacc.c:1646  */
    {lab3_while();}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 380 "ansi.y" /* yacc.c:1646  */
    {lab1_for();}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 380 "ansi.y" /* yacc.c:1646  */
    {lab2_for();}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 383 "ansi.y" /* yacc.c:1646  */
    {lab3_for();}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 383 "ansi.y" /* yacc.c:1646  */
    {lab4_for();}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 384 "ansi.y" /* yacc.c:1646  */
    {lab3_for();}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 384 "ansi.y" /* yacc.c:1646  */
    {lab4_for();}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1966 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 402 "ansi.y" /* yacc.c:1906  */

#include <stdio.h>
extern int column;
int main(int argc, char *argv[]) {
//	char dest[100];
//	char another[7];
//	cout <<"entered here"<<"\n";
//	strcpy(another,"_c.txt");
//	cout <<"entered here"<<"\n";
	//strcpy(dest,(char *)argv[1]);
	//strcat(dest,another);
	// cout<<"HELLO WORLD\n";
	//yyout= fopen(argv[1],"w");
	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
	
//	fclose(yyout);
	return 0;
}

