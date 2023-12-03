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
#line 1 "lrparser.y"

	#include <string.h>
    #include "ast.h"

	#define YYSTYPE Ast *

	extern FILE *fp_error;
    extern int lineno;
    extern Ast *g_root;
	extern char msg[MAX_MESSAGE_LEN];

	int yylex();
	int yyerror(const char* message);

#line 86 "lrparser.tab.c"

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

#include "lrparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_VOID = 4,                     /* T_VOID  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 6,                  /* SEMICOLON  */
  YYSYMBOL_COMMA = 7,                      /* COMMA  */
  YYSYMBOL_LPAREN = 8,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 9,                     /* RPAREN  */
  YYSYMBOL_LBRACE = 10,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 11,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 12,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 13,                  /* RBRACKET  */
  YYSYMBOL_CONST = 14,                     /* CONST  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_EQUAL = 21,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 22,                  /* NOTEQUAL  */
  YYSYMBOL_GRATEREQUAL = 23,               /* GRATEREQUAL  */
  YYSYMBOL_LESSEQUAL = 24,                 /* LESSEQUAL  */
  YYSYMBOL_GRATER = 25,                    /* GRATER  */
  YYSYMBOL_LESS = 26,                      /* LESS  */
  YYSYMBOL_ADD = 27,                       /* ADD  */
  YYSYMBOL_SUB = 28,                       /* SUB  */
  YYSYMBOL_MUL = 29,                       /* MUL  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 36,                  /* CONSTANT  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_bType = 38,                     /* bType  */
  YYSYMBOL_constant = 39,                  /* constant  */
  YYSYMBOL_compUnit = 40,                  /* compUnit  */
  YYSYMBOL_lVal = 41,                      /* lVal  */
  YYSYMBOL_identifier = 42,                /* identifier  */
  YYSYMBOL_arrayIdentifier = 43,           /* arrayIdentifier  */
  YYSYMBOL_decl = 44,                      /* decl  */
  YYSYMBOL_constDecl = 45,                 /* constDecl  */
  YYSYMBOL_constDefs = 46,                 /* constDefs  */
  YYSYMBOL_constDef = 47,                  /* constDef  */
  YYSYMBOL_arrayInitVal = 48,              /* arrayInitVal  */
  YYSYMBOL_varDecl = 49,                   /* varDecl  */
  YYSYMBOL_varDefs = 50,                   /* varDefs  */
  YYSYMBOL_varDef = 51,                    /* varDef  */
  YYSYMBOL_funcDef = 52,                   /* funcDef  */
  YYSYMBOL_funcFParams = 53,               /* funcFParams  */
  YYSYMBOL_funcFParam = 54,                /* funcFParam  */
  YYSYMBOL_block = 55,                     /* block  */
  YYSYMBOL_blockItems = 56,                /* blockItems  */
  YYSYMBOL_blockItem = 57,                 /* blockItem  */
  YYSYMBOL_stmt = 58,                      /* stmt  */
  YYSYMBOL_expr = 59,                      /* expr  */
  YYSYMBOL_cond = 60,                      /* cond  */
  YYSYMBOL_addExpr = 61,                   /* addExpr  */
  YYSYMBOL_mulExpr = 62,                   /* mulExpr  */
  YYSYMBOL_unaryExpr = 63,                 /* unaryExpr  */
  YYSYMBOL_primaryExpr = 64,               /* primaryExpr  */
  YYSYMBOL_funcRParams = 65,               /* funcRParams  */
  YYSYMBOL_lOrExpr = 66,                   /* lOrExpr  */
  YYSYMBOL_lAndExpr = 67,                  /* lAndExpr  */
  YYSYMBOL_eqExpr = 68,                    /* eqExpr  */
  YYSYMBOL_relExpr = 69                    /* relExpr  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    31,    35,    41,    42,    43,    44,    48,
      49,    53,    57,    62,    70,    71,    75,    81,    82,    86,
      91,    99,   100,   104,   110,   111,   115,   116,   121,   129,
     138,   146,   147,   151,   158,   164,   165,   169,   170,   174,
     175,   176,   177,   182,   188,   193,   198,   199,   200,   201,
     208,   212,   216,   217,   222,   230,   231,   236,   241,   249,
     250,   254,   258,   265,   266,   271,   275,   276,   280,   284,
     291,   292,   300,   301,   309,   310,   315,   323,   324,   329,
     334,   339
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_VOID",
  "ASSIGN", "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "CONST", "IF", "ELSE", "WHILE", "RETURN",
  "BREAK", "CONTINUE", "EQUAL", "NOTEQUAL", "GRATEREQUAL", "LESSEQUAL",
  "GRATER", "LESS", "ADD", "SUB", "MUL", "DIV", "MOD", "AND", "OR", "NOT",
  "IDENTIFIER", "CONSTANT", "$accept", "bType", "constant", "compUnit",
  "lVal", "identifier", "arrayIdentifier", "decl", "constDecl",
  "constDefs", "constDef", "arrayInitVal", "varDecl", "varDefs", "varDef",
  "funcDef", "funcFParams", "funcFParam", "block", "blockItems",
  "blockItem", "stmt", "expr", "cond", "addExpr", "mulExpr", "unaryExpr",
  "primaryExpr", "funcRParams", "lOrExpr", "lAndExpr", "eqExpr", "relExpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -89,   -89,   101,   -23,    33,   -89,   -89,   -89,   -89,
     -23,   -89,   -89,    47,    18,   126,   -89,   -89,   -89,   -89,
      20,    59,   136,   -89,    88,    89,    88,     5,    88,   -89,
     -23,     8,    43,   -89,   -23,    88,    88,    88,    88,   -89,
     -89,   -89,    19,    51,   -89,   130,   107,   -89,   -89,    84,
     -23,    -5,   -89,    98,     8,   100,    75,   -89,   -89,     8,
     -89,    93,   -89,   -89,   -89,   -89,    64,    86,   146,   103,
      73,    88,    88,    88,    88,    88,   179,   -89,   -89,   122,
     101,    84,   -89,   -89,    92,   -89,   114,   -89,    88,    88,
      88,    88,    88,    88,    88,    88,   -89,   -89,    82,   107,
     107,   -89,   -89,   -89,   -89,   139,   144,    14,   138,   148,
     -23,   156,   -89,   -89,   145,   -89,   -89,   160,   -89,   -89,
       8,   -89,   -89,    86,   146,   103,   103,   -89,   -89,   -89,
     -89,    88,   -89,    88,    88,   -89,   165,   -89,   -89,    88,
     -89,   -89,   -89,   -89,   -89,   175,   177,   -89,   168,    50,
      50,   -89,   172,   -89,    50,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     2,     3,     0,     0,     0,     5,    14,    15,     6,
       0,    11,    26,     9,    10,     0,    24,     1,     7,     8,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     4,
      67,    66,     9,    10,    27,    50,    52,    55,    59,     0,
       0,     0,    31,     0,     0,     0,     9,    25,    19,     0,
      18,     0,    60,    61,    77,    62,    51,    70,    72,    74,
       0,     0,     0,     0,     0,     0,     0,    30,    33,     9,
       0,     0,    12,    21,     0,    13,     0,    63,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    68,     0,    53,
      54,    56,    57,    58,    39,     0,     0,     0,     0,     0,
       0,    66,    37,    41,     0,    35,    38,     0,    32,    29,
       0,    28,    20,    71,    73,    75,    76,    80,    81,    78,
      79,     0,    64,     0,     0,    48,     0,    46,    47,     0,
      34,    36,    40,    22,    69,     0,     0,    49,     0,     0,
       0,    42,    44,    45,     0,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,     3,   -30,   -89,    -4,     4,     9,    40,   -89,   -89,
     157,   131,   -89,   -89,   162,   190,   -89,   120,   -46,   -89,
      90,   -88,   -19,    36,   -89,   104,    66,   -89,   -89,   -89,
     113,   116,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,    40,     5,    41,    42,    43,   112,     7,    22,
      23,    84,     8,    15,    16,     9,    51,    52,   113,   114,
     115,   116,    64,    65,    45,    46,    47,    48,    98,    66,
      67,    68,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,    58,    80,    77,    81,    44,    10,    53,    13,    55,
       1,     2,    11,    14,    20,    54,    61,    62,    63,    21,
     135,     3,    35,    27,    83,    31,    12,    70,    50,    83,
      28,    26,    26,    17,    56,   119,     1,     2,    20,    14,
       6,    36,    37,    21,    39,    18,    78,     3,    38,    11,
      39,    97,    24,    59,    79,    25,   104,   117,    35,    26,
      76,   152,   153,    28,    32,   105,   155,   106,   107,   108,
     109,    28,   111,   127,   128,   129,   130,    36,    37,   110,
      24,    35,    96,    50,    38,    11,    39,    26,   136,   131,
     143,   132,     1,     2,    76,   117,    35,    88,    49,   120,
      36,    37,    87,   121,     1,     2,    12,    38,    11,    39,
     111,    82,   144,    85,    56,    36,    37,   110,    89,    14,
     148,   120,    38,    11,    39,   122,    92,    93,    94,    95,
     117,   117,    29,    30,    26,   117,    73,    74,    75,   101,
     102,   103,    33,    34,   137,   111,   111,   133,     1,     2,
     111,   104,   134,    35,   138,    76,   140,    71,    72,     3,
     105,   139,   106,   107,   108,   109,   142,    90,    91,   145,
     146,   147,    36,    37,   151,    99,   100,   125,   126,    38,
      11,    39,     1,     2,   149,   104,   150,    35,   154,    76,
      86,    60,    57,     3,   105,    19,   106,   107,   108,   109,
     118,   123,     0,     0,   141,   124,    36,    37,     0,     0,
       0,     0,     0,    38,    11,    39
};

static const yytype_int16 yycheck[] =
{
       4,    31,     7,    49,     9,    24,     3,    26,     4,    28,
       3,     4,    35,     4,    10,    10,    35,    36,    37,    10,
       6,    14,     8,     5,    54,     5,    30,     8,    25,    59,
      12,    12,    12,     0,    30,    81,     3,     4,    34,    30,
       0,    27,    28,    34,    36,     5,    50,    14,    34,    35,
      36,    70,     5,    10,    50,     8,     6,    76,     8,    12,
      10,   149,   150,    12,     5,    15,   154,    17,    18,    19,
      20,    12,    76,    92,    93,    94,    95,    27,    28,    76,
       5,     8,     9,    80,    34,    35,    36,    12,   107,     7,
     120,     9,     3,     4,    10,   114,     8,    33,     9,     7,
      27,    28,     9,    11,     3,     4,   110,    34,    35,    36,
     114,    13,   131,    13,   110,    27,    28,   114,    32,   110,
     139,     7,    34,    35,    36,    11,    23,    24,    25,    26,
     149,   150,     6,     7,    12,   154,    29,    30,    31,    73,
      74,    75,     6,     7,     6,   149,   150,     8,     3,     4,
     154,     6,     8,     8,     6,    10,    11,    27,    28,    14,
      15,     5,    17,    18,    19,    20,     6,    21,    22,   133,
     134,     6,    27,    28,     6,    71,    72,    90,    91,    34,
      35,    36,     3,     4,     9,     6,     9,     8,    16,    10,
      59,    34,    30,    14,    15,     5,    17,    18,    19,    20,
      80,    88,    -1,    -1,   114,    89,    27,    28,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    14,    38,    40,    44,    45,    49,    52,
      38,    35,    41,    42,    43,    50,    51,     0,    44,    52,
      42,    43,    46,    47,     5,     8,    12,     5,    12,     6,
       7,     5,     5,     6,     7,     8,    27,    28,    34,    36,
      39,    41,    42,    43,    59,    61,    62,    63,    64,     9,
      38,    53,    54,    59,    10,    59,    42,    51,    39,    10,
      47,    59,    59,    59,    59,    60,    66,    67,    68,    69,
       8,    27,    28,    29,    30,    31,    10,    55,    41,    42,
       7,     9,    13,    39,    48,    13,    48,     9,    33,    32,
      21,    22,    23,    24,    25,    26,     9,    59,    65,    62,
      62,    63,    63,    63,     6,    15,    17,    18,    19,    20,
      38,    41,    44,    55,    56,    57,    58,    59,    54,    55,
       7,    11,    11,    67,    68,    69,    69,    59,    59,    59,
      59,     7,     9,     8,     8,     6,    59,     6,     6,     5,
      11,    57,     6,    39,    59,    60,    60,     6,    59,     9,
       9,     6,    58,    58,    16,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    39,    40,    40,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    46,    46,    47,
      47,    48,    48,    49,    50,    50,    51,    51,    51,    52,
      52,    53,    53,    54,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    60,    61,    61,    61,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    69
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     4,     4,     1,     1,     4,     1,     3,     3,
       5,     1,     3,     3,     1,     3,     1,     3,     5,     6,
       5,     1,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     1,     4,     7,     5,     5,     2,     2,     2,     3,
       1,     1,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     3,     4,     3,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3
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
  case 2: /* bType: T_INT  */
