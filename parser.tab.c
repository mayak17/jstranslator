
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include "print_tree.h"

extern FILE* yyin;


/* Line 189 of yacc.c  */
#line 85 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIGIT = 258,
     FLOAT_DIGIT = 259,
     ID = 260,
     STRINGONEQOUTED = 261,
     STRINGDOUBLEQUOTED = 262,
     EQUAL = 263,
     STRICT_EQUAL = 264,
     NOT_EQUAL = 265,
     BIGGER_EQUAL = 266,
     SMALLER_EQUAL = 267,
     ASSIGNMENT = 268,
     POW = 269,
     OR = 270,
     NOT = 271,
     AND = 272,
     IF = 273,
     ELSE = 274,
     ELSEIF = 275,
     FOR = 276,
     WHILE = 277,
     DO = 278,
     SWITCH = 279,
     CASE = 280,
     BREAK = 281,
     DEFAULT = 282,
     OF = 283,
     INPUT = 284,
     OUTPUT = 285,
     SEMICOLON = 286,
     NEWLINE = 287,
     LET = 288,
     VAR = 289,
     CONST = 290,
     FINAL = 291,
     UPLUS = 292,
     UMINUS = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "parser.y"

	int Int_val;
	float Float;
	char *Id;
	struct expr_struct* expr_value;
	struct expr_list_struct* expr_list_value;
	struct stmt_struct* stmt_value;
	struct stmt_list_struct* stmt_list_value;
	struct array_handling_struct* array_handling_value;
	struct if_stmt_struct* if_stmt_value;
	struct elseif_stmt_struct* elseif_stmt_value;
	struct elseif_stmt_list_struct* elseif_stmt_list_value;
	struct for_stmt_struct* for_stmt_value;
	struct forOf_stmt_struct* forOf_stmt_value;
	struct switch_stmt_struct* switch_stmt_value;
	struct case_stmt_struct* case_stmt_value;
	struct default_stmt_struct* default_stmt_value;
	struct case_stmt_list_struct *case_stmt_list_value;



