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
#line 1 "splc.y" /* yacc.c:339  */

    #include "APT.h"
    #include "lex.yy.c"
    FILE* FILE_OUT;
    int errors = 0;
    #define MISSING_RP_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing parenthesis ')'\n", e->lineno);\
    }
    #define MISSING_SEMI_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT, "Error type B at Line %d: Missing semicolon ';'\n", e->lineno);\
    }
     #define MISSING_COMMA_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT, "Error type B at Line %d: Missing comma ','\n", e->lineno);\
    }
    #define MISSING_RB_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing ']'\n", e->lineno);\
    }
    #define MISSING_RC_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing '}'\n", e->lineno);\
    }
    #define MISSING_RQ_ERROR(e){\
        errors++;\
        fprintf(FILE_OUT,  "Error type B at Line %d: Missing closing '\n", e->lineno);\
    }
        
    void yyerror(const char*);

#line 99 "splc.tab.c" /* yacc.c:339  */

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
   by #include "splc.tab.h".  */
#ifndef YY_YY_SPLC_TAB_H_INCLUDED
# define YY_YY_SPLC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    HEX_INT = 259,
    FLOAT = 260,
    CHAR = 261,
    ID = 262,
    TYPE = 263,
    STRUCT = 264,
    IF = 265,
    ELSE = 266,
    WHILE = 267,
    RETURN = 268,
    DOT = 269,
    SEMI = 270,
    COMMA = 271,
    ASSIGN = 272,
    LT = 273,
    LE = 274,
    GT = 275,
    GE = 276,
    NE = 277,
    EQ = 278,
    PLUS = 279,
    MINUS = 280,
    MUL = 281,
    DIV = 282,
    AND = 283,
    OR = 284,
    NOT = 285,
    LP = 286,
    RP = 287,
    LB = 288,
    RB = 289,
    LC = 290,
    RC = 291,
    ERROR = 292,
    WRONG_CHAR = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "splc.y" /* yacc.c:355  */

    Node* Node;

