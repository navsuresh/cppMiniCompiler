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
#line 1 "test.y" /* yacc.c:339  */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

using namespace std;
ast test;
ast test1;
unordered_map <string,int> size_map;
const char *s = "Hello, World!";   
int flag=0;
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
extern int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}

#line 112 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
    NUM = 259,
    INT = 260,
    FLOAT = 261,
    CHAR = 262,
    DOUBLE = 263,
    VOID = 264,
    AMP = 265,
    DM = 266,
    DP = 267,
    FOR = 268,
    WHILE = 269,
    IF = 270,
    ELSE = 271,
    MAIN = 272,
    AND = 273,
    OR = 274,
    LE = 275,
    GE = 276,
    EQ = 277,
    NE = 278,
    LT = 279,
    GT = 280,
    NO_ELSE = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 47 "test.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 184 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      16,    17,    15,    13,    25,    14,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    20,    21,
      22,    23,    24,    27,    28,    29,    30,    31,    32,    33,
      34,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    73,    74,    78,    97,   100,   119,   123,
     131,   132,   135,   139,   143,   146,   149,   150,   154,   155,
     156,   157,   160,   161,   164,   165,   166,   167,   168,   169,
     170,   171,   177,   178,   181,   182,   185,   186,   189,   190,
     194,   197,   198,   199,   201,   202,   203,   204,   209,   211,
     212,   214,   216,   217,   222,   223,   227,   228,   229,   230,
     231,   235,   236,   237,   238,   241,   246,   251,   256,   261,
     266,   271,   276,   281,   286,   291,   296,   301,   306,   311,
     316,   321,   332,   337,   342,   347,   362,   363,   364,   365,
     366,   370,   371,   372,   373,   374,   375,   376,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "INT", "FLOAT", "CHAR",
  "DOUBLE", "VOID", "AMP", "DM", "DP", "'+'", "'-'", "'*'", "'('", "')'",
  "'['", "']'", "FOR", "WHILE", "IF", "ELSE", "MAIN", "','", "'='", "AND",
  "OR", "LE", "GE", "EQ", "NE", "LT", "GT", "'/'", "'%'", "NO_ELSE", "';'",
  "'{'", "'}'", "$accept", "init", "declaration", "array_st",
  "array_st_usage", "func_declaration", "func_call", "compound_st",
  "STATEMENT_STRUCTURE", "CLOSE", "statement_structure", "statement",
  "while_stmt", "start_if_stmt", "start_if_compound_st", "if_stmt",
  "arg_list_optional", "arg_list_call", "arg_list_call_actual",
  "arg_list_actual", "arg_final", "for_s", "just_before_for",
  "just_before_for_1", "for_stmt", "assignment_st_for", "expression_for",
  "assignment_st_for_1", "assignment_st", "assignment_st_t",
  "assignment_st_f", "type", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    43,    45,    42,    40,    41,    91,    93,
     268,   269,   270,   271,   272,    44,    61,   273,   274,   275,
     276,   277,   278,   279,   280,    47,    37,   281,    59,   123,
     125
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -127,   211,  -127,    86,    43,  -127,  -127,  -127,  -127,  -127,
       7,   132,   170,   173,    55,   234,   248,  -127,  -127,  -127,
    -127,     5,    13,  -127,   106,  -127,  -127,    14,    16,   248,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,   248,    86,  -127,   112,   262,   262,   248,  -127,   262,
     262,   262,    89,   -11,   -13,    22,  -127,    27,     4,    32,
     185,   187,  -127,   116,    13,    13,    48,  -127,  -127,  -127,
     298,    42,   303,  -127,  -127,    -7,    53,  -127,  -127,    46,
      50,  -127,    88,    80,    94,  -127,  -127,    64,   303,  -127,
      68,    64,   175,  -127,  -127,  -127,    98,   107,   115,  -127,
    -127,    73,  -127,  -127,   110,   169,  -127,   156,   136,   136,
    -127,   276,  -127,   199,   199,  -127,  -127,  -127,   136,   136,
    -127,  -127,    12,   192,     5,  -127,  -127,  -127,  -127,   217,
    -127,  -127,    36,   176,  -127,  -127,  -127,  -127,  -127,   248,
     264,    12,   136,   199,   199,   199,   199,   199,   199,   136,
     196,    48,  -127,   248,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   219,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,    81,    82,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     2,    84,     3,
      85,     0,    60,    64,     0,    72,    71,    35,     0,     0,
      74,    73,    80,    67,    70,    68,    69,    77,    75,    78,
      76,     0,    79,    83,     0,     0,     0,     0,     6,     0,
       0,     0,    81,     0,     0,     0,    37,     0,    34,     0,
      56,     0,    65,    81,    58,    59,    57,    61,    62,    63,
      33,     0,    33,     7,     5,     0,     0,     9,    66,     0,
      32,    39,     0,     0,     0,    12,    36,     0,     0,    40,
       9,     0,     0,    10,    38,    11,     0,     0,     0,    18,
      13,     0,    17,    19,    26,    27,    21,    48,     0,     0,
      20,     0,    41,     0,     0,    15,    14,    16,     0,     0,
      50,    49,    51,     0,     0,    45,    44,    46,    47,    81,
      97,    98,     0,     0,    29,    28,    31,    30,    53,    55,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    52,    55,    23,    22,    91,    92,    94,    93,
      96,    95,    25,    24,    42,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,     1,  -127,  -127,  -127,  -127,   -85,  -127,  -127,
    -127,   -97,  -127,  -127,  -127,  -127,   162,  -127,  -127,  -127,
     151,  -127,  -127,  -127,  -127,  -127,    99,  -126,   -15,   186,
     104,     2,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    99,    54,    18,    19,    20,    93,   100,   116,
     101,   102,   103,   104,   105,   106,    79,    57,    58,    80,
      81,   107,   108,   109,   110,   122,   139,   123,    21,    22,
      23,   111,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    44,    17,    24,   117,    72,    95,   132,   133,    55,
      32,   126,   128,   150,    60,   130,   131,    56,    45,    46,
      59,   135,   137,   125,   127,    73,    61,   165,    49,    76,
      47,    85,    66,   134,   136,    45,    46,   156,   157,   158,
     159,   160,   161,    48,    75,   155,    83,    47,    50,    51,
     138,    77,   163,   142,    30,    31,    86,   154,    39,    40,
      74,    45,    46,    87,   162,   143,   144,   145,   146,   147,
     148,    41,    82,    47,    82,    88,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      82,    89,   124,    96,    97,    98,    55,    25,    26,    90,
      25,    26,    27,    92,    28,    70,    -8,    71,   121,    52,
       4,    91,    29,   115,   112,    29,    10,    11,    12,    13,
      14,    15,    16,   113,   151,    45,    46,    25,    26,    62,
      53,   114,    27,   118,    28,    33,    34,    47,   151,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    67,    68,    69,    96,    97,    98,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    35,    36,    92,    37,    38,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,   119,   149,   120,    96,    97,    98,    45,    46,
      45,    46,   130,   131,    78,   143,   144,   145,   146,   147,
     148,     2,    47,   164,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    25,    26,
     141,    64,    65,    27,    84,    71,   166,    42,     4,    94,
     153,     0,     0,    29,    10,    11,    12,    13,    14,    15,
      16,     3,     4,     0,     0,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    63,     4,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,    15,    16,   129,
       4,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,   143,   144,   145,   146,   147,   148,     0,
       0,    56,   152,     5,     6,     7,     8,     9,     5,     6,
       7,     8,     9
};