/* Line 214 of yacc.c  */
#line 181 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   797

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    43,     2,     2,
      49,    48,    41,    39,    53,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
      38,     2,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    44,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    14,    16,    18,
      23,    27,    31,    35,    39,    43,    47,    51,    55,    59,
      63,    67,    71,    75,    79,    83,    87,    91,    94,    97,
     100,   103,   107,   110,   114,   117,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   146,   148,   150,
     152,   159,   168,   176,   186,   188,   191,   198,   208,   214,
     223,   233,   244,   246,   249,   254,   260,   265,   268,   269,
     272,   280,   288,   290,   294,   301,   307,   314
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    58,    -1,     3,    -1,     4,    -1,    59,
       5,    -1,     5,    -1,     6,    -1,     7,    -1,    56,    46,
      56,    47,    -1,    49,    56,    48,    -1,    56,    39,    56,
      -1,    56,    40,    56,    -1,    56,    41,    56,    -1,    56,
      42,    56,    -1,    56,    43,    56,    -1,    56,     8,    56,
      -1,    56,     9,    56,    -1,    56,    10,    56,    -1,    56,
      37,    56,    -1,    56,    38,    56,    -1,    56,    11,    56,
      -1,    56,    12,    56,    -1,    56,    13,    56,    -1,    56,
      14,    56,    -1,    56,    15,    56,    -1,    56,    17,    56,
      -1,    16,    56,    -1,    39,    56,    -1,    40,    56,    -1,
      31,    71,    -1,    26,    31,    71,    -1,    26,    70,    -1,
      56,    31,    71,    -1,    56,    70,    -1,    50,    71,    58,
      51,    71,    -1,    73,    -1,    60,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    72,    -1,    75,    -1,    76,
      -1,    57,    -1,    58,    57,    -1,    33,    -1,    34,    -1,
      35,    -1,    18,    71,    49,    56,    48,    57,    -1,    18,
      71,    49,    56,    48,    57,    19,    57,    -1,    18,    71,
      49,    56,    48,    57,    61,    -1,    18,    71,    49,    56,
      48,    57,    61,    19,    57,    -1,    62,    -1,    61,    62,
      -1,    20,    49,    56,    48,    71,    57,    -1,    21,    49,
      56,    31,    56,    31,    56,    48,    57,    -1,    22,    49,
      56,    48,    57,    -1,    23,    57,    22,    49,    56,    48,
      31,    71,    -1,    24,    49,    56,    48,    50,    71,    67,
      51,    71,    -1,    24,    49,    56,    48,    50,    71,    67,
      69,    51,    71,    -1,    68,    -1,    67,    68,    -1,    25,
      56,    52,    71,    -1,    25,    56,    52,    71,    58,    -1,
      27,    52,    71,    58,    -1,    32,    71,    -1,    -1,    71,
      32,    -1,    21,    49,    56,    28,    56,    48,    57,    -1,
      56,    13,    46,    74,    47,    31,    32,    -1,    56,    -1,
      74,    53,    56,    -1,    29,    49,    56,    48,    31,    71,
      -1,    29,    49,    56,    48,    70,    -1,    30,    49,    56,
      48,    31,    71,    -1,    30,    49,    56,    48,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    96,    96,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   143,   144,   146,   146,   146,
     147,   149,   151,   153,   156,   157,   159,   161,   163,   165,
     167,   169,   172,   173,   175,   177,   179,   181,   182,   182,
     183,   185,   187,   188,   190,   191,   193,   194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIGIT", "FLOAT_DIGIT", "ID",
  "STRINGONEQOUTED", "STRINGDOUBLEQUOTED", "EQUAL", "STRICT_EQUAL",
  "NOT_EQUAL", "BIGGER_EQUAL", "SMALLER_EQUAL", "ASSIGNMENT", "\"**\"",
  "OR", "NOT", "AND", "IF", "ELSE", "ELSEIF", "FOR", "WHILE", "DO",
  "SWITCH", "CASE", "BREAK", "DEFAULT", "OF", "INPUT", "OUTPUT",
  "SEMICOLON", "NEWLINE", "LET", "VAR", "CONST", "FINAL", "'>'", "'<'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "UPLUS", "UMINUS", "'['", "']'",
  "')'", "'('", "'{'", "'}'", "':'", "','", "$accept", "program", "exp",
  "stmt", "stmt_list", "type", "if_stmt", "elseif_stmt_list",
  "elseif_stmt", "for_stmt", "while_stmt", "do_while_stmt", "switch_stmt",
  "case_stmt_list", "case_stmt", "default_stmt", "newline_seq",
  "newline_seq_opt", "for_of", "array_handling", "expr_list", "input",
  "output", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    62,    60,    43,
      45,    42,    47,    37,   292,   293,    91,    93,    41,    40,
     123,   125,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    61,    61,    62,    63,    64,    65,
      66,    66,    67,    67,    68,    68,    69,    70,    71,    71,
      72,    73,    74,    74,    75,    75,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     2,     3,     2,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       6,     8,     7,     9,     1,     2,     6,     9,     5,     8,
       9,    10,     1,     2,     4,     5,     4,     2,     0,     2,
       7,     7,     1,     3,     6,     5,     6,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     4,     6,     7,     8,     0,    68,     0,     0,
       0,     0,     0,     0,     0,    68,    47,    48,    49,     0,
       0,     0,    68,     0,     0,    45,     2,     0,    37,    38,
      39,    40,    41,    42,    36,    43,    44,    27,     0,     0,
       0,     0,     0,    68,    68,    32,     0,     0,    30,    28,
      29,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    46,     5,     0,    69,     0,     0,     0,
       0,     0,    31,    67,     0,     0,    10,     0,    16,    17,
      18,    21,    22,     0,    23,    24,    25,    26,    33,    19,
      20,    11,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    72,     0,     9,     0,
       0,     0,    58,     0,    68,    68,    75,    68,    77,    35,
       0,     0,    50,     0,     0,     0,     0,    74,    76,     0,
      73,     0,     0,    52,    54,    70,     0,    68,     0,     0,
      62,    71,    51,     0,     0,    55,     0,    59,     0,     0,
      68,    63,     0,     0,    53,    57,    68,    68,    60,    68,
      68,    64,     0,    61,     0,    65,    66,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    26,    27,    28,   143,   144,    29,
      30,    31,    32,   149,   150,   162,    45,    38,    33,    34,
     117,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int16 yypact[] =
{
     240,   -48,   -48,   -48,   -48,   -48,   278,   -48,   -42,   -34,
     240,   -30,    13,   -21,   -16,   -48,   -48,   -48,   -48,   278,
     278,   278,   -48,    71,   614,   -48,   240,    67,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   751,   -31,   278,
     278,    51,   278,   -48,   -48,   -48,   278,   278,    44,    34,
      34,   336,   202,   -48,   278,   278,   278,   278,   278,    20,
     278,   278,   278,   -48,   278,   278,   278,   278,   278,   278,
     278,   278,   -48,   -48,   -48,   278,   -48,   278,   653,   348,
      29,   389,    44,    44,   401,   442,   -48,   164,     0,     0,
       0,    87,    87,   278,   741,    34,   751,   751,    44,    87,
      87,    15,    15,   -11,   -11,   -11,   601,   454,   278,   278,
     240,   278,    41,    31,    33,   -48,   702,   -43,   -48,   240,
     495,   692,   -48,   507,   -48,   -48,   -48,   -48,   -48,    44,
      48,   278,     2,   240,   278,    50,   -12,    44,    44,    72,
     702,   240,    59,    32,   -48,   -48,   548,   -48,   278,   -19,
     -48,   -48,   -48,   278,   240,   -48,   240,    44,   291,    58,
     -48,   -48,    62,   560,   -48,   -48,   -48,   -48,    44,   -48,
     -48,   202,   202,    44,   202,   240,   240,   -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,    28,   -10,   -47,   -48,   -48,   -48,   -28,   -48,
     -48,   -48,   -48,   -48,   -33,   -48,    -7,   -13,   -48,   -48,
     -48,   -48,   -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      41,    76,    48,    60,   130,    87,   148,    39,   159,    52,
     131,    57,    58,   148,    60,    40,    73,    72,    77,    42,
      76,   141,   142,     1,     2,     3,     4,     5,    46,    60,
      82,    83,   160,    47,    37,    71,     6,    64,    65,    66,
      67,    68,    69,    70,    43,    44,    71,    49,    50,    51,
      98,   154,   142,    16,    17,    18,    68,    69,    70,    19,
      20,    71,   125,    44,   127,    44,    93,    78,    79,    21,
      81,    53,    74,    80,    84,    85,    76,    73,   111,   139,
      71,   147,    88,    89,    90,    91,    92,    94,    95,    96,
      97,   124,    99,   100,   101,   102,   103,   104,   105,   106,
     122,    60,   129,    94,   151,   107,   126,   128,   153,   132,
     167,   136,   137,   169,   138,   155,   161,     0,     0,     0,
       0,   116,     0,   145,   175,   176,    66,    67,    68,    69,
      70,   152,     0,    71,   157,     0,   120,   121,     0,   123,
       0,     0,     0,     0,   164,     0,   165,   168,     0,     0,
       0,     0,     0,   171,   172,     0,   173,   174,     0,   140,
       0,     0,   146,     0,   177,    73,    73,     1,     2,     3,
       4,     5,     0,     0,     0,     0,   158,     0,     0,     0,
       6,   163,     7,     0,     0,     8,     9,    10,    11,     0,
      12,     0,     0,    13,    14,    15,     0,    16,    17,    18,
       0,     0,     0,    19,    20,     1,     2,     3,     4,     5,
       0,     0,     0,    21,    22,   115,     0,     0,     6,     0,
       7,     0,     0,     8,     9,    10,    11,     0,    12,     0,
       0,    13,    14,    15,    76,    16,    17,    18,     0,     0,
       0,    19,    20,     1,     2,     3,     4,     5,     0,     0,
       0,    21,    22,     0,     0,     0,     6,     0,     7,     0,
       0,     8,     9,    10,    11,     0,    12,     0,     0,    13,
      14,    15,     0,    16,    17,    18,     0,     0,     0,    19,
      20,     1,     2,     3,     4,     5,     0,     0,     0,    21,
      22,     0,     0,     0,     6,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    75,    60,    61,     0,    62,     0,
       0,    16,    17,    18,     0,     0,     0,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    64,    65,
      66,    67,    68,    69,    70,     0,     0,    71,     0,     0,
       0,     0,     0,   166,    54,    55,    56,    57,    58,    75,
      60,    61,     0,    62,     0,     0,    54,    55,    56,    57,
      58,    75,    60,    61,     0,    62,     0,     0,     0,     0,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
       0,     0,    71,     0,    86,    64,    65,    66,    67,    68,
      69,    70,     0,     0,    71,     0,   110,    54,    55,    56,
      57,    58,    75,    60,    61,     0,    62,     0,     0,    54,
      55,    56,    57,    58,    75,    60,    61,     0,    62,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,     0,     0,    71,     0,   112,    64,    65,
      66,    67,    68,    69,    70,     0,     0,    71,     0,   113,
      54,    55,    56,    57,    58,    75,    60,    61,     0,    62,
       0,     0,    54,    55,    56,    57,    58,    75,    60,    61,
       0,    62,     0,     0,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,    71,     0,
     114,    64,    65,    66,    67,    68,    69,    70,     0,     0,
      71,     0,   119,    54,    55,    56,    57,    58,    75,    60,
      61,     0,    62,     0,     0,    54,    55,    56,    57,    58,
      75,    60,    61,     0,    62,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,    69,    70,     0,
       0,    71,     0,   133,    64,    65,    66,    67,    68,    69,
      70,     0,     0,    71,     0,   135,    54,    55,    56,    57,
      58,    75,    60,    61,     0,    62,     0,     0,    54,    55,
      56,    57,    58,    75,    60,    61,     0,    62,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,     0,     0,    71,     0,   156,    64,    65,    66,
      67,    68,    69,    70,     0,     0,    71,     0,   170,    54,
      55,    56,    57,    58,    75,    60,    61,     0,    62,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
       0,    62,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,    63,    44,    71,   118,     0,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
      71,    54,    55,    56,    57,    58,    75,    60,    61,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,   109,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,     0,     0,    71,
      54,    55,    56,    57,    58,    75,    60,    61,     0,    62,
      54,    55,    56,    57,    58,    75,    60,    61,     0,    62,
       0,     0,     0,   134,     0,     0,     0,     0,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,    71,    64,
      65,    66,    67,    68,    69,    70,     0,     0,    71,    54,
      55,    56,    57,    58,     0,    60,    61,     0,    62,    54,
      55,    56,    57,    58,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,    70,     0,     0,    71,    64,    65,
      66,    67,    68,    69,    70,     0,     0,    71
};