#line 182 "splc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SPLC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "splc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   107,   108,   112,   113,   114,   115,   119,
     125,   126,   137,   138,   142,   143,   144,   152,   153,   154,
     155,   161,   166,   175,   176,   177,   181,   189,   190,   191,
     198,   203,   204,   212,   213,   217,   218,   219,   220,   221,
     222,   223,   227,   231,   235,   239,   247,   248,   252,   253,
     260,   261,   265,   266,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     301,   307,   311,   316,   320,   325,   332,   333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "HEX_INT", "FLOAT", "CHAR", "ID",
  "TYPE", "STRUCT", "IF", "ELSE", "WHILE", "RETURN", "DOT", "SEMI",
  "COMMA", "ASSIGN", "LT", "LE", "GT", "GE", "NE", "EQ", "PLUS", "MINUS",
  "MUL", "DIV", "AND", "OR", "NOT", "LP", "RP", "LB", "RB", "LC", "RC",
  "ERROR", "WRONG_CHAR", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifier", "StructSpecifier", "VarDec", "FunDec",
  "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def",
  "DecList", "Dec", "Exp", "Args", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF -62

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define YYTABLE_NINF -29

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   -62,    53,    61,   -62,    -1,    63,   -62,    31,   -62,
     -62,   -62,    40,   -62,   -62,    62,   -11,    73,    -1,   101,
     -62,   -62,    69,    10,    -1,   -62,    69,    19,    -1,   -62,
     -62,    69,    26,   227,   -62,   -62,    11,    23,   248,    34,
      64,    46,   -62,   -62,   -62,    66,   -62,   -62,    -1,    -1,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,    82,    98,
     100,   259,   259,   259,   259,   -62,   -62,   -62,    20,   248,
      68,   259,   -62,   -62,    69,   -62,   -62,    43,   259,   259,
      97,   347,    70,   126,   -62,   -62,   -62,   -62,   121,   -62,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   305,   -62,   -62,   -62,   284,
      27,   155,   184,   -62,   -62,   -62,   -62,   -62,   305,   243,
     243,   243,   243,   243,   243,   347,   347,    70,    70,   345,
     325,   213,   305,   259,   -62,   -62,   248,   248,   248,   248,
     -62,   -62,   -62,    93,   124,   -62,   -62,   248,   248,   -62,
     -62
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    12,     0,     0,     2,     4,     0,    13,    15,     1,
       3,     8,    17,     6,    20,     0,    10,     0,    47,     0,
       9,     5,     0,     0,    47,     7,     0,     0,    47,    26,
      24,     0,     0,     0,    17,    11,     0,     0,    34,    52,
       0,    50,    16,    14,    46,    30,    25,    23,     0,     0,
      21,    18,    22,    19,    75,    76,    77,    78,    74,     0,
       0,     0,     0,     0,     0,    80,    85,    36,     0,    34,
       0,     0,    49,    48,     0,    29,    27,     0,     0,     0,
       0,    68,    69,     0,    32,    31,    33,    41,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    51,    83,    71,    87,
       0,     0,     0,    42,    37,    81,    67,    73,    54,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    55,
      56,     0,    79,     0,    82,    70,     0,     0,     0,     0,
      84,    72,    86,    43,    38,    45,    40,     0,     0,    44,
      39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,   127,   -62,   114,     4,   -62,   -20,   -62,   -23,
     -62,   120,    72,   249,    -9,   -62,    65,   -62,   -61,     5
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    15,    26,     7,    16,    17,    32,
      33,    67,    68,    69,    27,    28,    40,    41,    70,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    81,    82,    83,     6,    22,    39,     1,     2,     6,
     105,    45,    50,    36,    37,    38,   109,   111,   112,    44,
      42,    84,    23,    31,    52,    75,    76,    46,   134,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   107,    51,    54,    55,    56,    57,
      58,    71,    31,    31,    39,    43,    85,    53,    47,   135,
       8,     9,    74,    20,    11,    72,    18,    23,    62,    87,
      12,    19,   109,    63,    64,   108,    34,    21,    13,    73,
      65,    66,    88,    89,    88,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   113,    23,
      14,   103,    29,   103,   147,   104,    14,   104,    24,     1,
       2,    88,   114,    77,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   115,   117,    78,
     103,    79,    10,    30,   104,   148,    35,    25,   142,   106,
      88,    86,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   136,     0,   116,   103,
       0,     0,     0,   104,     0,     0,     0,     0,     0,    88,
       0,     0,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   138,     0,   137,   103,     0,
       0,     0,   104,     0,     0,     0,     0,     0,    88,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   140,     0,   139,   103,     0,     0,
       0,   104,     0,     0,     0,     0,     0,    88,    48,     0,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    49,     0,     0,   103,   141,     0,     0,
     104,    54,    55,    56,    57,    58,     0,    88,    59,   -28,
      60,    61,    54,    55,    56,    57,    58,    97,    98,    99,
     100,     0,     0,    62,     0,     0,   103,     0,    63,    64,
     104,     0,     0,    24,    62,    65,    66,     0,     0,    63,
      64,     0,     0,     0,     0,     0,    65,    66,    88,     0,
     133,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,     0,     0,     0,   103,     0,    88,
       0,   104,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,   103,    88,
       0,     0,   104,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,   103,    88,
       0,    88,   104,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    99,   100,     0,     0,     0,   103,     0,
     103,     0,   104,     0,   104,   143,   144,   145,   146,     0,
       0,     0,     0,     0,     0,     0,   149,   150
};

