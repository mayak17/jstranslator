/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
#include "print_tree.h"

extern FILE* yyin;

#line 82 "parser.tab.cpp"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIGIT = 3,                      /* DIGIT  */
  YYSYMBOL_FLOAT_DIGIT = 4,                /* FLOAT_DIGIT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_STRINGONEQOUTED = 6,            /* STRINGONEQOUTED  */
  YYSYMBOL_STRINGDOUBLEQUOTED = 7,         /* STRINGDOUBLEQUOTED  */
  YYSYMBOL_EQUAL = 8,                      /* EQUAL  */
  YYSYMBOL_STRICT_EQUAL = 9,               /* STRICT_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 10,                 /* NOT_EQUAL  */
  YYSYMBOL_BIGGER_EQUAL = 11,              /* BIGGER_EQUAL  */
  YYSYMBOL_SMALLER_EQUAL = 12,             /* SMALLER_EQUAL  */
  YYSYMBOL_ASSIGNMENT = 13,                /* ASSIGNMENT  */
  YYSYMBOL_POW = 14,                       /* "**"  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_NOT = 16,                       /* NOT  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 20,                    /* ELSEIF  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 27,                   /* DEFAULT  */
  YYSYMBOL_OF = 28,                        /* OF  */
  YYSYMBOL_INPUT = 29,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 30,                    /* OUTPUT  */
  YYSYMBOL_SEMICOLON = 31,                 /* SEMICOLON  */
  YYSYMBOL_NEWLINE = 32,                   /* NEWLINE  */
  YYSYMBOL_LET = 33,                       /* LET  */
  YYSYMBOL_VAR = 34,                       /* VAR  */
  YYSYMBOL_CONST = 35,                     /* CONST  */
  YYSYMBOL_FINAL = 36,                     /* FINAL  */
  YYSYMBOL_FUNCTION = 37,                  /* FUNCTION  */
  YYSYMBOL_38_ = 38,                       /* '>'  */
  YYSYMBOL_39_ = 39,                       /* '<'  */
  YYSYMBOL_40_ = 40,                       /* '+'  */
  YYSYMBOL_41_ = 41,                       /* '-'  */
  YYSYMBOL_42_ = 42,                       /* '*'  */
  YYSYMBOL_43_ = 43,                       /* '/'  */
  YYSYMBOL_44_ = 44,                       /* '%'  */
  YYSYMBOL_UMINUS = 45,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 46,                     /* UPLUS  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ':'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_exp = 57,                       /* exp  */
  YYSYMBOL_stmt = 58,                      /* stmt  */
  YYSYMBOL_stmt_list = 59,                 /* stmt_list  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_if_stmt = 61,                   /* if_stmt  */
  YYSYMBOL_elseif_stmt_list = 62,          /* elseif_stmt_list  */
  YYSYMBOL_elseif_stmt = 63,               /* elseif_stmt  */
  YYSYMBOL_for_stmt = 64,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 65,                /* while_stmt  */
  YYSYMBOL_do_while_stmt = 66,             /* do_while_stmt  */
  YYSYMBOL_switch_stmt = 67,               /* switch_stmt  */
  YYSYMBOL_case_stmt_list = 68,            /* case_stmt_list  */
  YYSYMBOL_case_stmt = 69,                 /* case_stmt  */
  YYSYMBOL_default_stmt = 70,              /* default_stmt  */
  YYSYMBOL_newline_seq = 71,               /* newline_seq  */
  YYSYMBOL_newline_seq_opt = 72,           /* newline_seq_opt  */
  YYSYMBOL_for_of = 73,                    /* for_of  */
  YYSYMBOL_array_handling = 74,            /* array_handling  */
  YYSYMBOL_expr_list = 75,                 /* expr_list  */
  YYSYMBOL_id_list = 76,                   /* id_list  */
  YYSYMBOL_id_list_opt = 77,               /* id_list_opt  */
  YYSYMBOL_expr_list_opt = 78,             /* expr_list_opt  */
  YYSYMBOL_stmt_list_opt = 79,             /* stmt_list_opt  */
  YYSYMBOL_function_stmt = 80,             /* function_stmt  */
  YYSYMBOL_function_call = 81,             /* function_call  */
  YYSYMBOL_input = 82,                     /* input  */
  YYSYMBOL_output = 83                     /* output  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   846

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
       2,     2,     2,     2,     2,     2,     2,    44,     2,     2,
      50,    49,    42,    40,    54,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      39,     2,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      35,    36,    37,    45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   104,   104,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   155,   156,   160,
     160,   160,   161,   163,   165,   167,   170,   171,   173,   175,
     177,   179,   181,   183,   186,   187,   189,   191,   193,   195,
     196,   197,   198,   199,   201,   203,   204,   206,   207,   209,
     210,   213,   214,   216,   217,   220,   222,   224,   225,   227,
     228
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
  "\"end of file\"", "error", "\"invalid token\"", "DIGIT", "FLOAT_DIGIT",
  "ID", "STRINGONEQOUTED", "STRINGDOUBLEQUOTED", "EQUAL", "STRICT_EQUAL",
  "NOT_EQUAL", "BIGGER_EQUAL", "SMALLER_EQUAL", "ASSIGNMENT", "\"**\"",
  "OR", "NOT", "AND", "IF", "ELSE", "ELSEIF", "FOR", "WHILE", "DO",
  "SWITCH", "CASE", "BREAK", "DEFAULT", "OF", "INPUT", "OUTPUT",
  "SEMICOLON", "NEWLINE", "LET", "VAR", "CONST", "FINAL", "FUNCTION",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "UPLUS",
  "'['", "']'", "')'", "'('", "'{'", "'}'", "':'", "','", "$accept",
  "program", "exp", "stmt", "stmt_list", "type", "if_stmt",
  "elseif_stmt_list", "elseif_stmt", "for_stmt", "while_stmt",
  "do_while_stmt", "switch_stmt", "case_stmt_list", "case_stmt",
  "default_stmt", "newline_seq", "newline_seq_opt", "for_of",
  "array_handling", "expr_list", "id_list", "id_list_opt", "expr_list_opt",
  "stmt_list_opt", "function_stmt", "function_call", "input", "output", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    62,    60,
      43,    45,    42,    47,    37,   293,   294,    91,    93,    41,
      40,   123,   125,    58,    44
};
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     241,   -57,   -57,   -41,   -57,   -57,   283,    -5,    -5,    -5,
      -5,    -5,   -15,   -37,   -36,    -5,   -57,   -57,   -57,    -5,
     283,   283,   283,    -5,    31,   659,   -57,   241,    30,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     283,   799,   -57,    12,    -2,     2,     5,   241,    10,    -5,
      12,   283,   283,   -57,    59,    18,    18,   348,   241,   -57,
     283,   283,   283,   283,   283,    74,   283,   283,   283,    -5,
     283,   283,   283,   283,   283,   283,   283,   283,    12,   -57,
     -57,   749,    17,    25,   283,   -57,   283,   283,   283,    53,
     283,   -57,   390,   402,    -5,   -57,    16,    58,    58,    58,
      92,    92,   283,   789,    18,   799,   799,   -57,    92,    92,
      40,    40,    -4,    -4,    -4,   618,   283,   -57,   444,   699,
     456,    -5,   498,    -6,    -3,    26,    -5,   -18,   -57,   749,
      -5,   283,   283,    -5,    35,    -5,    -5,    12,    -5,    12,
      83,   -57,    60,   241,   510,   739,   241,   283,    38,   -57,
     -57,   -57,    41,    44,    -5,    39,    -5,   283,   -57,   552,
      -5,    87,    -5,   -57,    -5,    -5,    43,   -57,   241,   564,
      63,    78,   -57,    61,   241,    54,    -5,   -57,   -57,    -5,
      -5,   283,   -19,   -57,    -5,   -57,   283,   241,   241,   -57,
     332,    57,    -5,   -57,    67,   241,   606,   -57,   -57,    -5,
      -5,   -57,    -5,   241,    77,    -5,   241,   241,   -57,    -5,
     241,   241,   241,   -57,   -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     4,     6,     7,     8,     0,    71,    71,    71,
      71,    71,     0,     0,     0,    71,    49,    50,    51,    71,
       0,     0,     0,    71,     0,     0,    47,     2,     0,    38,
      39,    40,    41,    42,    43,    37,    46,    30,    44,    45,
      81,    27,    69,    72,     0,     0,     0,     0,     0,    71,
      33,     0,     0,    31,     0,    28,    29,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    48,
       5,    75,    82,     0,     0,    70,     0,     0,     0,     0,
       0,    32,     0,     0,    71,    10,     0,    16,    17,    18,
      21,    22,     0,    23,    24,    25,    26,    34,    19,    20,
      11,    12,    13,    14,    15,     0,     0,    86,     0,     0,
       0,    71,     0,     0,     0,     0,    71,     0,     9,    76,
      71,     0,     0,    71,     0,    71,    71,    88,    71,    90,
      79,    36,     0,     0,     0,     0,     0,     0,     0,    87,
      89,    77,    80,     0,    71,    52,    71,     0,    60,     0,
      71,     0,    71,    74,    71,    71,    54,    56,     0,     0,
       0,     0,    78,     0,     0,     0,    71,    57,    73,    71,
      71,     0,     0,    64,    71,    53,     0,     0,     0,    61,
       0,     0,    71,    65,     0,    83,     0,    55,    59,    71,
      71,    62,    71,    84,     0,    71,    66,     0,    63,    71,
       0,    67,    68,    85,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   153,   -23,   -46,   -57,   -57,   -57,   -55,   -57,
     -57,   -57,   -57,   -57,   -56,   -57,    -7,    -8,   -57,   -57,
      29,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    29,   166,   167,    30,
      31,    32,    33,   182,   183,   194,    43,    44,    34,    35,
      82,   152,   153,    83,   204,    36,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    46,    47,    48,    79,    50,   181,    53,   191,    40,
      66,    54,    96,    51,    52,    58,    49,    42,    78,     1,
       2,     3,     4,     5,    89,   136,    42,    42,   138,    42,
     142,    59,     6,   192,     7,    80,   116,     8,     9,    10,
      11,    91,    12,    77,    85,    13,    14,    15,    86,    16,
      17,    18,    87,    19,    66,    88,    20,    21,   164,   165,
      90,   107,   176,   165,    94,    77,    22,    23,   126,    63,
      64,   116,    66,    79,   117,   121,   140,     1,     2,     3,
       4,     5,    74,    75,    76,   147,   125,    77,   151,   160,
       6,   154,   172,   162,   180,   161,    70,    71,    72,    73,
      74,    75,    76,   181,   186,    77,    66,    16,    17,    18,
     200,   177,   184,   134,    20,    21,   137,   139,   141,   202,
     155,   102,   143,   158,    22,   146,   193,   148,   149,   209,
     150,   127,    72,    73,    74,    75,    76,     0,     0,    77,
       0,     0,     0,     0,     0,   178,   163,     0,   168,   203,
       0,   185,   171,     0,   173,     0,   174,   175,     0,    41,
     211,   212,     0,     0,   197,   198,     0,     0,   187,     0,
       0,   188,   189,    55,    56,    57,   195,     0,     0,     0,
      79,     0,     0,     0,   201,     0,     0,   214,    79,    79,
       0,   206,   207,    81,   208,     0,     0,   210,     0,     0,
       0,   213,     0,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   103,   104,
     105,   106,     0,   108,   109,   110,   111,   112,   113,   114,
     115,     0,     0,     0,     0,     0,     0,   103,     0,   118,
     119,   120,     0,   122,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,    81,     0,     6,     0,     7,
       0,     0,     8,     9,    10,    11,     0,    12,     0,   129,
      13,    14,    15,     0,    16,    17,    18,     0,    19,     0,
       0,    20,    21,     0,   144,   145,     1,     2,     3,     4,
       5,    22,    23,     0,     0,     0,     0,     0,     0,     6,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     0,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    22,   190,     0,     0,     0,     0,   196,
      60,    61,    62,    63,    64,    84,    66,    67,     0,    68,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    84,    66,    67,     0,    68,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,     0,     0,    77,
       0,     0,     0,     0,     0,   199,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    77,     0,    95,    60,    61,
      62,    63,    64,    84,    66,    67,     0,    68,     0,     0,
      60,    61,    62,    63,    64,    84,    66,    67,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,    76,     0,     0,    77,     0,   123,
      70,    71,    72,    73,    74,    75,    76,     0,     0,    77,
       0,   124,    60,    61,    62,    63,    64,    84,    66,    67,
       0,    68,     0,     0,    60,    61,    62,    63,    64,    84,
      66,    67,     0,    68,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    75,    76,     0,
       0,    77,     0,   130,    70,    71,    72,    73,    74,    75,
      76,     0,     0,    77,     0,   133,    60,    61,    62,    63,
      64,    84,    66,    67,     0,    68,     0,     0,    60,    61,
      62,    63,    64,    84,    66,    67,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    77,     0,   135,    70,    71,
      72,    73,    74,    75,    76,     0,     0,    77,     0,   156,
      60,    61,    62,    63,    64,    84,    66,    67,     0,    68,
       0,     0,    60,    61,    62,    63,    64,    84,    66,    67,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,     0,     0,    77,
       0,   170,    70,    71,    72,    73,    74,    75,    76,     0,
       0,    77,     0,   179,    60,    61,    62,    63,    64,    84,
      66,    67,     0,    68,     0,     0,    60,    61,    62,    63,
      64,    84,    66,    67,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
      76,     0,     0,    77,     0,   205,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    77,   128,    60,    61,    62,
      63,    64,    65,    66,    67,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    42,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    60,    61,    62,
      63,    64,    84,    66,    67,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,     0,
     132,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    60,    61,    62,
      63,    64,    84,    66,    67,     0,    68,    60,    61,    62,
      63,    64,    84,    66,    67,     0,    68,     0,     0,     0,
     157,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    60,    61,    62,
      63,    64,     0,    66,    67,     0,    68,    60,    61,    62,
      63,    64,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,    11,    27,    12,    25,    15,    27,    50,
      14,    19,    58,    50,    50,    23,    31,    32,    25,     3,
       4,     5,     6,     7,    47,    31,    32,    32,    31,    32,
      48,     0,    16,    52,    18,     5,    54,    21,    22,    23,
      24,    49,    26,    47,    32,    29,    30,    31,    50,    33,
      34,    35,    50,    37,    14,    50,    40,    41,    19,    20,
      50,    69,    19,    20,     5,    47,    50,    51,    52,    11,
      12,    54,    14,    96,    49,    22,    50,     3,     4,     5,
       6,     7,    42,    43,    44,    50,    94,    47,     5,    51,
      16,    31,     5,    49,    31,    54,    38,    39,    40,    41,
      42,    43,    44,    25,    50,    47,    14,    33,    34,    35,
      53,   166,    51,   121,    40,    41,   123,   124,   126,    52,
     143,    47,   130,   146,    50,   133,   182,   135,   136,    52,
     138,   102,    40,    41,    42,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,   168,   154,    -1,   156,   195,
      -1,   174,   160,    -1,   162,    -1,   164,   165,    -1,     6,
     206,   207,    -1,    -1,   187,   188,    -1,    -1,   176,    -1,
      -1,   179,   180,    20,    21,    22,   184,    -1,    -1,    -1,
     203,    -1,    -1,    -1,   192,    -1,    -1,   210,   211,   212,
      -1,   199,   200,    40,   202,    -1,    -1,   205,    -1,    -1,
      -1,   209,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    -1,    90,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    16,    -1,    18,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    -1,   116,
      29,    30,    31,    -1,    33,    34,    35,    -1,    37,    -1,
      -1,    40,    41,    -1,   131,   132,     3,     4,     5,     6,
       7,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    16,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   181,    -1,    -1,    -1,    -1,   186,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    53,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    -1,    49,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    49,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      -1,    49,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    -1,    49,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    -1,    49,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    49,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      -1,    49,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    -1,    49,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    48,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,     8,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    16,    18,    21,    22,
      23,    24,    26,    29,    30,    31,    33,    34,    35,    37,
      40,    41,    50,    51,    56,    57,    58,    59,    60,    61,
      64,    65,    66,    67,    73,    74,    80,    81,    82,    83,
      50,    57,    32,    71,    72,    72,    72,    72,    72,    31,
      71,    50,    50,    72,    72,    57,    57,    57,    72,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    17,    31,
      38,    39,    40,    41,    42,    43,    44,    47,    71,    58,
       5,    57,    75,    78,    13,    32,    50,    50,    50,    58,
      50,    72,    57,    57,     5,    49,    59,    57,    57,    57,
      57,    57,    47,    57,    57,    57,    57,    72,    57,    57,
      57,    57,    57,    57,    57,    57,    54,    49,    57,    57,
      57,    22,    57,    49,    49,    72,    52,    75,    48,    57,
      49,    28,    31,    49,    72,    49,    31,    71,    31,    71,
      50,    72,    48,    72,    57,    57,    72,    50,    72,    72,
      72,     5,    76,    77,    31,    58,    49,    31,    58,    57,
      51,    54,    49,    72,    19,    20,    62,    63,    72,    57,
      49,    72,     5,    72,    72,    72,    19,    63,    58,    49,
      31,    25,    68,    69,    51,    58,    50,    72,    72,    72,
      57,    27,    52,    69,    70,    72,    57,    58,    58,    53,
      53,    72,    52,    59,    79,    49,    72,    72,    72,    52,
      72,    59,    59,    72,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    64,
      65,    66,    67,    67,    68,    68,    69,    69,    70,    71,
      71,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    81,    82,    82,    83,
      83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       1,     2,     3,     2,     3,     2,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     7,    10,     8,    11,     1,     2,     7,    11,
       7,    10,    11,    12,     1,     2,     4,     5,     4,     1,
       2,     0,     1,     9,     7,     1,     3,     1,     3,     0,
       1,     0,     1,     0,     1,    13,     4,     6,     5,     6,
       5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* program: stmt_list  */
