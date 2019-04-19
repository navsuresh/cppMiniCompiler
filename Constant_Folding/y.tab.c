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
#include <stdlib.h>

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

void fun_int(node* temp){


	if(temp->get_type()=="int"){
			// cout<<"INTEGER1\n";
					int i = 0;
					char* temp_char = &(temp->get_value())[0];
					while(temp_char[i]!='\0'){
						if(temp_char[i]=='.'){
							temp_char[i]='\0';
							break;
						}
						// cout<<"temp_char is "<<temp_char[i]<<"\n";
						i++;
					}
			// cout<<"temp_char is "<<temp_char<<"\n";
			temp->set_value(temp_char);
		}
}
// int flag = 1;


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


#line 136 "y.tab.c" /* yacc.c:339  */

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
#line 72 "ansi.y" /* yacc.c:355  */

	char* str;
	class node* node;

#line 243 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 260 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

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
       0,   107,   107,   118,   119,   120,   124,   125,   126,   127,
     128,   129,   143,   158,   159,   163,   164,   178,   190,   191,
     192,   196,   197,   198,   199,   200,   201,   207,   216,   229,
     240,   254,   255,   256,   260,   264,   265,   266,   267,   268,
     272,   273,   274,   278,   282,   286,   290,   291,   295,   296,
     300,   301,   305,   306,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   343,   344,   348,   352,   353,
     357,   363,   367,   368,   372,   385,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   414,   415,   419,   423,
     430,   431,   432,   433,   434,   435,   439,   440,   444,   445,
     449,   450,   454,   455,   459,   464,   465,   466,   470,   471,
     475,   476,   477,   478,   479,   486,   486,   497,   499,   501,
     503,   505,   507,   509,   511,   518,   519,   523,   524,   528,
     529,   533,   534,   535,   539,   540,   544,   545,   546,   547,
     551,   552,   556,   557,   561,   562,   566,   567,   568,   569
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
  "statement_list", "expression_statement", "for_expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,    43,
      45,    42,    47,    37,    60,    62,    38,    94,   124,    61,
     123,   125,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    40,    41,    91,    93,    46,
      44,   126,    33,    63,    58,    59
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     303,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,    -1,  -101,     6,   136,   384,    -7,  1053,  -101,
    -101,   -49,  -101,   -59,  -101,  1083,  -101,  -101,  -101,     6,
    -101,   384,   220,    57,  -101,  -101,  -101,    -1,  -101,   953,
    -101,   384,   168,    11,  -101,  -101,  -101,  -101,    -1,   -43,
      -9,  -101,     2,  -101,  -101,  -101,  1009,  1043,  1043,  -101,
    -101,  -101,  -101,  1043,  -101,  -101,  -101,  -101,    15,  -101,
    1043,    26,   -10,  -101,    41,    29,  -101,  -101,  -101,    79,
      -6,  -101,    23,  -101,   953,   493,  -101,  -101,  -101,  -101,
    -101,    49,    56,   799,    72,   840,  -101,  -101,   -51,  -101,
    -101,  -101,   251,   334,  -101,  -101,  -101,  -101,  -101,  -101,
     101,  -101,   133,   898,  -101,  -101,  -101,     9,  -101,  -101,
     961,  1043,   156,  -101,  1043,  1043,  1043,  1043,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  -101,  -101,
     -34,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  1043,  1043,  1043,    93,   666,  -101,   -33,  1043,
    -101,  -101,   417,  -101,  -101,   500,  -101,  -101,  -101,   136,
    -101,   103,  -101,  -101,    45,  -101,    20,  -101,  -101,  -101,
    -101,    26,    26,  -101,  -101,  -101,  -101,    41,    41,  -101,
      79,    42,  -101,   703,  -101,    54,    61,    94,  -101,   -13,
    -101,   856,  -101,  -101,  -101,   583,  -101,   695,  -101,  -101,
    -101,  1043,  -101,  1043,  -101,  -101,   799,   799,  1043,  -101,
     995,  -101,   752,  -101,  -101,  -101,   115,  -101,    90,   799,
     102,  -101,   799,   106,  -101,   799,  -101,  -101,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    85,    77,    78,    79,    80,    83,    84,    81,
      82,    76,     0,   145,     0,    70,     0,    88,     0,   142,
     144,     0,    68,     0,    72,    74,    71,   115,   125,     0,
     149,     0,     0,     0,     1,   143,    90,     0,    69,     0,
     147,     0,     0,    74,   126,   148,   102,    95,   101,     0,
      96,    98,     0,     2,     3,     4,     0,     0,     0,    23,
      24,    22,    21,     0,    92,    25,    26,     6,    15,    27,
       0,    31,    34,    35,    40,    43,    44,    45,    46,    48,
      50,    67,     0,    73,     0,    27,    52,   105,    75,   146,
     117,     0,     0,     0,     0,     0,   129,    65,     0,   127,
     110,   116,     0,     0,   111,   112,   113,   114,   100,    93,
       0,    94,     0,     0,    19,    16,    17,     0,    11,    12,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,   108,
       0,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    54,     0,     0,     0,     0,     0,   140,     0,     0,
     130,   119,     0,   118,   128,     0,    97,    99,   103,    87,
     104,     0,     5,     8,     0,    13,     0,    10,    28,    29,
      30,    32,    33,    38,    39,    36,    37,    41,    42,    47,
      49,     0,   106,     0,    53,     0,     0,     0,   131,     0,
     133,     0,   141,    66,   120,     0,   121,     0,    86,    20,
       9,     0,     7,     0,   107,   109,     0,     0,     0,   132,
       0,   123,     0,   122,    14,    51,   134,   136,     0,     0,
       0,   124,     0,     0,   138,     0,   135,   137,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,   -21,  -101,    17,  -101,    71,    34,
    -101,  -101,  -101,    59,    70,  -101,   -32,   -36,  -101,   -57,
    -101,     0,    10,  -101,   158,  -100,    38,     3,  -101,  -101,
    -101,   100,  -101,  -101,   -76,  -101,   -89,    14,  -101,  -101,
     -20,   -86,    12,  -101,  -101,  -101,  -101,  -101,   193,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    67,    68,   174,    85,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    86,    97,   152,    98,
      82,    28,    29,    23,    24,    15,   170,    16,    17,    49,
      50,    51,    52,   171,    88,   140,    99,   100,    42,   101,
      31,   103,   104,   201,   105,   106,   107,    18,    19,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,    81,     1,    87,   155,    41,   117,   192,   139,     1,
      14,   136,    69,   169,   164,    21,   162,    25,    13,   127,
     128,    37,   102,   118,   119,    26,    38,    36,    14,   159,
      30,    44,    43,   109,   160,   114,   115,   116,   158,    40,
      43,    44,    48,   133,   134,    45,   193,   159,    87,   123,
      39,   108,   202,   129,   130,    89,   117,   124,   125,   126,
      53,    54,    55,    56,   176,    57,    58,   159,    32,   169,
      33,   110,   219,   164,    12,   131,   132,   137,   111,   207,
     191,    12,   112,   165,   175,   172,    59,    60,    61,   159,
     120,    22,   121,    62,   122,   135,   195,   196,   212,   199,
     159,   138,    44,   178,   179,   180,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,   194,   215,   164,   222,
      48,   210,   159,   203,   153,   211,   213,   226,   227,     2,
     216,   154,    63,   164,   159,    64,   168,   217,    65,    66,
     234,   159,   205,   236,   181,   182,   238,   156,     3,     4,
       5,     6,     7,     8,     9,    10,   200,    87,    11,   177,
     197,   228,   166,   230,     2,    44,   233,   187,   188,   218,
     159,    53,    54,    55,    56,   224,    57,    58,   235,   209,
     232,   225,   159,     3,     4,     5,     6,     7,     8,     9,
      10,   237,    69,    11,   189,    83,     2,    59,    60,    61,
     183,   184,   185,   186,    62,    44,   190,   208,    27,    90,
     167,    35,     0,   220,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    46,     0,    11,     0,     0,     0,     0,
       0,     0,    91,     0,     0,    92,    93,    94,     0,     0,
       0,    95,     0,    63,     0,     0,     0,     0,     2,    65,
      66,     0,     0,    96,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     2,
      59,    60,    61,     0,     0,     0,     0,    62,     0,     0,
       0,    27,   161,     0,     0,     0,    47,     0,     3,     4,
       5,     6,     7,     8,     9,    10,     1,     0,    11,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,    93,
      94,     0,     0,     0,    95,     0,    63,     0,     0,     0,
       0,     2,    65,    66,     0,     0,    96,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,     2,    59,    60,    61,     0,     0,     0,     0,
      62,     0,     0,     0,    27,   163,     0,     0,    12,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    91,     0,
       0,    92,    93,    94,     0,     0,     0,    95,     0,    63,
       0,     0,     2,     0,     0,    65,    66,     0,     0,    96,
      53,    54,    55,    56,    27,    57,    58,     0,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,     0,     0,     2,    59,    60,    61,     0,
       0,     0,     0,    62,     0,     0,     0,    27,   204,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,    93,    94,     0,     0,     0,
      95,     0,    63,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    96,    53,    54,    55,    56,     0,    57,    58,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,     0,     0,     0,     0,     0,     0,     2,    59,
      60,    61,   151,     0,     0,     0,    62,     0,     0,     0,
      27,   206,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     0,
       0,     0,     0,     0,    91,     0,     0,    92,    93,    94,
       0,     0,     0,    95,     0,    63,     0,     0,     0,     0,
       0,    65,    66,     0,     0,    96,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    59,    60,    61,     0,     0,     0,     0,    62,
       0,     0,     0,    27,   221,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,     0,     0,     0,     0,     0,    91,     0,     0,
      92,    93,    94,     0,     0,     0,    95,     0,    63,     0,
       0,     0,     0,     0,    65,    66,     0,     0,    96,    53,
      54,    55,    56,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    59,    60,    61,    53,    54,
      55,    56,    62,    57,    58,     0,    53,    54,    55,    56,
       0,    57,    58,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    59,    60,    61,     0,     0,     0,
       0,    62,    59,    60,    61,    27,   223,     0,     0,    62,
       0,    63,     0,    84,   214,     0,     0,    65,    66,     0,
       0,   198,     0,     0,     0,    53,    54,    55,    56,    91,
      57,    58,    92,    93,    94,     0,     0,     0,    95,     0,
      63,     0,     0,     0,     0,     0,    65,    66,    63,     0,
      96,    59,    60,    61,    65,    66,     0,     0,    62,     0,
       0,     0,    27,   231,     0,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,    92,
      93,    94,     0,     0,     0,    95,     0,    63,    59,    60,
      61,     0,     0,    65,    66,    62,     0,    96,     0,    27,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    91,    57,    58,    92,    93,    94,    59,
      60,    61,    95,     0,    63,     0,    62,     0,     0,     0,
      65,    66,     0,     0,    96,    59,    60,    61,     0,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,    65,    66,     0,     0,   157,     2,    59,    60,    61,
       0,    63,     0,     0,    62,     0,     0,    65,    66,     0,
       0,    96,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    11,    53,    54,    55,    56,
       0,    57,    58,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,    63,     0,     0,     0,     0,     0,    65,
      66,     0,    59,    60,    61,     0,     0,     0,     0,    62,
      59,    60,    61,    84,     0,     0,     0,    62,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,    59,    60,    61,     0,    63,     0,
       0,    62,     0,     0,    65,    66,    63,   173,    59,    60,
      61,     0,    65,    66,     0,    62,    53,    54,    55,    56,
       0,    57,    58,    34,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,   229,    59,    60,    61,     0,    65,    66,     0,    62,
       0,     2,     0,     0,   113,     0,     0,     0,     0,     0,
      65,    66,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     2,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,    39,    27,    65,    66,     0,     0,    12,     0,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11
};