static const yytype_int16 yycheck[] =
{
      61,    62,    63,    64,     0,    16,    26,     8,     9,     5,
      71,    31,     1,     3,     4,    24,    77,    78,    79,    28,
       1,     1,    33,    19,     1,    48,    49,     1,     1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,     1,    34,     3,     4,     5,     6,
       7,    17,    48,    49,    74,    36,    36,    34,    32,    32,
       7,     0,    16,     1,     1,     1,    35,    33,    25,     1,
       7,    31,   133,    30,    31,    32,     7,    15,    15,    15,
      37,    38,    14,    15,    14,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     1,    33,
      37,    33,     1,    33,    11,    37,    37,    37,    35,     8,
       9,    14,    15,    31,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     1,     7,    31,
      33,    31,     5,    32,    37,    11,    22,    17,   133,    74,
      14,    69,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     1,    -1,    32,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     1,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     1,    -1,    32,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    14,     1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    16,    -1,    -1,    33,    34,    -1,    -1,
      37,     3,     4,     5,     6,     7,    -1,    14,    10,    32,
      12,    13,     3,     4,     5,     6,     7,    24,    25,    26,
      27,    -1,    -1,    25,    -1,    -1,    33,    -1,    30,    31,
      37,    -1,    -1,    35,    25,    37,    38,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    33,    -1,    14,
      -1,    37,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    33,    14,
      -1,    -1,    37,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,    14,
      -1,    14,    37,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    26,    27,    -1,    -1,    -1,    33,    -1,
      33,    -1,    37,    -1,    37,   136,   137,   138,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    40,    41,    42,    44,    45,     7,     0,
      41,     1,     7,    15,    37,    43,    46,    47,    35,    31,
       1,    15,    16,    33,    35,    50,    44,    53,    54,     1,
      32,    44,    48,    49,     7,    43,     3,     4,    53,    46,
      55,    56,     1,    36,    53,    46,     1,    32,     1,    16,
       1,    34,     1,    34,     3,     4,     5,     6,     7,    10,
      12,    13,    25,    30,    31,    37,    38,    50,    51,    52,
      57,    17,     1,    15,    16,    48,    48,    31,    31,    31,
      57,    57,    57,    57,     1,    36,    51,     1,    14,    15,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    33,    37,    57,    55,     1,    32,    57,
      58,    57,    57,     1,    15,     1,    32,     7,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    16,     1,    32,     1,    32,     1,    32,
       1,    34,    58,    52,    52,    52,    52,    11,    11,    52,
      52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    42,    42,    42,
      43,    43,    44,    44,    45,    45,    45,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    48,
      49,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     2,     3,
       1,     3,     1,     1,     5,     2,     5,     1,     4,     4,
       1,     4,     4,     4,     3,     4,     3,     3,     1,     3,
       2,     4,     4,     2,     0,     2,     1,     3,     5,     7,
       5,     2,     3,     5,     7,     5,     2,     0,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     4,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     3,     4,     1,     3,     1
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
#line 99 "splc.y" /* yacc.c:1646  */
    {
            (yyval.Node) = createAPTNode("Program", 1, (yyvsp[0].Node));
            if(errors == 0)
                printTree((yyval.Node), 0, FILE_OUT);
        }
#line 1430 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 107 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDefList", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1436 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Epsilon", -1); }
#line 1442 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDef", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1448 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDef", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1454 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 114 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDef", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1460 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("ExtDef", 1, (yyvsp[-1].Node)); }
            MISSING_SEMI_ERROR((yyvsp[-1].Node));
        }
#line 1469 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("ExtDef", 2, (yyvsp[-2].Node), (yyvsp[-1].Node)); }
        }
#line 1477 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 125 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDecList", 1, (yyvsp[0].Node)); }
#line 1483 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 126 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ExtDecList", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1489 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 137 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Specifier", 1, (yyvsp[0].Node)); }
#line 1495 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 138 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Specifier", 1, (yyvsp[0].Node)); }
#line 1501 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 142 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("StructSpecifier", 5, (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1507 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 143 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("StructSpecifier", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1513 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 144 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("StructSpecifier", 4, (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); 
            MISSING_RC_ERROR((yyvsp[-1].Node));
        }
#line 1523 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 152 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("VarDec", 1, (yyvsp[0].Node)); }
#line 1529 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 153 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("VarDec", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1535 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 154 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("VarDec", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1541 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("VarDec", 1, (yyvsp[0].Node)); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", (yyvsp[0].Node)->lineno, (yyvsp[0].Node)->content);

        }
#line 1552 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 161 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("VarDec", 3, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); 
            MISSING_RB_ERROR((yyvsp[-1].Node));
        }
#line 1562 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 166 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("VarDec", 3, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); 
            MISSING_RB_ERROR((yyvsp[-1].Node));
        }
#line 1572 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 175 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("FunDec", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1578 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 176 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("FunDec", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1584 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 177 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("FunDec", 3, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_RP_ERROR((yyvsp[-1].Node));
        }
#line 1593 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 181 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("FunDec", 2, (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_RP_ERROR((yyvsp[-1].Node));
        }
#line 1602 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 189 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("VarList", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1608 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 190 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("VarList", 1, (yyvsp[0].Node)); }
#line 1614 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 191 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("VarList", 2, (yyvsp[-2].Node), (yyvsp[0].Node)); }
            errors++;
            MISSING_COMMA_ERROR((yyvsp[-2].Node));
        }
#line 1624 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 198 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("ParamDec", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1630 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 203 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("CompSt", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1636 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 204 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("CompSt", 3, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); 
            MISSING_RC_ERROR((yyvsp[-1].Node));
        }
#line 1646 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("StmtList", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1652 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 213 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Epsilon", -1); }
#line 1658 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 217 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1664 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 218 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[0].Node)); }
#line 1670 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 219 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1676 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 220 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 5, (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1682 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 221 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 7, (yyvsp[-6].Node), (yyvsp[-5].Node), (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1688 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 222 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Stmt", 5, (yyvsp[-4].Node), (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1694 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 223 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[-1].Node)); }
            MISSING_SEMI_ERROR((yyvsp[-1].Node));
        }