#line 104 "parser.y"
                   { (yyval.stmt_list_value) = root = (yyvsp[0].stmt_list_value);}
#line 1686 "parser.tab.cpp"
    break;

  case 3: /* exp: DIGIT  */
#line 106 "parser.y"
                                                        {printf("DIGIT is printed\n"); (yyval.expr_value) = create_digit_expr((yyvsp[0].Int_val));}
#line 1692 "parser.tab.cpp"
    break;

  case 4: /* exp: FLOAT_DIGIT  */
#line 107 "parser.y"
                                                        {printf("FLOAT_DIGIT is printed\n");(yyval.expr_value) = create_float_expr((yyvsp[0].Float));}
#line 1698 "parser.tab.cpp"
    break;

  case 5: /* exp: type ID  */
#line 108 "parser.y"
                                                        {printf("ID is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[0].Id));}
#line 1704 "parser.tab.cpp"
    break;

  case 6: /* exp: ID  */
#line 109 "parser.y"
                                                            {printf("ID is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[0].Id));}
#line 1710 "parser.tab.cpp"
    break;

  case 7: /* exp: STRINGONEQOUTED  */
#line 110 "parser.y"
                                                {printf("STRINGONEQOUTED is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[0].Id));}
#line 1716 "parser.tab.cpp"
    break;

  case 8: /* exp: STRINGDOUBLEQUOTED  */
#line 111 "parser.y"
                                                {printf("STRINGDOUBLEQUOTED is printed\n");(yyval.expr_value) = create_variable_expr((yyvsp[0].Id));}
#line 1722 "parser.tab.cpp"
    break;

  case 9: /* exp: exp '[' exp ']'  */
#line 112 "parser.y"
                                                        {printf("exp \'[\' exp \']\' worked\n"); (yyval.expr_value) = create_binary_operation_expr(array_element_access, (yyvsp[-3].expr_value), (yyvsp[-1].expr_value));}
#line 1728 "parser.tab.cpp"
    break;

  case 10: /* exp: '(' exp ')'  */
#line 113 "parser.y"
                                                        {printf("\'(\' exp \')\' worked\n"); (yyval.expr_value) = (yyvsp[-1].expr_value);}
#line 1734 "parser.tab.cpp"
    break;

  case 11: /* exp: exp '+' exp  */
#line 114 "parser.y"
                                                        {printf("exp + exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Plus, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1740 "parser.tab.cpp"
    break;

  case 12: /* exp: exp '-' exp  */
#line 115 "parser.y"
                                                        {printf("exp - exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Minus, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1746 "parser.tab.cpp"
    break;

  case 13: /* exp: exp '*' exp  */
#line 116 "parser.y"
                                                        {printf("exp * exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Multiplication, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1752 "parser.tab.cpp"
    break;

  case 14: /* exp: exp '/' exp  */
#line 117 "parser.y"
                                                        {printf("exp / exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Division, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1758 "parser.tab.cpp"
    break;

  case 15: /* exp: exp '%' exp  */
#line 118 "parser.y"
                                                        {printf("exp Remi exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Reminder, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1764 "parser.tab.cpp"
    break;

  case 16: /* exp: exp EQUAL exp  */
#line 119 "parser.y"
                                                        {printf("exp EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(EQ, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1770 "parser.tab.cpp"
    break;

  case 17: /* exp: exp STRICT_EQUAL exp  */
#line 120 "parser.y"
                                                {printf("exp STRICT_EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SEQ, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1776 "parser.tab.cpp"
    break;

  case 18: /* exp: exp NOT_EQUAL exp  */
#line 121 "parser.y"
                                                {printf("exp NOT_EQUAL exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(NEQ, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1782 "parser.tab.cpp"
    break;

  case 19: /* exp: exp '>' exp  */
#line 122 "parser.y"
                                                        {printf("exp > exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(GR, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1788 "parser.tab.cpp"
    break;

  case 20: /* exp: exp '<' exp  */
#line 123 "parser.y"
                                                        {printf("exp < exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SM, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1794 "parser.tab.cpp"
    break;

  case 21: /* exp: exp BIGGER_EQUAL exp  */
#line 124 "parser.y"
                                                {printf("exp >= exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(GREQ, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1800 "parser.tab.cpp"
    break;

  case 22: /* exp: exp SMALLER_EQUAL exp  */
#line 125 "parser.y"
                                                {printf("exp <= exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(SMEQ, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1806 "parser.tab.cpp"
    break;

  case 23: /* exp: exp ASSIGNMENT exp  */
#line 126 "parser.y"
                                                {printf("exp = exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Assign, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1812 "parser.tab.cpp"
    break;

  case 24: /* exp: exp "**" exp  */
#line 127 "parser.y"
                                                        {printf("exp POW exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Pow, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1818 "parser.tab.cpp"
    break;

  case 25: /* exp: exp OR exp  */
#line 128 "parser.y"
                                                        {printf("exp OR exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(Or, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1824 "parser.tab.cpp"
    break;

  case 26: /* exp: exp AND exp  */
#line 129 "parser.y"
                                                        {printf("exp AND exp  worked\n");(yyval.expr_value) = create_binary_operation_expr(And, (yyvsp[-2].expr_value) , (yyvsp[0].expr_value));}
#line 1830 "parser.tab.cpp"
    break;

  case 27: /* exp: NOT exp  */
#line 130 "parser.y"
                                                                {printf("NOT exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(Not, (yyvsp[0].expr_value) );}
#line 1836 "parser.tab.cpp"
    break;

  case 28: /* exp: '+' exp  */
#line 131 "parser.y"
                                                {printf(" + exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(unary_plus, (yyvsp[0].expr_value) );}
#line 1842 "parser.tab.cpp"
    break;

  case 29: /* exp: '-' exp  */
#line 132 "parser.y"
                                                {printf(" - exp  worked\n");(yyval.expr_value) = create_unary_operation_expr(unary_minus, (yyvsp[0].expr_value) );}
#line 1848 "parser.tab.cpp"
    break;

  case 30: /* exp: function_call  */
#line 133 "parser.y"
                                                        { (yyval.expr_value) = create_function_expr((yyvsp[0].function_call_value)); }
#line 1854 "parser.tab.cpp"
    break;

  case 31: /* stmt: SEMICOLON newline_seq_opt  */
#line 136 "parser.y"
                                                                                {printf("empty stmt \n"); (yyval.stmt_value)=create_stmt_null();}
#line 1860 "parser.tab.cpp"
    break;

  case 32: /* stmt: BREAK SEMICOLON newline_seq_opt  */
#line 137 "parser.y"
                                                                                {printf("create break stmt\n"); (yyval.stmt_value)=create_stmt_break();}
#line 1866 "parser.tab.cpp"
    break;

  case 33: /* stmt: BREAK newline_seq  */
#line 138 "parser.y"
                                                                                                {printf("create break stmt\n"); (yyval.stmt_value)=create_stmt_break();}
#line 1872 "parser.tab.cpp"
    break;

  case 34: /* stmt: exp SEMICOLON newline_seq_opt  */
#line 139 "parser.y"
                                                                {(yyval.stmt_value) = create_stmt((yyvsp[-2].expr_value));}
#line 1878 "parser.tab.cpp"
    break;

  case 35: /* stmt: exp newline_seq  */
#line 140 "parser.y"
                                                                                        {(yyval.stmt_value) = create_stmt((yyvsp[-1].expr_value));}
#line 1884 "parser.tab.cpp"
    break;

  case 36: /* stmt: '{' newline_seq_opt stmt_list '}' newline_seq_opt  */
#line 141 "parser.y"
                                                                {(yyval.stmt_value) = create_block_stmt((yyvsp[-2].stmt_list_value));}
#line 1890 "parser.tab.cpp"
    break;

  case 37: /* stmt: array_handling  */
#line 142 "parser.y"
                                                                                        {(yyval.stmt_value)= create_array((yyvsp[0].array_handling_value)); }
#line 1896 "parser.tab.cpp"
    break;

  case 38: /* stmt: if_stmt  */
#line 143 "parser.y"
                                                                                                        {(yyval.stmt_value)= fill_if_stmt((yyvsp[0].if_stmt_value));}
#line 1902 "parser.tab.cpp"
    break;

  case 39: /* stmt: for_stmt  */
#line 144 "parser.y"
                                                                                                        {(yyval.stmt_value)= fill_for_stmt((yyvsp[0].for_stmt_value)); }
#line 1908 "parser.tab.cpp"
    break;

  case 40: /* stmt: while_stmt  */
#line 145 "parser.y"
                                                                                                {(yyval.stmt_value)= (yyvsp[0].stmt_value); }
#line 1914 "parser.tab.cpp"
    break;

  case 41: /* stmt: do_while_stmt  */
#line 146 "parser.y"
                                                                                                {(yyval.stmt_value)= (yyvsp[0].stmt_value); }
#line 1920 "parser.tab.cpp"
    break;

  case 42: /* stmt: switch_stmt  */
#line 147 "parser.y"
                                                                                                {printf("fill_switch_stmt worked\n");(yyval.stmt_value)= fill_switch_stmt((yyvsp[0].switch_stmt_value));}
#line 1926 "parser.tab.cpp"
    break;

  case 43: /* stmt: for_of  */
#line 148 "parser.y"
                                                                                                        {(yyval.stmt_value)= fill_for_of_stmt((yyvsp[0].forOf_stmt_value)); }
#line 1932 "parser.tab.cpp"
    break;

  case 44: /* stmt: input  */
#line 149 "parser.y"
                                                                                                        {(yyval.stmt_value)= (yyvsp[0].stmt_value); }
#line 1938 "parser.tab.cpp"
    break;

  case 45: /* stmt: output  */
#line 150 "parser.y"
                                                                                                        {(yyval.stmt_value)= (yyvsp[0].stmt_value); }
#line 1944 "parser.tab.cpp"
    break;

  case 46: /* stmt: function_stmt  */
#line 151 "parser.y"
                                                                                                { (yyval.stmt_value) = fill_function_stmt((yyvsp[0].function_stmt_value)); }
#line 1950 "parser.tab.cpp"
    break;

  case 47: /* stmt_list: stmt  */
#line 155 "parser.y"
                                                {printf("stmt is created\n");(yyval.stmt_list_value) = create_stmt_list((yyvsp[0].stmt_value));}
#line 1956 "parser.tab.cpp"
    break;

  case 48: /* stmt_list: stmt_list stmt  */
#line 156 "parser.y"
                                                {printf("add_to_stmt_list is preformed\n");(yyval.stmt_list_value) = add_to_stmt_list((yyvsp[-1].stmt_list_value), (yyvsp[0].stmt_value));}
#line 1962 "parser.tab.cpp"
    break;

  case 52: /* if_stmt: IF newline_seq_opt '(' exp ')' newline_seq_opt stmt  */
#line 162 "parser.y"
                                {printf("IfStmt is worked\n"); (yyval.if_stmt_value) = create_if_stmt((yyvsp[-3].expr_value), (yyvsp[0].stmt_value), NULL);}
#line 1968 "parser.tab.cpp"
    break;

  case 53: /* if_stmt: IF newline_seq_opt '(' exp ')' newline_seq_opt stmt ELSE newline_seq_opt stmt  */
#line 164 "parser.y"
                                {printf("IfElseStmt is worked\n"); (yyval.if_stmt_value) = create_if_stmt((yyvsp[-6].expr_value), (yyvsp[-3].stmt_value), (yyvsp[0].stmt_value));}
#line 1974 "parser.tab.cpp"
    break;

  case 54: /* if_stmt: IF newline_seq_opt '(' exp ')' newline_seq_opt stmt elseif_stmt_list  */
#line 166 "parser.y"
                                {printf("If and ElseIf is worked\n"); (yyval.if_stmt_value) = create_else_if_stmt((yyvsp[-4].expr_value), (yyvsp[-1].stmt_value), (yyvsp[0].elseif_stmt_list_value),NULL);}
#line 1980 "parser.tab.cpp"
    break;

  case 55: /* if_stmt: IF newline_seq_opt '(' exp ')' newline_seq_opt stmt elseif_stmt_list ELSE newline_seq_opt stmt  */
#line 168 "parser.y"
                                {printf("If, ElseIf and Else is worked"); (yyval.if_stmt_value) = create_else_if_stmt((yyvsp[-7].expr_value), (yyvsp[-4].stmt_value), (yyvsp[-3].elseif_stmt_list_value), (yyvsp[0].stmt_value));}
#line 1986 "parser.tab.cpp"
    break;

  case 56: /* elseif_stmt_list: elseif_stmt  */
#line 170 "parser.y"
                                                                {(yyval.elseif_stmt_list_value) = create_else_if_stmt_list((yyvsp[0].elseif_stmt_value));}
#line 1992 "parser.tab.cpp"
    break;

  case 57: /* elseif_stmt_list: elseif_stmt_list elseif_stmt  */
#line 171 "parser.y"
                                                                {(yyval.elseif_stmt_list_value) = add_to_else_if_stmt_list((yyvsp[-1].elseif_stmt_list_value), (yyvsp[0].elseif_stmt_value));}
#line 1998 "parser.tab.cpp"
    break;

  case 58: /* elseif_stmt: ELSEIF newline_seq_opt '(' exp ')' newline_seq_opt stmt  */
#line 173 "parser.y"
                                                                                {(yyval.elseif_stmt_value) = create_simple_else_if_stmt((yyvsp[-3].expr_value),(yyvsp[0].stmt_value));}
#line 2004 "parser.tab.cpp"
    break;

  case 59: /* for_stmt: FOR newline_seq_opt '(' exp SEMICOLON exp SEMICOLON exp ')' newline_seq_opt stmt  */
#line 175 "parser.y"
                                                                                           {(yyval.for_stmt_value) = create_for_stmt((yyvsp[-7].expr_value), (yyvsp[-5].expr_value), (yyvsp[-3].expr_value), (yyvsp[0].stmt_value));}
#line 2010 "parser.tab.cpp"
    break;

  case 60: /* while_stmt: WHILE newline_seq_opt '(' exp ')' newline_seq_opt stmt  */
#line 177 "parser.y"
                                                                      {(yyval.stmt_value) = create_while_stmt((yyvsp[-3].expr_value), (yyvsp[0].stmt_value));}
#line 2016 "parser.tab.cpp"
    break;

  case 61: /* do_while_stmt: DO newline_seq_opt stmt WHILE newline_seq_opt '(' exp ')' SEMICOLON newline_seq_opt  */
#line 179 "parser.y"
                                                                                                    {(yyval.stmt_value) = create_do_while_stmt((yyvsp[-7].stmt_value), (yyvsp[-3].expr_value));}
#line 2022 "parser.tab.cpp"
    break;

  case 62: /* switch_stmt: SWITCH newline_seq_opt '(' exp ')' newline_seq_opt '{' newline_seq_opt case_stmt_list '}' newline_seq_opt  */
#line 182 "parser.y"
                                                                {printf("create_switch_stmt is worked\n"); (yyval.switch_stmt_value) = create_switch_stmt((yyvsp[-7].expr_value), (yyvsp[-2].case_stmt_list_value),NULL); }
#line 2028 "parser.tab.cpp"
    break;

  case 63: /* switch_stmt: SWITCH newline_seq_opt '(' exp ')' newline_seq_opt '{' newline_seq_opt case_stmt_list default_stmt '}' newline_seq_opt  */
#line 184 "parser.y"
                                                                {printf("create_switch_stmt is worked\n"); (yyval.switch_stmt_value) = create_switch_stmt((yyvsp[-8].expr_value), (yyvsp[-3].case_stmt_list_value),(yyvsp[-2].default_stmt_value)); }
#line 2034 "parser.tab.cpp"
    break;

  case 64: /* case_stmt_list: case_stmt  */
#line 186 "parser.y"
                                                {printf("create_case_stmt_list is worked\n");(yyval.case_stmt_list_value) = create_case_stmt_list((yyvsp[0].case_stmt_value));}
#line 2040 "parser.tab.cpp"
    break;

  case 65: /* case_stmt_list: case_stmt_list case_stmt  */
#line 187 "parser.y"
                                                                        {printf("add_to_case_stmt_list is worked\n");(yyval.case_stmt_list_value) = add_to_case_stmt_list((yyvsp[-1].case_stmt_list_value), (yyvsp[0].case_stmt_value));}
#line 2046 "parser.tab.cpp"
    break;

  case 66: /* case_stmt: CASE exp ':' newline_seq_opt  */
#line 190 "parser.y"
                                                {printf("newline_seq_opt is worked\n");(yyval.case_stmt_value) = create_case_stmt((yyvsp[-2].expr_value), NULL);}
#line 2052 "parser.tab.cpp"
    break;

  case 67: /* case_stmt: CASE exp ':' newline_seq_opt stmt_list  */
#line 192 "parser.y"
                                                {printf("CASE exp ':' newline_seq_opt stmt_list is worked\n"); (yyval.case_stmt_value) = create_case_stmt((yyvsp[-3].expr_value), (yyvsp[0].stmt_list_value));}
#line 2058 "parser.tab.cpp"
    break;

  case 68: /* default_stmt: DEFAULT ':' newline_seq_opt stmt_list  */
#line 194 "parser.y"
                                                {printf("DEFAULT ':' newline_seq_opt stmt_list stmt_list  is worked\n");(yyval.default_stmt_value) = create_default_stmt((yyvsp[0].stmt_list_value));}
#line 2064 "parser.tab.cpp"
    break;

  case 73: /* for_of: FOR newline_seq_opt '(' exp OF exp ')' newline_seq_opt stmt  */
#line 199 "parser.y"
                                                                      {(yyval.forOf_stmt_value) = create_for_of_stmt((yyvsp[-5].expr_value), (yyvsp[-3].expr_value), (yyvsp[0].stmt_value));}
#line 2070 "parser.tab.cpp"
    break;

  case 74: /* array_handling: exp ASSIGNMENT '[' expr_list ']' SEMICOLON newline_seq_opt  */
#line 201 "parser.y"
                                                                           {(yyval.array_handling_value) = create_array_handling_stmt((yyvsp[-6].expr_value), (yyvsp[-3].expr_list_value));}
#line 2076 "parser.tab.cpp"
    break;

  case 75: /* expr_list: exp  */
#line 203 "parser.y"
                                                 {printf("expr is created\n");(yyval.expr_list_value) = create_expr_list((yyvsp[0].expr_value));}
#line 2082 "parser.tab.cpp"
    break;

  case 76: /* expr_list: expr_list ',' exp  */
#line 204 "parser.y"
                                         {printf("addToExpr is preformed\n");(yyval.expr_list_value) = add_to_expr_list((yyvsp[-2].expr_list_value), (yyvsp[0].expr_value));}
#line 2088 "parser.tab.cpp"
    break;

  case 77: /* id_list: ID  */
#line 206 "parser.y"
                                                        { (yyval.id_list_value) = new id_list; (yyval.id_list_value) -> ids.push_back((yyvsp[0].Id)); }
#line 2094 "parser.tab.cpp"
    break;

  case 78: /* id_list: id_list ',' ID  */
#line 207 "parser.y"
                                                { (yyvsp[-2].id_list_value) -> ids.push_back((yyvsp[0].Id)); }
#line 2100 "parser.tab.cpp"
    break;

  case 79: /* id_list_opt: %empty  */
#line 209 "parser.y"
                                                        { (yyval.id_list_value) = nullptr; }
#line 2106 "parser.tab.cpp"
    break;

  case 80: /* id_list_opt: id_list  */
#line 210 "parser.y"
                                                                { (yyval.id_list_value) = (yyvsp[0].id_list_value); }
#line 2112 "parser.tab.cpp"
    break;

  case 81: /* expr_list_opt: %empty  */
#line 213 "parser.y"
                                                { (yyval.expr_list_value) = nullptr; }
#line 2118 "parser.tab.cpp"
    break;

  case 82: /* expr_list_opt: expr_list  */
#line 214 "parser.y"
                                    {printf("expr optional is created\n"); (yyval.expr_list_value) = (yyvsp[0].expr_list_value); }
#line 2124 "parser.tab.cpp"
    break;

  case 83: /* stmt_list_opt: %empty  */
#line 216 "parser.y"
                                        { (yyval.stmt_list_value) = nullptr; }
#line 2130 "parser.tab.cpp"
    break;

  case 84: /* stmt_list_opt: stmt_list  */
#line 217 "parser.y"
                                                { (yyval.stmt_list_value) = (yyvsp[0].stmt_list_value); }
#line 2136 "parser.tab.cpp"
    break;

  case 85: /* function_stmt: FUNCTION newline_seq_opt ID newline_seq_opt '(' id_list_opt ')' newline_seq_opt '{' newline_seq_opt stmt_list_opt '}' newline_seq_opt  */
#line 220 "parser.y"
                                                                                                                                                      { (yyval.function_stmt_value) = function_decl_stmt((yyvsp[-10].Id),(yyvsp[-7].id_list_value),(yyvsp[-2].stmt_list_value)); }
#line 2142 "parser.tab.cpp"
    break;

  case 86: /* function_call: ID '(' expr_list_opt ')'  */
#line 222 "parser.y"
                                         {(yyval.function_call_value) = function_call_expr((yyvsp[-3].Id),(yyvsp[-1].expr_list_value));}
#line 2148 "parser.tab.cpp"
    break;

  case 87: /* input: INPUT '(' exp ')' SEMICOLON newline_seq_opt  */
#line 224 "parser.y"
                                                        {(yyval.stmt_value) = create_console_in_stmt((yyvsp[-3].expr_value));}
#line 2154 "parser.tab.cpp"
    break;

  case 88: /* input: INPUT '(' exp ')' newline_seq  */
#line 225 "parser.y"
                                                                                {(yyval.stmt_value) = create_console_in_stmt((yyvsp[-2].expr_value));}
#line 2160 "parser.tab.cpp"
    break;

  case 89: /* output: OUTPUT '(' exp ')' SEMICOLON newline_seq_opt  */
#line 227 "parser.y"
                                                        {(yyval.stmt_value) = create_console_out_stmt((yyvsp[-3].expr_value));}
#line 2166 "parser.tab.cpp"
    break;

  case 90: /* output: OUTPUT '(' exp ')' newline_seq  */
#line 228 "parser.y"
                                                                                        {(yyval.stmt_value) = create_console_out_stmt((yyvsp[-2].expr_value));}
#line 2172 "parser.tab.cpp"
    break;


#line 2176 "parser.tab.cpp"

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
          goto yyexhaustedlab;
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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

#line 229 "parser.y"


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


