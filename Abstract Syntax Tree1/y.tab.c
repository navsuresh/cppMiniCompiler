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
#line 1 "ast.y" /* yacc.c:339  */


#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#if YYBISON
union YYSTYPE;
int yylex();
void yyerror();
#endif
extern char *yytext;


 typedef struct node
 {
 struct node *left;
 struct node *right;
 char *token;
 } node;
 node *mknode(node *left, node *right, char *token);
 void printtree(node *tree);
 void free_root(node *tree);
#define YYSTYPE struct node *
struct node *root;

#line 92 "y.tab.c" /* yacc.c:339  */

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

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
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    44,    45,    46,    50,    51,    52,    53,
      54,    55,    56,    60,    61,    65,    66,    67,    68,    69,
      70,    74,    75,    76,    77,    78,    79,    85,    86,    87,
      88,    92,    93,    94,    98,    99,   100,   104,   105,   106,
     107,   108,   112,   113,   114,   118,   119,   123,   124,   128,
     129,   133,   134,   138,   139,   143,   144,   148,   149,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     167,   168,   172,   176,   177,   181,   182,   186,   187,   191,
     192,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     209,   210,   214,   218,   219,   220,   221,   222,   223,   224,
     228,   229,   233,   234,   238,   239,   243,   244,   248,   253,
     254,   258,   259,   263,   264,   265,   266,   272,   273,   274,
     275,   276,   277,   278,   283,   284,   288,   289,   293,   294,
     298,   299,   303,   304,   305,   309,   310,   314,   315,   319,
     320,   321,   322
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
  "CONTINUE", "BREAK", "RETURN", "IFX", "'('", "')'", "'['", "']'", "'.'",
  "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
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
  "statement", "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "translation_unit", "external_declaration", "function_definition", YY_NULLPTR
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
     315,   316,    40,    41,    91,    93,    46,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     675,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,    29,  -110,     7,   757,   716,   -23,   664,  -110,  -110,
      -9,  -110,   -47,  -110,   705,  -110,   153,  -110,     7,  -110,
     716,     8,   511,  -110,  -110,  -110,    29,  -110,    55,  -110,
     716,  -110,  -110,  -110,   611,   623,   623,     5,    11,    13,
     623,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
     110,   615,   623,   -18,    25,   124,    10,   135,    16,    42,
      61,    73,    -1,  -110,  -110,   -33,  -110,  -110,   208,   263,
    -110,  -110,  -110,    70,  -110,  -110,  -110,  -110,    29,   103,
     104,  -110,     9,  -110,  -110,  -110,   108,  -110,    55,  -110,
    -110,  -110,   528,  -110,  -110,  -110,   623,   623,   488,    69,
    -110,  -110,   540,   623,   172,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   623,  -110,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
     623,   623,   623,   623,   623,   623,   623,   623,  -110,  -110,
     318,  -110,  -110,   373,  -110,  -110,   727,  -110,   174,  -110,
    -110,   -48,   757,  -110,   121,    74,    80,   488,  -110,  -110,
      88,  -110,   -12,  -110,  -110,  -110,  -110,  -110,   -18,   -18,
      25,    25,   124,   124,   124,   124,    10,    10,   135,    16,
      42,    61,    73,   -43,  -110,  -110,   694,  -110,   417,  -110,
    -110,  -110,    55,  -110,  -110,  -110,   456,   456,   583,  -110,
     623,  -110,   623,  -110,  -110,  -110,   133,  -110,   456,   100,
    -110,  -110,   456,  -110,   456,  -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    82,    83,    84,    85,    88,    89,    86,    87,
      81,     0,   138,     0,    75,     0,    92,     0,   135,   137,
       0,    73,     0,    77,    79,    76,     0,   124,     0,   142,
       0,     0,     0,     1,   136,    94,     0,    74,     0,   140,
       0,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,   128,   117,     6,
      15,    27,     0,    31,    34,    37,    42,    45,    47,    49,
      51,    53,    55,    57,    70,     0,   126,   113,     0,     0,
     114,   115,   116,    79,   125,   141,   106,    99,   105,     0,
     100,   102,     0,    96,    27,    72,     0,    78,     0,   109,
      80,   139,     0,    19,    16,    17,     0,     0,     0,     0,
      11,    12,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    59,     0,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   119,
       0,   118,   127,     0,   104,    97,     0,    98,     0,    95,
     111,     0,    91,   108,     0,     0,     0,     0,     5,     8,
       0,    13,     0,    10,    58,    28,    29,    30,    32,    33,
      35,    36,    40,    41,    38,    39,    43,    44,    46,    48,
      50,    52,    54,     0,    71,   120,     0,   121,     0,   101,
     103,   107,     0,   110,    90,    20,     0,     0,     0,     9,
       0,     7,     0,   123,   122,   112,   130,   132,     0,     0,
      14,    56,     0,   133,     0,   131,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,   -31,  -110,    33,    35,  -109,    40,
      45,    53,    56,    54,    58,  -110,   -30,   -32,  -110,   -25,
    -110,     0,     4,  -110,   164,   -97,    39,    57,  -110,  -110,
    -110,    46,  -110,  -110,   -86,  -110,   -76,   114,   -17,   -70,
     -75,  -110,  -110,  -110,   188,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,   170,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   126,    75,
      96,    27,    28,    22,    23,    14,   163,    15,    16,    89,
      90,    91,    92,   164,   100,   161,    76,    77,    30,    79,
      80,    81,    82,    17,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,    94,    95,   152,    13,   162,    99,    40,   150,    78,
       1,    86,   160,   103,   104,   105,   145,    12,    25,   202,
      36,    13,   135,   136,   147,   109,   182,   183,   184,   185,
      84,   127,     1,   167,   147,    88,    37,   203,   212,    31,
      84,    32,     2,     3,     4,     5,     6,     7,     8,     9,
     148,   128,    10,   211,    35,   147,   129,   130,    41,    42,
      43,    44,   153,    45,    46,   162,    99,   106,    20,    11,
      24,    87,   157,   107,   152,   108,   158,   109,    84,   146,
     171,   165,   166,   198,   141,    83,   137,   138,   172,   144,
      21,    11,   208,    83,   174,   131,   132,   175,   176,   177,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,   194,   215,    50,   110,   111,
     142,   193,   152,    51,    52,    53,    54,    55,    56,    29,
     216,   217,   168,   196,   133,   134,   147,   206,    39,    98,
     143,   147,   223,   207,    85,   154,   225,   147,   226,   139,
     140,   209,    38,    84,   101,   210,    41,    42,    43,    44,
      88,    45,    46,   224,   178,   179,   155,   147,   180,   181,
      99,   156,   112,   159,   113,   173,   114,   201,   220,   186,
     187,    94,   221,   219,   205,   222,   188,     2,     3,     4,
       5,     6,     7,     8,     9,   189,    84,    10,   191,   190,
      97,   204,   200,   192,    47,    34,     0,    48,     0,    49,
       0,    41,    42,    43,    44,    50,    45,    46,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    26,    58,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    47,
       0,     0,    48,     0,    49,     0,    41,    42,    43,    44,
      50,    45,    46,     0,     0,     0,    51,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    26,   149,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    47,     0,     0,    48,     0,    49,
       0,    41,    42,    43,    44,    50,    45,    46,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    26,   151,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    47,
       0,     0,    48,     0,    49,     0,    41,    42,    43,    44,
      50,    45,    46,     0,     0,     0,    51,    52,    53,    54,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    26,   195,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,     0,     0,    10,     0,     0,
      41,    42,    43,    44,    47,    45,    46,    48,     0,    49,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    26,   197,    41,
      42,    43,    44,     0,    45,    46,     0,     0,    47,     0,
       0,    48,     0,    49,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
      56,    41,    42,    43,    44,     0,    45,    46,     0,     0,
      57,    26,   214,     0,     0,     0,     0,    47,     0,     0,
      48,     0,    49,     0,    41,    42,    43,    44,    50,    45,
      46,     0,     0,     0,    51,    52,    53,    54,    55,    56,
       0,    41,    42,    43,    44,     0,    45,    46,     0,    57,
      26,     0,     0,    41,    42,    43,    44,     0,    45,    46,
      50,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,     2,     3,     4,     5,     6,     7,     8,     9,
       0,    57,    10,    50,     0,     0,    93,     0,     0,    51,
      52,    53,    54,    55,    56,     0,    41,    42,    43,    44,
      50,    45,    46,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    50,   169,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,    41,    42,    43,    44,     0,    45,
      46,     0,     0,     0,     0,     0,    41,    42,    43,    44,
       0,    45,    46,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,     0,     0,    50,   218,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     1,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     1,    51,
      52,    53,    54,    55,    56,    50,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,   125,     2,     3,
       4,     5,     6,     7,     8,     9,     0,     0,    10,     2,
       3,     4,     5,     6,     7,     8,     9,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    11,    10,     2,
       3,     4,     5,     6,     7,     8,     9,     0,     0,    10,
       2,     3,     4,     5,     6,     7,     8,     9,     0,     0,
      10,     2,     3,     4,     5,     6,     7,     8,     9,     0,
       0,    10,     0,     0,     0,   199,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    26,
       0,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      26,    10
};