#line 30 "lrparser.y"
        { yyval = createNode(lineno, NT_TYPE, msg);}
#line 1258 "lrparser.tab.c"
    break;

  case 3: /* bType: T_VOID  */
#line 31 "lrparser.y"
         { yyval = createNode(lineno, NT_TYPE, msg); }
#line 1264 "lrparser.tab.c"
    break;

  case 4: /* constant: CONSTANT  */
#line 35 "lrparser.y"
           { 
	yyval = createNode(lineno, NT_CONSTANT, msg);
	yyval->value = atoi(msg);
}
#line 1273 "lrparser.tab.c"
    break;

  case 5: /* compUnit: decl  */
#line 41 "lrparser.y"
       { addChild(g_root, yyvsp[0]); }
#line 1279 "lrparser.tab.c"
    break;

  case 6: /* compUnit: funcDef  */
#line 42 "lrparser.y"
          { addChild(g_root, yyvsp[0]); }
#line 1285 "lrparser.tab.c"
    break;

  case 7: /* compUnit: compUnit decl  */
#line 43 "lrparser.y"
                { addChild(g_root, yyvsp[0]); }
#line 1291 "lrparser.tab.c"
    break;

  case 8: /* compUnit: compUnit funcDef  */
#line 44 "lrparser.y"
                   { addChild(g_root, yyvsp[0]); }
