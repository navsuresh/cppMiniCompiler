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

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

// #define YYDEBUG 1
using namespace std;
ast test;
// ast test1;
unordered_map <string,int> size_map;
node* type;
const char *s = "Hello, World!";   
int flag=1;
class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};



void yyerror(const char *error_msg);

int counter = 0;
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}


#line 115 "y.tab.c" /* yacc.c:339  */

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
    IFX = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "ansi.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 222 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1064

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,     2,     2,     2,    33,    36,     2,
      75,    76,    31,    29,    80,    30,    79,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    85,
      34,    39,    35,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    38,    41,    81,     2,     2,     2,
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
      25,    26,    27,    28,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    87,    88,    89,    93,    94,    95,    96,
      97,    98,    99,   103,   104,   108,   109,   110,   111,   112,
     113,   117,   118,   119,   120,   121,   122,   128,   129,   130,
     131,   135,   136,   137,   141,   142,   143,   147,   148,   149,
     150,   151,   155,   156,   157,   161,   162,   166,   167,   171,
     172,   176,   177,   181,   182,   186,   187,   191,   192,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     210,   211,   215,   219,   220,   224,   230,   234,   235,   239,
     252,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   277,   278,   282,   286,   287,   288,   289,   290,   291,
     292,   296,   297,   301,   302,   306,   307,   311,   312,   316,
     321,   322,   323,   327,   328,   332,   333,   334,   335,   336,
     343,   343,   354,   356,   358,   360,   362,   364,   366,   368,
     375,   376,   380,   381,   385,   386,   390,   391,   395,   396,
     397,   398,   402,   403,   407,   408,   412,   413,   417,   418,
     419,   420
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
  "TYPE_NAME", "'+'", "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "'='", "'{'", "'}'", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "IFX", "'('", "')'",
  "'['", "']'", "'.'", "','", "'~'", "'!'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "direct_declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "statement", "compound_statement", "$@1", "temp1", "declaration_list",
  "statement_list", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,    43,
      45,    42,    47,    37,    60,    62,    38,    94,   124,    61,
     123,   125,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    40,    41,    91,    93,    46,
      44,   126,    33,    63,    58,    59
};
# endif