static const yytype_int16 yycheck[] =
{
       0,    32,    32,    79,     0,   102,    38,    24,    78,    26,
       3,     3,    98,    44,    45,    46,    17,    17,    14,    67,
      67,    17,    12,    13,    67,    50,   135,   136,   137,   138,
      30,    62,     3,   108,    67,    31,    83,    85,    81,    62,
      40,    64,    34,    35,    36,    37,    38,    39,    40,    41,
      83,    69,    44,    65,    63,    67,    74,    75,     3,     4,
       5,     6,    79,     8,     9,   162,    98,    62,    11,    62,
      13,    63,    63,    62,   150,    62,    67,   102,    78,    80,
     112,   106,   107,   153,    68,    28,    76,    77,   113,    16,
      83,    62,   167,    36,   126,    70,    71,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   147,   202,    62,     8,     9,
      78,   146,   198,    68,    69,    70,    71,    72,    73,    15,
     206,   207,    63,   150,    10,    11,    67,    63,    24,    84,
      79,    67,   218,    63,    30,    88,   222,    67,   224,    14,
      15,    63,    82,   153,    40,    67,     3,     4,     5,     6,
     156,     8,     9,    63,   131,   132,    63,    67,   133,   134,
     202,    67,    62,    65,    64,     3,    66,     3,   210,   139,
     140,   212,   212,   208,    63,    52,   141,    34,    35,    36,
      37,    38,    39,    40,    41,   142,   196,    44,   144,   143,
      36,   162,   156,   145,    51,    17,    -1,    54,    -1,    56,
      -1,     3,     4,     5,     6,    62,     8,     9,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    -1,    56,    -1,     3,     4,     5,     6,
      62,     8,     9,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,     3,     4,     5,     6,    62,     8,     9,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    -1,    56,    -1,     3,     4,     5,     6,
      62,     8,     9,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,
       3,     4,     5,     6,    51,     8,     9,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    51,    -1,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      83,    84,    85,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      54,    -1,    56,    -1,     3,     4,     5,     6,    62,     8,
       9,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    83,
      84,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    83,    44,    62,    -1,    -1,    65,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,     3,     4,     5,     6,
      62,     8,     9,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    62,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,     3,    68,
      69,    70,    71,    72,    73,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    82,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    44,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    62,    44,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      84,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    34,    35,    36,    37,    38,    39,    40,    41,
      44,    62,   107,   108,   111,   113,   114,   129,   130,   131,
     113,    83,   109,   110,   113,   108,    84,   107,   108,   123,
     124,    62,    64,     0,   130,    63,    67,    83,    82,   123,
     124,     3,     4,     5,     6,     8,     9,    51,    54,    56,
      62,    68,    69,    70,    71,    72,    73,    83,    85,    87,
      88,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   122,   123,   124,   125,
     126,   127,   128,   113,   107,   123,     3,    63,   108,   115,
     116,   117,   118,    65,    90,   102,   106,   110,    84,   103,
     120,   123,    62,    90,    90,    90,    62,    62,    62,   105,
       8,     9,    62,    64,    66,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    82,   104,    90,    69,    74,
      75,    70,    71,    10,    11,    12,    13,    76,    77,    14,
      15,    68,    78,    79,    16,    17,    80,    67,    83,    85,
     125,    85,   122,   124,   113,    63,    67,    63,    67,    65,
     120,   121,   111,   112,   119,   105,   105,   126,    63,    63,
      89,   103,   105,     3,   103,    90,    90,    90,    92,    92,
      93,    93,    94,    94,    94,    94,    95,    95,    96,    97,
      98,    99,   100,   105,   103,    85,   124,    85,   125,    48,
     117,     3,    67,    85,   112,    63,    63,    63,   126,    63,
      67,    65,    81,    85,    85,   120,   122,   122,    63,   105,
     103,   102,    52,   122,    63,   122,   122
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
     112,   112,   113,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   120,
     120,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   131
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
       2,     1,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     3,     3,
       4,     4,     5,     5,     1,     2,     1,     2,     1,     2,
       5,     7,     5,     6,     7,     1,     2,     1,     1,     4,
       3,     3,     2
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
#line 43 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,yytext);}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,yytext);}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,yytext);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),",");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "ast.y" /* yacc.c:1646  */
    {(yyvsp[-1])=mknode((yyvsp[0]),0,"++"); (yyval)=(yyvsp[-1]);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "ast.y" /* yacc.c:1646  */
    {(yyvsp[-1])=mknode((yyvsp[0]),0,"--"); (yyval)=(yyvsp[-1]);}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "ast.y" /* yacc.c:1646  */
    {(yyvsp[-1])=mknode((yyvsp[0]),0,(yyvsp[-1])->token);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"&");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"*");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"+");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"-");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"~");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"!");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 85 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 86 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"*");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 87 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"/");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 88 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"%");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 92 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 93 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"+");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"-");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 98 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 99 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"<<");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),">>");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 104 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"<");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),">");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"<=");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),">=");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"==");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"!=");}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"&");}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 123 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"^");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 128 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"|");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 133 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 134 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"&&");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 138 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 139 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"||");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 143 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 144 "ast.y" /* yacc.c:1646  */
    {(yyvsp[-4])=mknode((yyvsp[-4]),(yyvsp[-2]),"if");  (yyval)=mknode((yyvsp[-4]),(yyvsp[0]),"else");}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 148 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 149 "ast.y" /* yacc.c:1646  */
    {  (yyval)=mknode((yyvsp[-2]),(yyvsp[0]),(yyvsp[-1])->token); free_root((yyvsp[-1]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 153 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"=");}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 154 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"*=");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 155 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"*=");}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 156 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"%=");}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 157 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"+=");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 158 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"-=");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 159 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"<<=");}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 160 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,">>=");}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 161 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"&&=");}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 162 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"^=");}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 163 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"||=");}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 167 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 168 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),",");}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 172 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 176 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 182 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0]),(yyvsp[-1])->token);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 186 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[-1]),",");}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 191 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 192 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"=");}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 196 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"void");}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 197 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"char");}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 198 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"short");}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 199 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"int");}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 200 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"long");}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 201 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"float");}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 202 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"double");}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 203 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"signed");}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 204 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,"unsigned");}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 209 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0]),(yyvsp[-1])->token);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 210 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 214 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 218 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,yytext);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 219 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 220 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-3]),(yyvsp[-1]),"[]");}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 224 "ast.y" /* yacc.c:1646  */
    {}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 228 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 233 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 234 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[-1]),",");}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 238 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0]),(yyvsp[-1])->token);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 239 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0,yytext);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 244 "ast.y" /* yacc.c:1646  */
    {(yyvsp[0])=mknode(0,0,yytext); (yyval)=mknode((yyvsp[-2]),(yyvsp[0]),",");}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 248 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 253 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 254 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 258 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 259 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),",");}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 263 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 264 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 265 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 266 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 272 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0," ");}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 273 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 274 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 275 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[-1])," ");}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 276 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[-1])," ");}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 277 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-3]),mknode((yyvsp[-2]),(yyvsp[-1])," ")," ");}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 278 "ast.y" /* yacc.c:1646  */
    { (yyval)=mknode((yyvsp[-3]),mknode((yyvsp[-2]),(yyvsp[-1])," ")," ");}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 283 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 284 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0])," ");}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 288 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 289 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0])," ");}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 293 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(0,0," ");}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 294 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 298 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"IF");}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 299 "ast.y" /* yacc.c:1646  */
    {(yyvsp[-6])=mknode((yyvsp[-4]),(yyvsp[-2]),"if"); (yyval)=mknode((yyvsp[-6]),(yyvsp[0]),"else");}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 303 "ast.y" /* yacc.c:1646  */
    { (yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"while");}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 304 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode(mknode((yyvsp[-3]),(yyvsp[-2]),"for"),(yyvsp[0]),(yyvsp[-2])->token);}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 305 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-4]),mknode(mknode((yyvsp[-3]),(yyvsp[0])," "),(yyvsp[-2])," "),"for");}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 309 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]); if(root==NULL){root=(yyval); }}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 310 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0])," ");root=(yyval);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 314 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 315 "ast.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 319 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-3]),(yyvsp[0]),"func");}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 320 "ast.y" /* yacc.c:1646  */
    { (yyval)=mknode((yyvsp[-2]),(yyvsp[0]),(yyvsp[-1])->token);}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 321 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-2]),(yyvsp[0]),"func");}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 322 "ast.y" /* yacc.c:1646  */
    {(yyval)=mknode((yyvsp[-1]),(yyvsp[0]),"func");}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2357 "y.tab.c" /* yacc.c:1646  */
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
#line 324 "ast.y" /* yacc.c:1906  */