#line 1297 "lrparser.tab.c"
    break;

  case 9: /* lVal: identifier  */
#line 48 "lrparser.y"
             { yyval = yyvsp[0]; }
#line 1303 "lrparser.tab.c"
    break;

  case 10: /* lVal: arrayIdentifier  */
#line 49 "lrparser.y"
                  { yyval = yyvsp[0]; }
#line 1309 "lrparser.tab.c"
    break;

  case 11: /* identifier: IDENTIFIER  */
#line 53 "lrparser.y"
             { yyval = createNode(lineno, NT_VAR, msg);}
#line 1315 "lrparser.tab.c"
    break;

  case 12: /* arrayIdentifier: identifier LBRACKET expr RBRACKET  */
#line 57 "lrparser.y"
                                    {
    yyval = createNode(lineno, NT_OP_INDEX, "[]");
    addChild(yyval, yyvsp[-3]);
    addChild(yyval, yyvsp[-1]);
  }
#line 1325 "lrparser.tab.c"
    break;

  case 13: /* arrayIdentifier: arrayIdentifier LBRACKET expr RBRACKET  */
#line 62 "lrparser.y"
                                         {
    yyval = createNode(lineno, NT_OP_INDEX, "[]");
    addChild(yyval, yyvsp[-3]);
    addChild(yyval, yyvsp[-1]);
  }