static const yytype_int16 yycheck[] =
{
      10,    32,    15,    14,    47,    52,    25,    49,    27,    22,
      53,    11,    12,    25,    14,    49,    26,    24,    49,    49,
      32,    19,    20,     3,     4,     5,     6,     7,    49,    14,
      43,    44,    51,    49,     6,    46,    16,    37,    38,    39,
      40,    41,    42,    43,    31,    32,    46,    19,    20,    21,
      63,    19,    20,    33,    34,    35,    41,    42,    43,    39,
      40,    46,    31,    32,    31,    32,    46,    39,    40,    49,
      42,     0,     5,    22,    46,    47,    32,    87,    49,    31,
      46,    31,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    50,    64,    65,    66,    67,    68,    69,    70,    71,
     110,    14,   115,    75,    32,    77,   113,   114,    49,   119,
      52,   124,   125,    51,   127,   143,   149,    -1,    -1,    -1,
      -1,    93,    -1,   133,   171,   172,    39,    40,    41,    42,
      43,   141,    -1,    46,   147,    -1,   108,   109,    -1,   111,
      -1,    -1,    -1,    -1,   154,    -1,   156,   160,    -1,    -1,
      -1,    -1,    -1,   166,   167,    -1,   169,   170,    -1,   131,
      -1,    -1,   134,    -1,   174,   175,   176,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      16,   153,    18,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    30,    31,    -1,    33,    34,    35,
      -1,    -1,    -1,    39,    40,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    16,    -1,
      18,    -1,    -1,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    39,    40,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    16,    -1,    18,    -1,
      -1,    21,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,     3,     4,     5,     6,     7,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    52,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    46,    -1,    48,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    -1,    48,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    46,    -1,    48,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    -1,
      48,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,    -1,    48,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    46,    -1,    48,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    46,    -1,    48,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    46,    -1,    48,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    46,    -1,    48,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    31,    32,    46,    47,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      46,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    46,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    46,     8,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    46,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    16,    18,    21,    22,
      23,    24,    26,    29,    30,    31,    33,    34,    35,    39,
      40,    49,    50,    55,    56,    57,    58,    59,    60,    63,
      64,    65,    66,    72,    73,    75,    76,    56,    71,    49,
      49,    57,    49,    31,    32,    70,    49,    49,    71,    56,
      56,    56,    71,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    17,    31,    37,    38,    39,    40,    41,    42,
      43,    46,    70,    57,     5,    13,    32,    49,    56,    56,
      22,    56,    71,    71,    56,    56,    48,    58,    56,    56,
      56,    56,    56,    46,    56,    56,    56,    56,    71,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    28,    31,
      48,    49,    48,    48,    48,    51,    56,    74,    47,    48,
      56,    56,    57,    56,    50,    31,    70,    31,    70,    71,
      47,    53,    57,    48,    31,    48,    71,    71,    71,    31,
      56,    19,    20,    61,    62,    57,    56,    31,    25,    67,
      68,    32,    57,    49,    19,    62,    48,    71,    56,    27,
      51,    68,    69,    56,    57,    57,    52,    52,    71,    51,
      48,    71,    71,    71,    71,    58,    58,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { (yyval.stmt_list_value) = root = (yyvsp[(1) - (1)].stmt_list_value);;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {printf("DIGIT is printed\n"); (yyval.expr_value) = create_digit_expr((yyvsp[(1) - (1)].Int_val));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {printf("FLOAT_DIGIT is printed\n");(yyval.expr_value) = create_float_expr((yyvsp[(1) - (1)].Float));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {printf("ID is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[(2) - (2)].Id));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {printf("ID is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[(1) - (1)].Id));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    {printf("STRINGONEQOUTED is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[(1) - (1)].Id));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {printf("STRINGDOUBLEQUOTED is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[(1) - (1)].Id));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {printf("exp \'[\' exp \']\' worked\n"); (yyval.expr_value) = create_binary_operation_expr(array_element_access, (yyvsp[(1) - (4)].expr_value), (yyvsp[(3) - (4)].expr_value));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {printf("\'(\' exp \')\' worked\n"); (yyval.expr_value) = (yyvsp[(2) - (3)].expr_value);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {printf("exp + exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Plus, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {printf("exp - exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Minus, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {printf("exp * exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Multiplication, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {printf("exp / exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Division, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {printf("exp Remi exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Reminder, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {printf("exp EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(EQ, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {printf("exp STRICT_EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SEQ, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {printf("exp NOT_EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(NEQ, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {printf("exp > exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(GR, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {printf("exp < exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SM, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {printf("exp >= exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(GREQ, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("exp <= exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SMEQ, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {printf("exp = exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Assign, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {printf("exp POW exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Pow, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {printf("exp OR exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Or, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf("exp AND exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(And, (yyvsp[(1) - (3)].expr_value) , (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {printf("NOT exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(Not, (yyvsp[(2) - (2)].expr_value) );;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf(" + exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(unary_plus, (yyvsp[(2) - (2)].expr_value) );;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {printf(" - exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(unary_minus, (yyvsp[(2) - (2)].expr_value) );;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {printf("empty stmt \n"); (yyval.stmt_value)=create_stmt_null();;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {printf("create break stmt\n"); (yyval.stmt_value)=create_stmt_break();;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {printf("create break stmt\n"); (yyval.stmt_value)=create_stmt_break();;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.stmt_value) = create_stmt((yyvsp[(1) - (3)].expr_value));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {(yyval.stmt_value) = create_stmt((yyvsp[(1) - (2)].expr_value));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {(yyval.stmt_value) = create_block_stmt((yyvsp[(3) - (5)].stmt_list_value));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {(yyval.stmt_value)= create_array((yyvsp[(1) - (1)].array_handling_value)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval.stmt_value)= fill_if_stmt((yyvsp[(1) - (1)].if_stmt_value));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {(yyval.stmt_value)= fill_for_stmt((yyvsp[(1) - (1)].for_stmt_value)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {(yyval.stmt_value)= (yyvsp[(1) - (1)].stmt_value); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {(yyval.stmt_value)= (yyvsp[(1) - (1)].stmt_value); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {printf("fill_switch_stmt worked\n");(yyval.stmt_value)= fill_switch_stmt((yyvsp[(1) - (1)].switch_stmt_value));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {(yyval.stmt_value)= fill_for_of_stmt((yyvsp[(1) - (1)].forOf_stmt_value)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {(yyval.stmt_value)= (yyvsp[(1) - (1)].stmt_value); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {(yyval.stmt_value)= (yyvsp[(1) - (1)].stmt_value); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {printf("stmt is created\n");(yyval.stmt_list_value) = create_stmt_list((yyvsp[(1) - (1)].stmt_value));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {printf("add_to_stmt_list is preformed\n");(yyval.stmt_list_value) = add_to_stmt_list((yyvsp[(1) - (2)].stmt_list_value), (yyvsp[(2) - (2)].stmt_value));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {printf("IfStmt is worked\n"); (yyval.if_stmt_value) = create_if_stmt((yyvsp[(4) - (6)].expr_value), (yyvsp[(6) - (6)].stmt_value), NULL);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {printf("IfElseStmt is worked\n"); (yyval.if_stmt_value) = create_if_stmt((yyvsp[(4) - (8)].expr_value), (yyvsp[(6) - (8)].stmt_value), (yyvsp[(8) - (8)].stmt_value));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {printf("If and ElseIf is worked\n"); (yyval.if_stmt_value) = create_else_if_stmt((yyvsp[(4) - (7)].expr_value), (yyvsp[(6) - (7)].stmt_value), (yyvsp[(7) - (7)].elseif_stmt_list_value),NULL);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {printf("If, ElseIf and Else is worked"); (yyval.if_stmt_value) = create_else_if_stmt((yyvsp[(4) - (9)].expr_value), (yyvsp[(6) - (9)].stmt_value), (yyvsp[(7) - (9)].elseif_stmt_list_value), (yyvsp[(9) - (9)].stmt_value));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {(yyval.elseif_stmt_list_value) = create_else_if_stmt_list((yyvsp[(1) - (1)].elseif_stmt_value));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    {(yyval.elseif_stmt_list_value) = add_to_else_if_stmt_list((yyvsp[(1) - (2)].elseif_stmt_list_value), (yyvsp[(2) - (2)].elseif_stmt_value));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {(yyval.elseif_stmt_value) = create_simple_else_if_stmt((yyvsp[(3) - (6)].expr_value),(yyvsp[(6) - (6)].stmt_value));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {(yyval.for_stmt_value) = create_for_stmt((yyvsp[(3) - (9)].expr_value), (yyvsp[(5) - (9)].expr_value), (yyvsp[(7) - (9)].expr_value), (yyvsp[(9) - (9)].stmt_value));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {(yyval.stmt_value) = create_while_stmt((yyvsp[(3) - (5)].expr_value), (yyvsp[(5) - (5)].stmt_value));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {(yyval.stmt_value) = create_do_while_stmt((yyvsp[(2) - (8)].stmt_value), (yyvsp[(5) - (8)].expr_value));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    {printf("create_switch_stmt is worked\n"); (yyval.switch_stmt_value) = create_switch_stmt((yyvsp[(3) - (9)].expr_value), (yyvsp[(7) - (9)].case_stmt_list_value),NULL); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {printf("create_switch_stmt is worked\n"); (yyval.switch_stmt_value) = create_switch_stmt((yyvsp[(3) - (10)].expr_value), (yyvsp[(7) - (10)].case_stmt_list_value),(yyvsp[(8) - (10)].default_stmt_value)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {printf("create_case_stmt_list is worked\n");(yyval.case_stmt_list_value) = create_case_stmt_list((yyvsp[(1) - (1)].case_stmt_value));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {printf("add_to_case_stmt_list is worked\n");(yyval.case_stmt_list_value) = add_to_case_stmt_list((yyvsp[(1) - (2)].case_stmt_list_value), (yyvsp[(2) - (2)].case_stmt_value));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {printf("newline_seq_opt is worked\n");(yyval.case_stmt_value) = create_case_stmt((yyvsp[(2) - (4)].expr_value), NULL);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {printf("CASE exp ':' newline_seq_opt stmt_list is worked\n"); (yyval.case_stmt_value) = create_case_stmt((yyvsp[(2) - (5)].expr_value), (yyvsp[(5) - (5)].stmt_list_value));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {printf("DEFAULT ':' newline_seq_opt stmt_list stmt_list  is worked\n");(yyval.default_stmt_value) = create_default_stmt((yyvsp[(4) - (4)].stmt_list_value));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.forOf_stmt_value) = create_for_of_stmt((yyvsp[(3) - (7)].expr_value), (yyvsp[(5) - (7)].expr_value), (yyvsp[(7) - (7)].stmt_value));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {(yyval.array_handling_value) = create_array_handling_stmt((yyvsp[(1) - (7)].expr_value), (yyvsp[(4) - (7)].expr_list_value));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {printf("expr is created\n");(yyval.expr_list_value) = create_expr_list((yyvsp[(1) - (1)].expr_value));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {printf("addToExpr is preformed\n");(yyval.expr_list_value) = add_to_expr_list((yyvsp[(1) - (3)].expr_list_value), (yyvsp[(3) - (3)].expr_value));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.stmt_value) = create_console_in_stmt((yyvsp[(3) - (6)].expr_value));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {(yyval.stmt_value) = create_console_in_stmt((yyvsp[(3) - (5)].expr_value));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {(yyval.stmt_value) = create_console_out_stmt((yyvsp[(3) - (6)].expr_value));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {(yyval.stmt_value) = create_console_out_stmt((yyvsp[(3) - (5)].expr_value));;}
    break;



/* Line 1455 of yacc.c  */
#line 2152 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 195 "parser.y"


int main(int argc, char *argv[]){

	if(argc>1)
		{	
			yyin = fopen(argv[1], "r");
		}
	yyparse();
	FILE * _filename;
	_filename = fopen(argv[2], "w");
	if(_filename == NULL ) 
		yyerror("Error opening file");
	else
		{
		printf("Printing Tree\n");
		write_tree(_filename);
		printf("Tree is printed in output.txt\n");
		}
	
	fclose(_filename);
	
}