#define YYPACT_NINF -156

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-156)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     310,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,     7,  -156,     5,   143,   474,    11,   793,  -156,
    -156,   -60,  -156,   -41,  -156,   986,  -156,  -156,  -156,     5,
    -156,   474,   227,   887,  -156,  -156,  -156,     7,  -156,   927,
    -156,   474,   175,    18,  -156,  -156,  -156,  -156,     7,   -38,
     -10,  -156,   -57,  -156,  -156,  -156,   970,   982,   982,  -156,
    -156,  -156,  -156,   982,  -156,  -156,  -156,  -156,    12,  -156,
     982,    91,    17,    54,    20,   116,    40,    42,   125,    79,
      -8,  -156,    88,  -156,   927,   135,  -156,  -156,  -156,  -156,
    -156,    26,   101,   741,   110,    63,  -156,  -156,   -24,  -156,
    -156,  -156,   258,   341,  -156,  -156,  -156,  -156,  -156,  -156,
     387,  -156,   186,   824,  -156,  -156,  -156,   -51,  -156,  -156,
     598,   982,   195,  -156,   982,   982,   982,   982,   982,   982,
     982,   982,   982,   982,   982,   982,   982,   982,   982,   982,
     982,   982,   982,  -156,  -156,   -30,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,   982,   982,   982,
     140,   782,  -156,   -22,   982,  -156,  -156,   424,  -156,  -156,
     507,  -156,  -156,  -156,   143,  -156,   132,  -156,  -156,    -3,
    -156,    97,  -156,  -156,  -156,  -156,    91,    91,    17,    17,
      54,    54,    54,    54,    20,    20,   116,    40,    42,   125,
      79,    16,  -156,   879,  -156,    53,    56,   134,   782,  -156,
    -156,  -156,   590,  -156,   647,  -156,  -156,  -156,   982,  -156,
     982,  -156,  -156,   741,   741,   982,   941,  -156,   694,  -156,
    -156,  -156,   145,  -156,    92,   741,    93,  -156,   741,   128,
    -156,   741,  -156,  -156,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    94,    90,    82,    83,    84,    85,    88,    89,    86,
      87,    81,     0,   147,     0,    75,     0,    93,     0,   144,
     146,     0,    73,     0,    77,    79,    76,   120,   130,     0,
     151,     0,     0,     0,     1,   145,    95,     0,    74,     0,
     149,     0,     0,    79,   131,   150,   107,   100,   106,     0,
     101,   103,     0,     2,     3,     4,     0,     0,     0,    23,
      24,    22,    21,     0,    97,    25,    26,     6,    15,    27,
       0,    31,    34,    37,    42,    45,    47,    49,    51,    53,
      55,    72,     0,    78,     0,    27,    57,   110,    80,   148,
     122,     0,     0,     0,     0,     0,   134,    70,     0,   132,
     115,   121,     0,     0,   116,   117,   118,   119,   105,    98,
       0,    99,     0,     0,    19,    16,    17,     0,    11,    12,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,   113,     0,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    59,     0,     0,     0,
       0,     0,   142,     0,     0,   135,   124,     0,   123,   133,
       0,   102,   104,   108,    92,   109,     0,     5,     8,     0,
      13,     0,    10,    28,    29,    30,    32,    33,    35,    36,
      40,    41,    38,    39,    43,    44,    46,    48,    50,    52,
      54,     0,   111,     0,    58,     0,     0,     0,     0,   143,
      71,   125,     0,   126,     0,    91,    20,     9,     0,     7,
       0,   112,   114,     0,     0,     0,     0,   128,     0,   127,
      14,    56,   136,   138,     0,     0,     0,   129,     0,     0,
     140,     0,   137,   139,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,   -21,  -156,    23,    57,     9,    66,
      77,    80,    78,    81,    90,  -156,   -32,   -36,  -156,   -61,
    -156,     0,    27,  -156,   182,  -100,    46,    14,  -156,  -156,
    -156,   123,  -156,  -156,   -77,  -156,   -89,    -1,  -156,  -156,
     -20,   -85,  -155,  -156,  -156,  -156,  -156,   216,  -156
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    67,    68,   179,    85,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    86,    97,   157,    98,
      82,    28,    29,    23,    24,    15,   175,    16,    17,    49,
      50,    51,    52,   176,    88,   145,    99,   100,    42,   101,
      31,   103,   104,   105,   106,   107,    18,    19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,    81,   117,    87,   160,    41,   208,   144,     1,   141,
       1,   202,    69,   174,   169,    30,    36,   167,    13,   111,
     118,   119,   102,   112,    40,   177,    21,    14,    25,   164,
      45,    44,   131,   132,   163,   114,   115,   116,   109,    37,
      89,    44,    26,    43,    38,    14,   127,   128,    87,   123,
     203,    43,   117,   226,   133,   134,   164,    39,   164,    48,
     181,   165,   108,   209,   129,   130,    53,    54,    55,    56,
     110,    57,    58,   217,   174,   142,   137,   218,   169,   138,
      12,   201,    12,   170,   180,   214,    32,   120,    33,   121,
      22,   122,    59,    60,    61,   140,   164,   205,   206,    62,
     220,   158,    44,   183,   184,   185,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,   204,   124,   125,   126,   169,   222,   228,   210,   223,
     135,   136,   224,   164,   232,   233,   164,    48,    63,   169,
     190,   191,   192,   193,    65,    66,   240,   212,   162,   242,
     186,   187,   244,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   139,   234,   236,   143,    87,   239,   241,
      44,     2,   164,   164,   156,   219,   159,   164,    53,    54,
      55,    56,   230,    57,    58,   161,   188,   189,   231,   173,
       3,     4,     5,     6,     7,     8,     9,    10,   182,    69,
      11,   194,   195,     2,    59,    60,    61,   207,   216,   225,
     238,    62,    44,   243,   196,    27,    90,   198,   197,    83,
     215,   199,     3,     4,     5,     6,     7,     8,     9,    10,
      46,   200,    11,   172,    35,     0,     0,     0,     0,    91,
       0,     0,    92,    93,    94,     0,     0,     0,    95,     0,
      63,     0,     0,     0,     0,     2,    65,    66,     0,     0,
      96,    53,    54,    55,    56,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     2,    59,    60,    61,
       0,     0,     0,     0,    62,     0,     0,     0,    27,   166,
       0,     0,     0,    47,     0,     3,     4,     5,     6,     7,
       8,     9,    10,     1,     0,    11,     0,     0,     0,     0,
       0,     0,    91,     0,     0,    92,    93,    94,     0,     0,
       0,    95,     0,    63,     0,     0,     0,     0,     2,    65,
      66,     0,     0,    96,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     2,
      59,    60,    61,     0,     0,     0,     0,    62,     0,     0,
       0,    27,   168,     0,     0,    12,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,    93,
      94,     0,     0,     0,    95,     2,    63,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    96,    53,    54,    55,
      56,     0,    57,    58,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,   171,     0,
       0,     0,     2,    59,    60,    61,     0,     0,     0,     0,
      62,     0,     0,     0,    27,   211,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    91,     0,
       0,    92,    93,    94,     0,     0,     0,    95,     0,    63,
       0,     0,     2,     0,     0,    65,    66,     0,     0,    96,
      53,    54,    55,    56,    27,    57,    58,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,     0,     0,     2,    59,    60,    61,     0,
       0,     0,     0,    62,     0,     0,     0,    27,   213,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,    93,    94,     0,     0,     0,
      95,     0,    63,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    96,    53,    54,    55,    56,     0,    57,    58,
       0,    53,    54,    55,    56,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    59,
      60,    61,     0,     0,     0,     0,    62,    59,    60,    61,
      27,   227,     0,     0,    62,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     0,
      53,    54,    55,    56,    91,    57,    58,    92,    93,    94,
       0,     0,     0,    95,     0,    63,     0,     0,     0,     0,
       0,    65,    66,    63,   178,    96,    59,    60,    61,    65,
      66,     0,     0,    62,     0,     0,     0,    27,   229,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,    93,    94,     0,     0,     0,
      95,     0,    63,    59,    60,    61,     0,     0,    65,    66,
      62,     0,    96,     0,    27,   237,     0,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,    92,    93,    94,     0,     0,     0,    95,     0,    63,
      59,    60,    61,     0,     0,    65,    66,    62,     0,    96,
       0,    27,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,    34,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,    93,
      94,    59,    60,    61,    95,     0,    63,     0,    62,     0,
       0,     2,    65,    66,     0,     0,    96,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,     2,    59,    60,    61,     0,    63,     0,     0,
      62,     0,     0,    65,    66,     0,     0,    96,    12,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,    53,    54,    55,    56,     0,    57,    58,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,    63,
       0,     0,     0,     0,     0,    65,    66,     0,    59,    60,
      61,     0,     0,     0,     0,    62,    59,    60,    61,    84,
     221,     0,     0,    62,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,    63,     0,    59,    60,    61,     0,
      65,    66,    63,    62,     0,    64,     0,    84,    65,    66,
      59,    60,    61,    53,    54,    55,    56,    62,    57,    58,
       0,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    63,     0,     0,     0,    62,     0,    65,    66,
       0,    59,    60,    61,     2,     0,    63,   235,    62,     0,
       0,     0,    65,    66,     0,    39,    27,     0,     0,     0,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,    11,     0,   113,     0,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,    63,     0,     0,
       0,     0,     0,    65,    66
};