#line 1335 "lrparser.tab.c"
    break;

  case 14: /* decl: constDecl  */
#line 70 "lrparser.y"
            { yyval = yyvsp[0]; }
#line 1341 "lrparser.tab.c"
    break;

  case 15: /* decl: varDecl  */
#line 71 "lrparser.y"
          { yyval = yyvsp[0]; }
#line 1347 "lrparser.tab.c"
    break;

  case 16: /* constDecl: CONST bType constDefs SEMICOLON  */
#line 75 "lrparser.y"
                                  {
    yyval = createNode(lineno, NT_STMT_CONSTDECL, "constDecl");
    addChild(yyval, yyvsp[-1]);
}
#line 1356 "lrparser.tab.c"
    break;

  case 17: /* constDefs: constDef  */
#line 81 "lrparser.y"
           { yyval = createNode(lineno, NT_VARDECLLIST, "constDefs"); addChild(yyval, yyvsp[0]); }
#line 1362 "lrparser.tab.c"
    break;

  case 18: /* constDefs: constDefs COMMA constDef  */
#line 82 "lrparser.y"
                           { yyval = yyvsp[-2]; addChild(yyval, yyvsp[0]); }
#line 1368 "lrparser.tab.c"
    break;

  case 19: /* constDef: identifier ASSIGN constant  */