static const yytype_int16 yycheck[] =
{
      15,    16,     1,     1,   101,    16,    91,   113,   114,    24,
       3,   108,   109,   139,    29,     3,     4,     3,    13,    14,
       4,   118,   119,   108,   109,    38,    41,   153,    15,    25,
      25,    38,    47,   118,   119,    13,    14,   143,   144,   145,
     146,   147,   148,    38,    17,   142,     4,    25,    35,    36,
      38,    19,   149,    17,    11,    12,     3,   142,     3,     4,
      38,    13,    14,    17,   149,    29,    30,    31,    32,    33,
      34,    16,    70,    25,    72,    25,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      88,     3,   107,    20,    21,    22,   111,    11,    12,    19,
      11,    12,    16,    39,    18,    16,    38,    18,   107,     3,
       4,    17,    26,    40,    16,    26,    10,    11,    12,    13,
      14,    15,    16,    16,   139,    13,    14,    11,    12,    17,
      24,    16,    16,    23,    18,     3,     4,    25,   153,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    49,    50,    51,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     3,     4,    39,     3,     4,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    23,    17,    38,    20,    21,    22,    13,    14,
      13,    14,     3,     4,    17,    29,    30,    31,    32,    33,
      34,     0,    25,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    11,    12,
      38,    45,    46,    16,    72,    18,    17,     3,     4,    88,
     141,    -1,    -1,    26,    10,    11,    12,    13,    14,    15,
      16,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,     3,     4,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,     3,
       4,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    29,    30,    31,    32,    33,    34,    -1,
      -1,     3,    38,     5,     6,     7,     8,     9,     5,     6,
       7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    42,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    43,    45,    46,
      47,    69,    70,    71,    72,    11,    12,    16,    18,    26,
      11,    12,     3,     3,     4,     3,     4,     3,     4,     3,
       4,    16,     3,    69,    69,    13,    14,    25,    38,    15,
      35,    36,     3,    24,    44,    69,     3,    58,    59,     4,
      69,    69,    17,     3,    70,    70,    69,    71,    71,    71,
      16,    18,    16,    38,    38,    17,    25,    19,    17,    57,
      60,    61,    72,     4,    57,    38,     3,    17,    25,     3,
      19,    17,    39,    48,    61,    48,    20,    21,    22,    43,
      49,    51,    52,    53,    54,    55,    56,    62,    63,    64,
      65,    72,    16,    16,    16,    40,    50,    52,    23,    23,
      38,    43,    66,    68,    69,    48,    52,    48,    52,     3,
       3,     4,    73,    73,    48,    52,    48,    52,    38,    67,
      73,    38,    17,    29,    30,    31,    32,    33,    34,    17,
      68,    69,    38,    67,    48,    52,    73,    73,    73,    73,
      73,    73,    48,    52,    17,    68,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    42,    43,    43,    43,    44,    45,
      46,    46,    47,    48,    49,    50,    51,    51,    52,    52,
      52,    52,    53,    53,    54,    55,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    62,    63,    64,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     2,     3,     4,     4,
       6,     6,     5,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     1,     1,     3,     3,
       3,     3,     1,     0,     1,     0,     3,     1,     3,     1,
       2,     2,     5,     6,     2,     2,     2,     2,     0,     1,
       1,     0,     2,     1,     1,     0,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1
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
        case 5:
#line 78 "test.y" /* yacc.c:1646  */
    {
		printf("flag is %d\n",flag);
		if(flag==1){
		printf("entered here also\n");
		(yyvsp[-1].node)->set_size(size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		(yyvsp[-1].node)->set_scope(scope_count+1);
		cout<<"this is the scope "<<(yyvsp[-1].node)->get_scope();
		test1.insert(*(yyvsp[-1].node));
		}
		else{
		// cout<<"BIG SCOPE\n";
		//cout<<"LINE N1O IS "<<yylineno<<"\n";
		//cout<<"get_identifier is "<<$2->get_identifier()<<"\n";
		(yyvsp[-1].node)->set_size(size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		//cout<<"DISPLAY IS "<<"\n";
		//$2->disp_node(); 
		test1.insert(*(yyvsp[-1].node));}}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "test.y" /* yacc.c:1646  */
    {

	}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "test.y" /* yacc.c:1646  */
    {
		if(flag==1){
		flag=0;
				(yyvsp[-1].node)->set_size((yyvsp[-1].node)->get_size()*size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		// $2->disp_node(); 
		test1.insert(*(yyvsp[-1].node));
		(yyvsp[-1].node)->set_scope(scope_count+1);
		}
		else{
		(yyvsp[-1].node)->set_size((yyvsp[-1].node)->get_size()*size_map[(yyvsp[-2].str)]);
		(yyvsp[-1].node)->set_type((yyvsp[-2].str));
		// $2->disp_node(); 
		test1.insert(*(yyvsp[-1].node));
	}
	}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 119 "test.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[-3].str),"","",(yyvsp[-1].str),scope_count);}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 124 "test.y" /* yacc.c:1646  */
    {
	vector<string> temp1{(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)};
    (yyval.str) = conversion(temp1);
	}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 139 "test.y" /* yacc.c:1646  */
    {scope_count+=1;}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "test.y" /* yacc.c:1646  */
    {scope_count-=1;}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 156 "test.y" /* yacc.c:1646  */
    {cout<<"FOOOR LOOP\n";}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 201 "test.y" /* yacc.c:1646  */
    {cout<<"HERE1\n";flag=0;}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 202 "test.y" /* yacc.c:1646  */
    {cout<<"HERE2\n";flag=0;}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 203 "test.y" /* yacc.c:1646  */
    {cout<<"HERE3\n";flag=0;}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "test.y" /* yacc.c:1646  */
    {cout<<"HERE4\n";flag=0;}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "test.y" /* yacc.c:1646  */
    { cout << "entered here\n";flag=1;}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 227 "test.y" /* yacc.c:1646  */
    {if(flag){ printf("this is true\n");scope_count+=1;}(yyval.node) = new node(yylineno,(yyvsp[-2].str),"",(yyvsp[0].node)->get_value(),0,scope_count);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 229 "test.y" /* yacc.c:1646  */
    {(yyval.node)->set_value((yyvsp[-2].node)->get_value()+'+'+(yyvsp[0].node)->get_value());}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 230 "test.y" /* yacc.c:1646  */
    {(yyval.node)->set_value((yyvsp[-2].node)->get_value()+'-'+(yyvsp[0].node)->get_value());}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 231 "test.y" /* yacc.c:1646  */
    {"ASSIFNMENT T\n";}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "test.y" /* yacc.c:1646  */
    {(yyval.node)->set_value((yyvsp[-2].node)->get_value()+'*'+(yyvsp[0].node)->get_value());}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "test.y" /* yacc.c:1646  */
    {(yyval.node)->set_value((yyvsp[-2].node)->get_value()+'/'+(yyvsp[0].node)->get_value());}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 237 "test.y" /* yacc.c:1646  */
    { cout<<"HEREERE\n";(yyval.node)->set_value((yyvsp[-2].node)->get_value()+'%'+(yyvsp[0].node)->get_value());}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 242 "test.y" /* yacc.c:1646  */
    {
		vector<string> temp1{(yyvsp[-2].str),(yyvsp[-1].node)->get_value(),(yyvsp[0].str)};
		(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 247 "test.y" /* yacc.c:1646  */
    {
		vector<string> temp1{(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[-1].node)->get_value(),(yyvsp[0].str)};
		(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 257 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 262 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 267 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 282 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 287 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 292 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 297 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 302 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 307 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 312 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,(yyvsp[0].str),"","",0,scope_count);
		}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 317 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 322 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
		//	cout<<"COVERSION IS "<<conversion(temp1)<<"\n";
		//	cout<<"LINE NO IS "<<yylineno<<"\n";
			// $$ = new node(yylineno,$1,"","",0,scope_count);
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		
		//	cout<<"ID DISPLAY IS\n";
		//	$$->disp_node();
		}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 333 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 338 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[-1].str),(yyvsp[0].node)->get_value()};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 343 "test.y" /* yacc.c:1646  */
    {	
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 348 "test.y" /* yacc.c:1646  */
    {
			vector<string> temp1{(yyvsp[0].str)};
			(yyval.node) = new node(yylineno,"","",conversion(temp1),0,scope_count);
		}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 362 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 363 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 364 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 365 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 366 "test.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1808 "y.tab.c" /* yacc.c:1646  */
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
#line 379 "test.y" /* yacc.c:1906  */





void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {


    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;
//	char dest[100];
//	char another[7];
//	cout <<"entered here"<<"\n";
//	strcpy(another,"_c.txt");
//	cout <<"entered here"<<"\n";

	//strcpy(dest,(char *)argv[1]);
	//strcat(dest,another);
	// cout<<"HELLO WORLD\n";
	yyin = fopen(argv[1], "r");
	//yyout= fopen(argv[1],"w");
	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}


	test1.display();
	fclose(yyin);
//	fclose(yyout);

	return 0;
}