static const yytype_int16 yycheck[] =
{
       0,    33,    63,    39,    93,    25,   161,    84,     3,    17,
       3,    41,    33,   113,   103,    16,    76,   102,    18,    76,
       8,     9,    42,    80,    25,    76,    12,     0,    14,    80,
      31,    31,    12,    13,    95,    56,    57,    58,    76,    80,
      41,    41,    15,    29,    85,    18,    29,    30,    84,    70,
      80,    37,   113,   208,    34,    35,    80,    39,    80,    32,
     121,    85,    48,    85,    10,    11,     3,     4,     5,     6,
      80,     8,     9,    76,   174,    83,    36,    80,   167,    37,
      75,   142,    75,   103,   120,   170,    75,    75,    77,    77,
      85,    79,    29,    30,    31,    16,    80,   158,   159,    36,
      84,    75,   102,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   157,    31,    32,    33,   214,   203,   212,   164,    76,
      14,    15,    76,    80,   223,   224,    80,   110,    75,   228,
     131,   132,   133,   134,    81,    82,   235,   167,    85,   238,
     127,   128,   241,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    38,   225,   226,    78,   203,    76,    76,
     170,    28,    80,    80,    39,    78,    75,    80,     3,     4,
       5,     6,   218,     8,     9,    75,   129,   130,   220,     3,
      47,    48,    49,    50,    51,    52,    53,    54,     3,   220,
      57,   135,   136,    28,    29,    30,    31,    67,    76,    75,
      65,    36,   212,    85,   137,    40,    41,   139,   138,    37,
     174,   140,    47,    48,    49,    50,    51,    52,    53,    54,
       3,   141,    57,   110,    18,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    28,    81,    82,    -1,    -1,
      85,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    76,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,     3,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    28,    81,
      82,    -1,    -1,    85,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    75,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    73,    28,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,     3,     4,     5,
       6,    -1,     8,     9,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    28,    -1,    -1,    81,    82,    -1,    -1,    85,
       3,     4,     5,     6,    40,     8,     9,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,     3,     4,     5,     6,    -1,     8,     9,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    29,    30,    31,
      40,    41,    -1,    -1,    36,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,
       3,     4,     5,     6,    64,     8,     9,    67,    68,    69,
      -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    75,    76,    85,    29,    30,    31,    81,
      82,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    -1,    -1,    -1,
      73,    -1,    75,    29,    30,    31,    -1,    -1,    81,    82,
      36,    -1,    85,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    -1,    73,    -1,    75,
      29,    30,    31,    -1,    -1,    81,    82,    36,    -1,    85,
      -1,    40,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,     0,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    29,    30,    31,    73,    -1,    75,    -1,    36,    -1,
      -1,    28,    81,    82,    -1,    -1,    85,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    28,    29,    30,    31,    -1,    75,    -1,    -1,
      36,    -1,    -1,    81,    82,    -1,    -1,    85,    75,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    57,     3,     4,     5,     6,    -1,     8,     9,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    29,    30,    31,    40,
      41,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    75,    -1,    29,    30,    31,    -1,
      81,    82,    75,    36,    -1,    78,    -1,    40,    81,    82,
      29,    30,    31,     3,     4,     5,     6,    36,     8,     9,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    75,    -1,    -1,    -1,    36,    -1,    81,    82,
      -1,    29,    30,    31,    28,    -1,    75,    76,    36,    -1,
      -1,    -1,    81,    82,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    47,    48,    49,    50,    51,    52,    53,
      54,    57,    75,   107,   108,   111,   113,   114,   132,   133,
     134,   113,    85,   109,   110,   113,   108,    40,   107,   108,
     123,   126,    75,    77,     0,   133,    76,    80,    85,    39,
     123,   126,   124,   113,   107,   123,     3,    76,   108,   115,
     116,   117,   118,     3,     4,     5,     6,     8,     9,    29,
      30,    31,    36,    75,    78,    81,    82,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   106,   110,    40,    90,   102,   103,   120,   123,
      41,    64,    67,    68,    69,    73,    85,   103,   105,   122,
     123,   125,   126,   127,   128,   129,   130,   131,   113,    76,
      80,    76,    80,    75,    90,    90,    90,   105,     8,     9,
      75,    77,    79,    90,    31,    32,    33,    29,    30,    10,
      11,    12,    13,    34,    35,    14,    15,    36,    37,    38,
      16,    17,    83,    78,   120,   121,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    39,   104,    75,    75,
     122,    75,    85,   105,    80,    85,    41,   127,    41,   122,
     126,    61,   117,     3,   111,   112,   119,    76,    76,    89,
     103,   105,     3,    90,    90,    90,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    96,    97,    98,    99,
     100,   105,    41,    80,   103,   105,   105,    67,   128,    85,
     103,    41,   126,    41,   127,   112,    76,    76,    80,    78,
      84,    41,   120,    76,    76,    75,   128,    41,   127,    41,
     103,   102,   122,   122,   105,    76,   105,    41,    65,    76,
     122,    76,   122,    85,   122
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      95,    95,    96,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   112,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     120,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     124,   123,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   127,   127,   128,   128,   129,   129,   130,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     3,     3,     4,     4,     5,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     7,
       6,     7,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2
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
#line 86 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "ansi.y" /* yacc.c:1646  */
    {cout<<"INSIDE HERE \n";vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 108 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 129 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 130 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 131 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 135 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 136 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 137 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 141 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 142 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 143 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 147 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 148 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 149 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 150 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 151 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 156 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 161 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 162 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 176 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 177 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 181 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 182 "ansi.y" /* yacc.c:1646  */
    {vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)}; (yyval.str) = conversion(temp1);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 186 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 191 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 196 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 215 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 224 "ansi.y" /* yacc.c:1646  */
    { 
					   (yyvsp[0].node)->set_size(size_map[(yyvsp[0].node)->get_type()]); 
					   cout<<"\nOne\n";
					   (yyvsp[0].node)->disp_node(); 
					   type = (yyvsp[0].node);
				     }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 239 "ansi.y" /* yacc.c:1646  */
    {
					string temp = (yyvsp[0].node)->get_identifier();
					int temp_size = (yyvsp[0].node)->get_size();

					(yyvsp[0].node) = new node(*type); 
					
					(yyvsp[0].node)->set_identifier(temp); 
					if(temp_size!=0){
						(yyvsp[0].node)->set_size((yyvsp[0].node)->get_size()*temp_size);
					}
					cout<<"New\n";(yyvsp[0].node)->disp_node();
					test.insert(*(yyvsp[0].node));
				 }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 252 "ansi.y" /* yacc.c:1646  */
    {
		string temp = (yyvsp[-2].node)->get_identifier();
		(yyvsp[-2].node) = new node(*type);
		(yyvsp[-2].node)->set_identifier(temp); 
		(yyvsp[-2].node)->set_value((yyvsp[0].str));
		(yyvsp[-2].node)->disp_node();
		test.insert(*(yyvsp[-2].node));
		}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 264 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 266 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 269 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 282 "ansi.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[0].str),"","",0,scope_count);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 288 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[-3].node)->get_identifier(),"","",atoi((yyvsp[-1].str)),scope_count);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 292 "ansi.y" /* yacc.c:1646  */
    {}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 343 "ansi.y" /* yacc.c:1646  */
    {
		cout<<"OVER JERE\n";
		test.create_map(++scope_count);
		cout<<"DSIPLY IS \n";
		test.display();
		cout<<"SCope count is "<<scope_count<<"\n";
		}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 355 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 357 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 359 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 361 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 363 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 365 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 367 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 369 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 412 "ansi.y" /* yacc.c:1646  */
    {cout<<"FUNCDECL\n";}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 413 "ansi.y" /* yacc.c:1646  */
    {cout<<"DECL\n";}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 417 "ansi.y" /* yacc.c:1646  */
    {cout<<"ONE1\n";}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 418 "ansi.y" /* yacc.c:1646  */
    {cout<<"TWO1\n";}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 419 "ansi.y" /* yacc.c:1646  */
    {cout<<"THREE1\n";}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 420 "ansi.y" /* yacc.c:1646  */
    {cout<<"FOUR1\n";}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2111 "y.tab.c" /* yacc.c:1646  */
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
#line 423 "ansi.y" /* yacc.c:1906  */


void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

#include <stdio.h>
extern char yytext[];
extern int column;
int main(int argc, char *argv[]) {


	scope_count = 0;
    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;



	// #if YYDEBUG
	// 	yydebug = 1;
	// #endif





	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
		cout<<"DISPLAY is \n";
	test.display();

//	fclose(yyout);
	return 0;
}