#line 86 "lrparser.y"
                             {
    yyval = createNode(lineno, NT_OP_ASSIGN, "=");
    addChild(yyval, yyvsp[-2]);
    addChild(yyval, yyvsp[0]);
  }
#line 1378 "lrparser.tab.c"
    break;

  case 20: /* constDef: arrayIdentifier ASSIGN LBRACE arrayInitVal RBRACE  */
#line 91 "lrparser.y"
                                                    {
    yyval = createNode(lineno, NT_OP_ASSIGN, "=");
    addChild(yyval, yyvsp[-4]);
    addChild(yyval, yyvsp[-1]);
  }
#line 1388 "lrparser.tab.c"
    break;

  case 21: /* arrayInitVal: constant  */
#line 99 "lrparser.y"
           { yyval = createNode(lineno, NT_VARLIST, "varlist"); addChild(yyval, yyvsp[0]); }
#line 1394 "lrparser.tab.c"
    break;

  case 22: /* arrayInitVal: arrayInitVal COMMA constant  */
#line 100 "lrparser.y"
                              { yyval = yyvsp[-2]; addChild(yyval, yyvsp[0]); }
#line 1400 "lrparser.tab.c"
    break;

  case 23: /* varDecl: bType varDefs SEMICOLON  */
#line 104 "lrparser.y"
                          {
    yyval = createNode(lineno, NT_STMT_VARDECL, "vardecl");
    addChild(yyval, yyvsp[-1]);
}
#line 1409 "lrparser.tab.c"
    break;

  case 24: /* varDefs: varDef  */
#line 110 "lrparser.y"
         { yyval = createNode(lineno, NT_VARDECLLIST, "varDefs"); addChild(yyval, yyvsp[0]); }
#line 1415 "lrparser.tab.c"
    break;

  case 25: /* varDefs: varDefs COMMA varDef  */
#line 111 "lrparser.y"
                       { yyval = yyvsp[-2]; addChild(yyval, yyvsp[0]); }
#line 1421 "lrparser.tab.c"
    break;

  case 26: /* varDef: lVal  */
#line 115 "lrparser.y"
       { yyval = yyvsp[0]; }
#line 1427 "lrparser.tab.c"
    break;

  case 27: /* varDef: identifier ASSIGN expr  */
#line 116 "lrparser.y"
                         {
	yyval = createNode(lineno, NT_OP_ASSIGN, "=");
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
  }
#line 1437 "lrparser.tab.c"
    break;

  case 28: /* varDef: arrayIdentifier ASSIGN LBRACE arrayInitVal RBRACE  */
#line 121 "lrparser.y"
                                                    {
	yyval = createNode(lineno, NT_OP_ASSIGN, "=");
	addChild(yyval, yyvsp[-4]);
	addChild(yyval, yyvsp[-1]);  
  }
#line 1447 "lrparser.tab.c"
    break;

  case 29: /* funcDef: bType identifier LPAREN funcFParams RPAREN block  */
#line 129 "lrparser.y"
                                                   {
    yyval = createNode(lineno, NT_STMT_FUNCDEF, "funcDef");
	addChild(yyval, yyvsp[-5]);
	addChild(yyval, yyvsp[-4]);
	Ast *params = createNode(lineno, NT_PARAM, "params");
	addChild(params, yyvsp[-2]);
	addChild(yyval, params);
	addChild(yyval, yyvsp[0]);
}
#line 1461 "lrparser.tab.c"
    break;

  case 30: /* funcDef: bType identifier LPAREN RPAREN block  */