#line 1703 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 227 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[-2].Node)); }
            MISSING_SEMI_ERROR((yyvsp[-1].Node));
        }
#line 1712 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 231 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[-4].Node)); }
            MISSING_RP_ERROR((yyvsp[-2].Node));
        }
#line 1721 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 235 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[-6].Node)); }
            MISSING_RP_ERROR((yyvsp[-4].Node));
        }
#line 1730 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "splc.y" /* yacc.c:1646  */
    {
            (yyval.Node) = createAPTNode("Stmt", 1, (yyvsp[-4].Node));
            MISSING_RP_ERROR((yyvsp[-2].Node)); 
        }
#line 1739 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 247 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("DefList", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1745 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 248 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Epsilon", -1); }
#line 1751 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 252 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Def", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1757 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 253 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Def", 2, (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_SEMI_ERROR((yyvsp[-2].Node));
        }
#line 1766 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 260 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("DecList", 1, (yyvsp[0].Node)); }
#line 1772 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 261 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("DecList", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1778 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 265 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Dec", 1, (yyvsp[0].Node)); }
#line 1784 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 266 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Dec", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1790 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 270 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1796 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 271 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1802 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 272 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1808 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 273 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1814 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 274 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1820 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 275 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1826 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 276 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1832 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 277 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1838 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 278 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1844 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 279 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1850 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 280 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1856 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 281 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1862 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1868 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 283 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1874 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 284 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1880 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 285 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 2, (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1886 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 286 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1892 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 287 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1898 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 288 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 4, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1904 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 289 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 1910 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 290 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node)); }
#line 1916 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 291 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node)); }
#line 1922 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 292 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node)); }
#line 1928 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 293 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node)); }
#line 1934 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 294 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node)); }
#line 1940 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 295 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", (yyvsp[-1].Node)->lineno, (yyvsp[-1].Node)->content);

        }
#line 1951 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 301 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("Epsilon", -1); 
            fprintf(FILE_OUT, "Error type A at Line %d: unknown lexeme %s\n", (yyvsp[0].Node)->lineno, (yyvsp[0].Node)->content);
        }
#line 1961 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 307 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Exp", 2, (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_RP_ERROR((yyvsp[-1].Node));
        }
#line 1970 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 311 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Exp", 3, (yyvsp[-3].Node), (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_RP_ERROR((yyvsp[-1].Node));
        }
#line 1979 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 316 "splc.y" /* yacc.c:1646  */
    {
            {(yyval.Node) = createAPTNode("Exp", 2, (yyvsp[-2].Node), (yyvsp[-1].Node)); }
            MISSING_RP_ERROR((yyvsp[-1].Node));
        }
#line 1988 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 320 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("Exp", 1, (yyvsp[-3].Node)); 
            MISSING_RB_ERROR((yyvsp[-1].Node));
        }
#line 1998 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 325 "splc.y" /* yacc.c:1646  */
    {
            errors++;
            (yyval.Node) = createAPTNode("Exp", 1, (yyvsp[0].Node));
            MISSING_RQ_ERROR((yyvsp[0].Node));
        }
#line 2008 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 332 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Args", 3, (yyvsp[-2].Node), (yyvsp[-1].Node), (yyvsp[0].Node)); }
#line 2014 "splc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 333 "splc.y" /* yacc.c:1646  */
    {(yyval.Node) = createAPTNode("Args", 1, (yyvsp[0].Node)); }
#line 2020 "splc.tab.c" /* yacc.c:1646  */
    break;


#line 2024 "splc.tab.c" /* yacc.c:1646  */
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
#line 337 "splc.y" /* yacc.c:1906  */


void yyerror(char const* s){

}
int main(int argc, char** argv){
    if(argc == 2){

        int file_len = strlen(argv[1]);
        char* output_file_name = (char*)malloc(sizeof(char) * (file_len + 3));
        strcpy(output_file_name, argv[1]);
        output_file_name[file_len-3] = 'o';
        output_file_name[file_len-2] = 'u';
        output_file_name[file_len-1] = 't';
        output_file_name[file_len] = '\0';
        //printf("%s\n", output_file_name);
        FILE_OUT = fopen(output_file_name, "w");

    }
    yyin = fopen(argv[1], "r");
    yyparse();
    return 0;
}