static const yytype_int16 yycheck[] =
{
       0,    33,     3,    39,    93,    25,    63,    41,    84,     3,
       0,    17,    33,   113,   103,    12,   102,    14,    18,    29,
      30,    80,    42,     8,     9,    15,    85,    76,    18,    80,
      16,    31,    29,    76,    85,    56,    57,    58,    95,    25,
      37,    41,    32,    14,    15,    31,    80,    80,    84,    70,
      39,    48,    85,    12,    13,    41,   113,    31,    32,    33,
       3,     4,     5,     6,   121,     8,     9,    80,    75,   169,
      77,    80,    85,   162,    75,    34,    35,    83,    76,   165,
     137,    75,    80,   103,   120,    76,    29,    30,    31,    80,
      75,    85,    77,    36,    79,    16,   153,   154,    78,   156,
      80,    78,   102,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   152,   193,   207,   205,
     110,    76,    80,   159,    75,    80,    84,   216,   217,    28,
      76,    75,    75,   222,    80,    78,     3,    76,    81,    82,
     229,    80,   162,   232,   127,   128,   235,    75,    47,    48,
      49,    50,    51,    52,    53,    54,   156,   193,    57,     3,
      67,   218,    61,   220,    28,   165,    76,   133,   134,    75,
      80,     3,     4,     5,     6,   211,     8,     9,    76,    76,
      65,   213,    80,    47,    48,    49,    50,    51,    52,    53,
      54,    85,   213,    57,   135,    37,    28,    29,    30,    31,
     129,   130,   131,   132,    36,   205,   136,   169,    40,    41,
     110,    18,    -1,   201,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,     3,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    28,    81,
      82,    -1,    -1,    85,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    76,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,     3,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    28,    81,    82,    -1,    -1,    85,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    75,    -1,
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
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    39,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,     3,     4,
       5,     6,    36,     8,     9,    -1,     3,     4,     5,     6,
      -1,     8,     9,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    29,    30,    31,    40,    41,    -1,    -1,    36,
      -1,    75,    -1,    40,    41,    -1,    -1,    81,    82,    -1,
      -1,    85,    -1,    -1,    -1,     3,     4,     5,     6,    64,
       8,     9,    67,    68,    69,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    75,    -1,
      85,    29,    30,    31,    81,    82,    -1,    -1,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    -1,    -1,    -1,    73,    -1,    75,    29,    30,
      31,    -1,    -1,    81,    82,    36,    -1,    85,    -1,    40,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    64,     8,     9,    67,    68,    69,    29,
      30,    31,    73,    -1,    75,    -1,    36,    -1,    -1,    -1,
      81,    82,    -1,    -1,    85,    29,    30,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    85,    28,    29,    30,    31,
      -1,    75,    -1,    -1,    36,    -1,    -1,    81,    82,    -1,
      -1,    85,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    57,     3,     4,     5,     6,
      -1,     8,     9,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      29,    30,    31,    40,    -1,    -1,    -1,    36,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    75,    -1,
      -1,    36,    -1,    -1,    81,    82,    75,    76,    29,    30,
      31,    -1,    81,    82,    -1,    36,     3,     4,     5,     6,
      -1,     8,     9,     0,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    29,    30,    31,    -1,    81,    82,    -1,    36,
      -1,    28,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    28,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    39,    40,    81,    82,    -1,    -1,    75,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    47,    48,    49,    50,    51,    52,    53,
      54,    57,    75,   107,   108,   111,   113,   114,   133,   134,
     135,   113,    85,   109,   110,   113,   108,    40,   107,   108,
     123,   126,    75,    77,     0,   134,    76,    80,    85,    39,
     123,   126,   124,   113,   107,   123,     3,    76,   108,   115,
     116,   117,   118,     3,     4,     5,     6,     8,     9,    29,
      30,    31,    36,    75,    78,    81,    82,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   106,   110,    40,    90,   102,   103,   120,   123,
      41,    64,    67,    68,    69,    73,    85,   103,   105,   122,
     123,   125,   126,   127,   128,   130,   131,   132,   113,    76,
      80,    76,    80,    75,    90,    90,    90,   105,     8,     9,
      75,    77,    79,    90,    31,    32,    33,    29,    30,    12,
      13,    34,    35,    14,    15,    16,    17,    83,    78,   120,
     121,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    39,   104,    75,    75,   122,    75,    85,   105,    80,
      85,    41,   127,    41,   122,   126,    61,   117,     3,   111,
     112,   119,    76,    76,    89,   103,   105,     3,    90,    90,
      90,    92,    92,    94,    94,    94,    94,    95,    95,    99,
     100,   105,    41,    80,   103,   105,   105,    67,    85,   105,
     107,   129,    85,   103,    41,   126,    41,   127,   112,    76,
      76,    80,    78,    84,    41,   120,    76,    76,    75,    85,
     128,    41,   127,    41,   103,   102,   122,   122,   105,    76,
     105,    41,    65,    76,   122,    76,   122,    85,   122
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    93,    94,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    98,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   121,   121,
     122,   122,   122,   122,   122,   124,   123,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   131,   131,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     0,     3,     1,     2,     2,
       3,     3,     4,     4,     5,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     5,     7,     5,     7,     6,     7,
       2,     3,     1,     2,     1,     1,     4,     3,     3,     2
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
#line 108 "ansi.y" /* yacc.c:1646  */
    {
		if(!test.declaration_exists((yyvsp[0].str),scope_count)){
		flag=0;
		cout<<"\n"<<(yyvsp[0].str)<<" Identifier not declared previously\n";
	}
	else{
		// cout<<"Value of identifier is "<<test.identifier_value($1,scope_count);
	}
	(yyval.str)=(yyvsp[0].str);
	}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "ansi.y" /* yacc.c:1646  */
    {
		 (yyval.str)=(yyvsp[-1].str);

		node* temp1 = test.get_identifier((yyvsp[-1].str),scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) +1));
			fun_int(temp1);
		}

	}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "ansi.y" /* yacc.c:1646  */
    {
		(yyval.str)=(yyvsp[-1].str);

		node* temp1 = test.get_identifier((yyvsp[-1].str),scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) -1));
			fun_int(temp1);
		}
	}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 163 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 164 "ansi.y" /* yacc.c:1646  */
    {
		
		(yyval.str)=(yyvsp[0].str);

		node* temp1 = test.get_identifier((yyvsp[0].str),scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) +1));
			fun_int(temp1);
		}

	}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "ansi.y" /* yacc.c:1646  */
    {
		(yyval.str)=(yyvsp[0].str);

		node* temp1 = test.get_identifier((yyvsp[0].str),scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) -1));
			fun_int(temp1);
		}
	}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 208 "ansi.y" /* yacc.c:1646  */
    {
		 if((yyvsp[0].str)[0]>='0' && (yyvsp[0].str)[0]<='9'){
			 (yyval.str) = (yyvsp[0].str);
		 }
		 else{
			 (yyval.str) = test.identifier_value((yyvsp[0].str),scope_count);
		 }
	}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 217 "ansi.y" /* yacc.c:1646  */
    {

		 if((yyvsp[0].str)[0]>='0' && (yyvsp[0].str)[0]<='9'){
			 (yyvsp[0].str) = (yyvsp[0].str);
		 }
		 else{
			 (yyvsp[0].str) = test.identifier_value((yyvsp[0].str),scope_count);
		 }


		(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) * atof((yyvsp[0].str))).c_str());
	}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 230 "ansi.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].str)[0]>='0' && (yyvsp[0].str)[0]<='9'){
			 (yyvsp[0].str) = (yyvsp[0].str);
		 }
		 else{
			 (yyvsp[0].str) = test.identifier_value((yyvsp[0].str),scope_count);
		 }

		(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) / atof((yyvsp[0].str))).c_str());
	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 241 "ansi.y" /* yacc.c:1646  */
    {
		 if((yyvsp[0].str)[0]>='0' && (yyvsp[0].str)[0]<='9'){
			 (yyvsp[0].str) = (yyvsp[0].str);
		 }
		 else{
			 (yyvsp[0].str) = test.identifier_value((yyvsp[0].str),scope_count);
		 }

		(yyval.str) = strdup(to_string(atoi((yyvsp[-2].str)) % atoi((yyvsp[0].str))).c_str());
	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 254 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 255 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) + atof((yyvsp[0].str))).c_str());}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) - atof((yyvsp[0].str))).c_str());}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 260 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 264 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 265 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) < atof((yyvsp[0].str))).c_str());}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 266 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) > atof((yyvsp[0].str))).c_str());}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 267 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) <= atof((yyvsp[0].str))).c_str());}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 268 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) >= atof((yyvsp[0].str))).c_str());}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 272 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 273 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) == atof((yyvsp[0].str))).c_str());}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 274 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) != atof((yyvsp[0].str))).c_str());}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 278 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 282 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 286 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 290 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 291 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) && atof((yyvsp[0].str))).c_str());}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 296 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = strdup(to_string(atof((yyvsp[-2].str)) || atof((yyvsp[0].str))).c_str());}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 300 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 305 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 307 "ansi.y" /* yacc.c:1646  */
    {
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";

		node* temp1 = test.get_identifier((yyvsp[-2].str),scope_count);
		if(!temp1){
			cout<<"error\n";
		}

		else{
			temp1->set_value((yyvsp[0].str));
			// cout<<"HERE2\n";
			if(temp1){
				fun_int(temp1);
			}
		}
		
		
	}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 329 "ansi.y" /* yacc.c:1646  */
    {(yyval.str) = (yyvsp[0].str);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 348 "ansi.y" /* yacc.c:1646  */
    {(yyval.str)=(yyvsp[0].str);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 357 "ansi.y" /* yacc.c:1646  */
    { 
					   (yyvsp[0].node)->set_size(size_map[(yyvsp[0].node)->get_type()]); 
					//    cout<<"\nOne\n";
					//    $1->disp_node(); 
					   type = (yyvsp[0].node);
				     }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 372 "ansi.y" /* yacc.c:1646  */
    {
					string temp = (yyvsp[0].node)->get_identifier();
					int temp_size = (yyvsp[0].node)->get_size();

					(yyvsp[0].node) = new node(*type); 
					
					(yyvsp[0].node)->set_identifier(temp); 
					if(temp_size!=0){
						(yyvsp[0].node)->set_size((yyvsp[0].node)->get_size()*temp_size);
					}
					// cout<<"New\n";$1->disp_node();
					test.insert(*(yyvsp[0].node));
				 }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 385 "ansi.y" /* yacc.c:1646  */
    {
		string temp = (yyvsp[-2].node)->get_identifier();
		(yyvsp[-2].node) = new node(*type);
		(yyvsp[-2].node)->set_identifier(temp); 
		(yyvsp[-2].node)->set_value((yyvsp[0].str));
		node* temp1 = (yyvsp[-2].node);
		if(temp1->get_type()=="int"){
			fun_int(temp1);
		}
		// $1->disp_node();
		test.insert(*(yyvsp[-2].node));
		}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 401 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 403 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 405 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 406 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,"",(yyvsp[0].str),"",0,scope_count);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 419 "ansi.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 424 "ansi.y" /* yacc.c:1646  */
    {
		if(test.declaration_exists((yyvsp[0].str),scope_count)){
		flag=0;
		cout<<"\n"<<(yyvsp[0].str)<<" "<<"Identifier already declared previously\n";
		}
		(yyval.node) = new node(yylineno,(yyvsp[0].str),"","",0,scope_count);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 431 "ansi.y" /* yacc.c:1646  */
    {(yyval.node) = new node(yylineno,(yyvsp[-3].node)->get_identifier(),"","",atoi((yyvsp[-1].str)),scope_count);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 435 "ansi.y" /* yacc.c:1646  */
    {}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 486 "ansi.y" /* yacc.c:1646  */
    {
		// cout<<"OVER JERE\n";
		test.create_map(++scope_count);
		// cout<<"DSIPLY IS \n";
		// test.display();
		// cout<<"SCope count is "<<scope_count<<"\n";
		}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 498 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 500 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 502 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 504 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 506 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 508 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 510 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 512 "ansi.y" /* yacc.c:1646  */
    {scope_count--;}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2201 "y.tab.c" /* yacc.c:1646  */
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
#line 572 "ansi.y" /* yacc.c:1906  */


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





	if (!yyparse() && flag) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
		cout<<"DISPLAY is \n";
	test.display();

//	fclose(yyout);
	return 0;
}