extern int column;
void yyerror(){
	printf("Parsing Unsuccessful!!\n");
}
char depth[ 2056 ];
int di=0;


void Push( char c )
{
    depth[ di++ ] = ' ';
    depth[ di++ ] = c;
    depth[ di++ ] = ' ';
    depth[ di++ ] = ' ';
    depth[ di ] = 0;
}
 
void Pop( )
{
    depth[ di -= 4 ] = 0;
}
 
void Print( node* tree )
{	if(tree==NULL){
	return ;
}
    printf( "(%s)\n", tree->token );
 
    if ( tree->left )
    {
        printf( "%s \\__", depth );
        Push( '|' );
        Print( tree->left );
        Pop( );
 		if(tree->right){
        printf( "%s \\__", depth );
        Push( ' ' );
        Print( tree->right );
        Pop( );
        }
    }

}



int main(int argc, char *argv[]) {

	if (!yyparse()) {
		printf("\n\nPreorder traversal of the abstract syntax tree\n");
		printtree(root);
		printf("\n\n\n\nTree\n");
		Print(root);
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
	free_root(root);
//	fclose(yyout);
	return 0;
}

node *mknode(node *left, node *right, char *token)
{ /* malloc the node */
 node *newnode = (node *)malloc(sizeof(node));
 char *newstr = (char *)malloc(strlen(token)+1);
 strcpy(newstr, token);
 newnode->left = left;
 newnode->right = right;
 newnode->token = newstr;
 return(newnode);
}


void free_root(node *tree){
	if(tree==NULL){
	return ;
	}
	if(tree->left){
	free_root(tree->left);
	}
	if(tree->right){
	free_root(tree->right);
	}
	free(tree->token);
	free(tree);
}

void printtree(node *tree)
{
 int i;
 if (tree->left || tree->right)
 printf("(");
 printf(" %s ", tree->token);
 if (tree->left)
 printtree(tree->left);
 if (tree->right)
 printtree(tree->right);
 if (tree->left || tree->right)
 printf(")");
}