#line 138 "lrparser.y"
                                       {
	yyval = createNode(lineno, NT_STMT_FUNCDEF, "funcDef");
	addChild(yyval, yyvsp[-4]);
	addChild(yyval, yyvsp[-3]);
	addChild(yyval, yyvsp[0]);
}
#line 1472 "lrparser.tab.c"
    break;

  case 31: /* funcFParams: funcFParam  */
#line 146 "lrparser.y"
             { yyval = yyvsp[0]; }
#line 1478 "lrparser.tab.c"
    break;

  case 32: /* funcFParams: funcFParams COMMA funcFParam  */
#line 147 "lrparser.y"
                               { yyval = yyvsp[-2]; addSibling(yyval, yyvsp[0]); }
#line 1484 "lrparser.tab.c"
    break;

  case 33: /* funcFParam: bType lVal  */
#line 151 "lrparser.y"
             {
	yyval = createNode(lineno, NT_PARAM, "param");
	addChild(yyval, yyvsp[-1]);
	addChild(yyval, yyvsp[0]);
}
#line 1494 "lrparser.tab.c"
    break;

  case 34: /* block: LBRACE blockItems RBRACE  */
#line 158 "lrparser.y"
                           {
	yyval = createNode(lineno, NT_STMT_BLOCK, "block");
	addChild(yyval, yyvsp[-1]);
}
#line 1503 "lrparser.tab.c"
    break;

  case 35: /* blockItems: blockItem  */
#line 164 "lrparser.y"
            { yyval = yyvsp[0]; }
#line 1509 "lrparser.tab.c"
    break;

  case 36: /* blockItems: blockItems blockItem  */
#line 165 "lrparser.y"
                       { yyval = yyvsp[-1]; addSibling(yyval, yyvsp[0]); }
#line 1515 "lrparser.tab.c"
    break;

  case 37: /* blockItem: decl  */
#line 169 "lrparser.y"
       { yyval = yyvsp[0]; }
#line 1521 "lrparser.tab.c"
    break;

  case 38: /* blockItem: stmt  */
#line 170 "lrparser.y"
       { yyval = yyvsp[0]; }
#line 1527 "lrparser.tab.c"
    break;

  case 39: /* stmt: SEMICOLON  */
#line 174 "lrparser.y"
            { yyval = NULL; }
#line 1533 "lrparser.tab.c"
    break;

  case 40: /* stmt: expr SEMICOLON  */
#line 175 "lrparser.y"
                 { yyval = yyvsp[-1]; }
#line 1539 "lrparser.tab.c"
    break;

  case 41: /* stmt: block  */
#line 176 "lrparser.y"
        { yyval = yyvsp[0]; }
#line 1545 "lrparser.tab.c"
    break;

  case 42: /* stmt: lVal ASSIGN expr SEMICOLON  */
#line 177 "lrparser.y"
                             {
	yyval = createNode(lineno, NT_OP_ASSIGN, "=");
	addChild(yyval, yyvsp[-3]);
	addChild(yyval, yyvsp[-1]);
}
#line 1555 "lrparser.tab.c"
    break;

  case 43: /* stmt: IF LPAREN cond RPAREN stmt ELSE stmt  */
#line 182 "lrparser.y"
                                       {
	yyval = createNode(lineno, NT_STMT_IFELSE, "ifelse");
	addChild(yyval, yyvsp[-4]);
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
}
#line 1566 "lrparser.tab.c"
    break;

  case 44: /* stmt: IF LPAREN cond RPAREN stmt  */
#line 188 "lrparser.y"
                             {
	yyval = createNode(lineno, NT_STMT_IFELSE, "if");
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
}
#line 1576 "lrparser.tab.c"
    break;

  case 45: /* stmt: WHILE LPAREN cond RPAREN stmt  */
#line 193 "lrparser.y"
                                {
	yyval = createNode(lineno, NT_STMT_WHILE, "while");
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
}
#line 1586 "lrparser.tab.c"
    break;

  case 46: /* stmt: BREAK SEMICOLON  */
#line 198 "lrparser.y"
                  { yyval = createNode(lineno, NT_STMT_BREAK, "break"); }
#line 1592 "lrparser.tab.c"
    break;

  case 47: /* stmt: CONTINUE SEMICOLON  */
#line 199 "lrparser.y"
                     { yyval = createNode(lineno, NT_STMT_CONTINUE, "continue"); }
#line 1598 "lrparser.tab.c"
    break;

  case 48: /* stmt: RETURN SEMICOLON  */
#line 200 "lrparser.y"
                   { yyval = createNode(lineno, NT_STMT_RETURN, "return"); }
#line 1604 "lrparser.tab.c"
    break;

  case 49: /* stmt: RETURN expr SEMICOLON  */
#line 201 "lrparser.y"
                        {
	yyval = createNode(lineno, NT_STMT_RETURN, "return");
	addChild(yyval, yyvsp[-1]);
}
#line 1613 "lrparser.tab.c"
    break;

  case 50: /* expr: addExpr  */
#line 208 "lrparser.y"
          { yyval = yyvsp[0]; }
#line 1619 "lrparser.tab.c"
    break;

  case 51: /* cond: lOrExpr  */
#line 212 "lrparser.y"
          { yyval = yyvsp[0]; }
#line 1625 "lrparser.tab.c"
    break;

  case 52: /* addExpr: mulExpr  */
#line 216 "lrparser.y"
          { yyval = yyvsp[0]; }
#line 1631 "lrparser.tab.c"
    break;

  case 53: /* addExpr: addExpr ADD mulExpr  */
#line 217 "lrparser.y"
                      { 
	yyval = createNode(lineno, NT_OP_ADD, "+");
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
}
#line 1641 "lrparser.tab.c"
    break;

  case 54: /* addExpr: addExpr SUB mulExpr  */
#line 222 "lrparser.y"
                      {
	yyval = createNode(lineno, NT_OP_SUB, "-");
	addChild(yyval, yyvsp[-2]);
	addChild(yyval, yyvsp[0]);
}
#line 1651 "lrparser.tab.c"
    break;

  case 55: /* mulExpr: unaryExpr  */
#line 230 "lrparser.y"
            { yyval = yyvsp[0]; }
#line 1657 "lrparser.tab.c"
    break;

  case 56: /* mulExpr: mulExpr MUL unaryExpr  */
#line 231 "lrparser.y"
                        {
	yyval = createNode(lineno, NT_OP_MUL, "*"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1667 "lrparser.tab.c"
    break;

  case 57: /* mulExpr: mulExpr DIV unaryExpr  */
#line 236 "lrparser.y"
                        {
	yyval = createNode(lineno, NT_OP_DIV, "/"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1677 "lrparser.tab.c"
    break;

  case 58: /* mulExpr: mulExpr MOD unaryExpr  */
#line 241 "lrparser.y"
                        {
	yyval = createNode(lineno, NT_OP_MOD, "%%"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1687 "lrparser.tab.c"
    break;

  case 59: /* unaryExpr: primaryExpr  */
#line 249 "lrparser.y"
              { yyval = yyvsp[0]; }
#line 1693 "lrparser.tab.c"
    break;

  case 60: /* unaryExpr: ADD expr  */
#line 250 "lrparser.y"
           {
	yyval = createNode(lineno, NT_OP_POS, "+"); 
	addChild(yyval, yyvsp[0]);
}
#line 1702 "lrparser.tab.c"
    break;

  case 61: /* unaryExpr: SUB expr  */
#line 254 "lrparser.y"
           {
	yyval = createNode(lineno, NT_OP_NEG, "-"); 
	addChild(yyval, yyvsp[0]);
}
#line 1711 "lrparser.tab.c"
    break;

  case 62: /* unaryExpr: NOT cond  */
#line 258 "lrparser.y"
           {
	yyval = createNode(lineno, NT_OP_NOT, "!"); 
	addChild(yyval, yyvsp[0]);
}
#line 1720 "lrparser.tab.c"
    break;

  case 63: /* primaryExpr: LPAREN expr RPAREN  */
#line 265 "lrparser.y"
                     { yyval = yyvsp[-1]; }
#line 1726 "lrparser.tab.c"
    break;

  case 64: /* primaryExpr: identifier LPAREN funcRParams RPAREN  */
#line 266 "lrparser.y"
                                       {
	yyval = createNode(lineno, NT_FUNCCALL, "funcCall");
	addChild(yyval, yyvsp[-3]);
	addChild(yyval, yyvsp[-1]);
  }
#line 1736 "lrparser.tab.c"
    break;

  case 65: /* primaryExpr: identifier LPAREN RPAREN  */
#line 271 "lrparser.y"
                           {
	yyval = createNode(lineno, NT_FUNCCALL, "funcCall");
	addChild(yyval, yyvsp[-2]);
  }
#line 1745 "lrparser.tab.c"
    break;

  case 66: /* primaryExpr: lVal  */
#line 275 "lrparser.y"
       { yyval = yyvsp[0]; }
#line 1751 "lrparser.tab.c"
    break;

  case 67: /* primaryExpr: constant  */
#line 276 "lrparser.y"
           { yyval = yyvsp[0]; }
#line 1757 "lrparser.tab.c"
    break;

  case 68: /* funcRParams: expr  */
#line 280 "lrparser.y"
       {
	yyval = createNode(lineno, NT_VARLIST, "varlist"); 
	addChild(yyval, yyvsp[0]);
}
#line 1766 "lrparser.tab.c"
    break;

  case 69: /* funcRParams: funcRParams COMMA expr  */
#line 284 "lrparser.y"
                         {
	yyval = yyvsp[-2]; 
	addChild(yyval, yyvsp[0]);
}
#line 1775 "lrparser.tab.c"
    break;

  case 70: /* lOrExpr: lAndExpr  */
#line 291 "lrparser.y"
           { yyval = yyvsp[0]; }
#line 1781 "lrparser.tab.c"
    break;

  case 71: /* lOrExpr: lOrExpr OR lAndExpr  */
#line 292 "lrparser.y"
                      {
	yyval = createNode(lineno, NT_OP_OR, "||"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1791 "lrparser.tab.c"
    break;

  case 72: /* lAndExpr: eqExpr  */
#line 300 "lrparser.y"
         { yyval = yyvsp[0]; }
#line 1797 "lrparser.tab.c"
    break;

  case 73: /* lAndExpr: lAndExpr AND eqExpr  */
#line 301 "lrparser.y"
                      {
	yyval = createNode(lineno, NT_OP_AND, "&&"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1807 "lrparser.tab.c"
    break;

  case 74: /* eqExpr: relExpr  */
#line 309 "lrparser.y"
          { yyval = yyvsp[0]; }
#line 1813 "lrparser.tab.c"
    break;

  case 75: /* eqExpr: eqExpr EQUAL relExpr  */
#line 310 "lrparser.y"
                       {
	yyval = createNode(lineno, NT_OP_E, "=="); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1823 "lrparser.tab.c"
    break;

  case 76: /* eqExpr: eqExpr NOTEQUAL relExpr  */
#line 315 "lrparser.y"
                          {
	yyval = createNode(lineno, NT_OP_NE, "!="); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1833 "lrparser.tab.c"
    break;

  case 77: /* relExpr: expr  */
#line 323 "lrparser.y"
       { yyval = yyvsp[0]; }
#line 1839 "lrparser.tab.c"
    break;

  case 78: /* relExpr: relExpr GRATER expr  */
#line 324 "lrparser.y"
                      {
	yyval = createNode(lineno, NT_OP_G, ">"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1849 "lrparser.tab.c"
    break;

  case 79: /* relExpr: relExpr LESS expr  */
#line 329 "lrparser.y"
                    {
	yyval = createNode(lineno, NT_OP_L, "<"); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1859 "lrparser.tab.c"
    break;

  case 80: /* relExpr: relExpr GRATEREQUAL expr  */
#line 334 "lrparser.y"
                           {
	yyval = createNode(lineno, NT_OP_GE, ">="); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1869 "lrparser.tab.c"
    break;

  case 81: /* relExpr: relExpr LESSEQUAL expr  */
#line 339 "lrparser.y"
                         {
	yyval = createNode(lineno, NT_OP_LE, "<="); 
	addChild(yyval, yyvsp[-2]); 
	addChild(yyval, yyvsp[0]);
}
#line 1879 "lrparser.tab.c"
    break;


#line 1883 "lrparser.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 348 "lrparser.y"


int yyerror(const char* message)
{
	fprintf(fp_error, "error: %s, at line %d\n", message, lineno);
	return -1;
}
