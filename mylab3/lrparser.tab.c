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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ast.h"

#define         NOINT   __INT_MAX__


int yylex();
void yyerror(char *);
extern char* yytext;
static int count = 1;
past cur;


#line 88 "lrparser.tab.c"

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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_LESSEQ = 14,                    /* LESSEQ  */
  YYSYMBOL_GREATEQ = 15,                   /* GREATEQ  */
  YYSYMBOL_NOTEQ = 16,                     /* NOTEQ  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_OR = 19,                        /* OR  */
  YYSYMBOL_20_ = 20,                       /* ';'  */
  YYSYMBOL_21_ = 21,                       /* ','  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* '['  */
  YYSYMBOL_24_ = 24,                       /* ']'  */
  YYSYMBOL_25_ = 25,                       /* '{'  */
  YYSYMBOL_26_ = 26,                       /* '}'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '!'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL__CompUnit = 38,                 /* _CompUnit  */
  YYSYMBOL_CompUnit = 39,                  /* CompUnit  */
  YYSYMBOL_Decl = 40,                      /* Decl  */
  YYSYMBOL_ConstDecl = 41,                 /* ConstDecl  */
  YYSYMBOL__ConstDecl = 42,                /* _ConstDecl  */
  YYSYMBOL_ConstDef = 43,                  /* ConstDef  */
  YYSYMBOL__ConstDef = 44,                 /* _ConstDef  */
  YYSYMBOL_ConstInitVal = 45,              /* ConstInitVal  */
  YYSYMBOL__ConstInitVal = 46,             /* _ConstInitVal  */
  YYSYMBOL_VarDecl = 47,                   /* VarDecl  */
  YYSYMBOL__VarDecl = 48,                  /* _VarDecl  */
  YYSYMBOL_VarDef = 49,                    /* VarDef  */
  YYSYMBOL__VarDef = 50,                   /* _VarDef  */
  YYSYMBOL_InitVal = 51,                   /* InitVal  */
  YYSYMBOL__InitVal = 52,                  /* _InitVal  */
  YYSYMBOL_FuncDef = 53,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 54,               /* FuncFParams  */
  YYSYMBOL__FuncFParams = 55,              /* _FuncFParams  */
  YYSYMBOL_FuncFParam = 56,                /* FuncFParam  */
  YYSYMBOL__FuncFParam = 57,               /* _FuncFParam  */
  YYSYMBOL_Block = 58,                     /* Block  */
  YYSYMBOL__Block = 59,                    /* _Block  */
  YYSYMBOL_BlockItem = 60,                 /* BlockItem  */
  YYSYMBOL_Stmt = 61,                      /* Stmt  */
  YYSYMBOL_ElseStmt = 62,                  /* ElseStmt  */
  YYSYMBOL_Exp = 63,                       /* Exp  */
  YYSYMBOL_Cond = 64,                      /* Cond  */
  YYSYMBOL_LVal = 65,                      /* LVal  */
  YYSYMBOL__LVal = 66,                     /* _LVal  */
  YYSYMBOL_PrimaryExp = 67,                /* PrimaryExp  */
  YYSYMBOL_Number = 68,                    /* Number  */
  YYSYMBOL_UnaryExp = 69,                  /* UnaryExp  */
  YYSYMBOL_FuncRParams = 70,               /* FuncRParams  */
  YYSYMBOL__FuncRParams = 71,              /* _FuncRParams  */
  YYSYMBOL_MulExp = 72,                    /* MulExp  */
  YYSYMBOL_AddExp = 73,                    /* AddExp  */
  YYSYMBOL_RelExp = 74,                    /* RelExp  */
  YYSYMBOL_EqExp = 75,                     /* EqExp  */
  YYSYMBOL_LAndExp = 76,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 77,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 78                   /* ConstExp  */
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
       2,     2,     2,    31,     2,     2,     2,    34,     2,     2,
      27,    28,    32,    29,    21,    30,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
      35,    22,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,    26,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    48,    48,    51,    52,    53,    54,    57,    58,    61,
      64,    65,    68,    69,    72,    73,    76,    77,    78,    81,
      82,    85,    88,    89,    92,    93,    94,    95,    98,    99,
     102,   103,   104,   107,   108,   111,   112,   113,   114,   117,
     120,   121,   124,   125,   126,   129,   130,   133,   134,   137,
     138,   141,   142,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   158,   161,   164,   167,   168,   171,
     172,   175,   176,   177,   180,   183,   184,   185,   186,   187,
     188,   191,   194,   195,   198,   199,   200,   201,   204,   205,
     206,   209,   210,   211,   212,   213,   216,   217,   218,   221,
     222,   225,   226,   229
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INTEGER", "INT",
  "VOID", "CONST", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN",
  "LESSEQ", "GREATEQ", "NOTEQ", "EQ", "AND", "OR", "';'", "','", "'='",
  "'['", "']'", "'{'", "'}'", "'('", "')'", "'+'", "'-'", "'!'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "$accept", "_CompUnit", "CompUnit", "Decl",
  "ConstDecl", "_ConstDecl", "ConstDef", "_ConstDef", "ConstInitVal",
  "_ConstInitVal", "VarDecl", "_VarDecl", "VarDef", "_VarDef", "InitVal",
  "_InitVal", "FuncDef", "FuncFParams", "_FuncFParams", "FuncFParam",
  "_FuncFParam", "Block", "_Block", "BlockItem", "Stmt", "ElseStmt", "Exp",
  "Cond", "LVal", "_LVal", "PrimaryExp", "Number", "UnaryExp",
  "FuncRParams", "_FuncRParams", "MulExp", "AddExp", "RelExp", "EqExp",
  "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,    23,    25,    27,    30,  -156,    61,  -156,  -156,    61,
      -6,    20,    26,    32,    50,  -156,  -156,  -156,   166,    21,
      -1,    52,  -156,    93,     3,   -12,    74,    79,    -5,  -156,
      31,    21,    21,    21,    21,  -156,  -156,  -156,  -156,  -156,
     132,    78,  -156,  -156,    57,   101,    85,    89,  -156,   111,
     166,   100,  -156,    85,   106,   177,    21,   114,  -156,    50,
      21,    60,  -156,  -156,   133,   131,   139,  -156,  -156,  -156,
      21,    21,    21,    21,    21,   151,   153,    72,  -156,    85,
     182,  -156,  -156,    85,   159,  -156,  -156,   158,   177,  -156,
     168,  -156,  -156,   155,   173,   166,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,   176,    93,   174,   186,   183,   185,
     195,  -156,  -156,  -156,  -156,   188,   148,  -156,   189,   194,
    -156,  -156,  -156,  -156,   196,   192,   197,  -156,   198,  -156,
      21,  -156,   200,    21,    21,  -156,  -156,  -156,   199,  -156,
    -156,  -156,    21,   177,  -156,  -156,  -156,  -156,    21,  -156,
     201,    91,   113,   209,   211,  -156,   203,  -156,   208,  -156,
     210,   108,    21,    21,    21,    21,    21,    21,    21,    21,
     108,  -156,   200,   223,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,   108,  -156,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     5,     7,     8,     6,
      24,     0,    23,     0,     0,     1,     3,     4,     0,     0,
       0,    25,    21,     0,     0,     0,     0,    11,    67,    74,
       0,     0,     0,     0,     0,    26,    30,    72,    75,    73,
      84,    88,    65,   103,     0,     0,     0,     0,    39,    41,
       0,    24,    22,     0,     0,     0,     0,     0,     9,     0,
       0,     0,    68,    32,    34,     0,     0,    78,    79,    80,
       0,     0,     0,     0,     0,    29,    44,     0,    38,     0,
       0,    27,    37,     0,     0,    13,    16,     0,     0,    10,
       0,    77,    83,     0,    81,     0,    31,    71,    85,    86,
      87,    89,    90,    28,     0,     0,     0,     0,     0,     0,
       0,    55,    48,    51,    56,     0,    50,    52,     0,    72,
      36,    40,    35,    18,    20,     0,    15,    12,    70,    76,
       0,    33,    42,     0,     0,    60,    61,    63,     0,    47,
      49,    54,     0,     0,    17,    14,    69,    82,     0,    43,
       0,    91,    96,    99,   101,    66,     0,    62,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    46,    58,    94,    95,    92,    93,    98,    97,
     100,   102,    59,    45,     0,    57,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,    14,   -74,  -156,   179,  -156,   107,   -50,    92,
    -156,   213,  -156,   162,   -11,   144,  -156,   216,   161,  -156,
      71,   -34,   126,  -156,  -155,  -156,   -17,   110,   -75,   117,
    -156,  -156,   178,  -156,  -156,    70,   -19,   -92,     5,    80,
      77,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    26,    27,    57,   124,   125,
       8,    11,    12,    21,    64,    65,     9,    47,    48,    49,
     149,   114,   115,   116,   117,   185,   118,   150,    37,    62,
      38,    39,    40,    93,    94,    41,    42,   152,   153,   154,
     155,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    36,   119,   113,    45,    85,   173,    35,    45,    44,
      55,    56,    78,    36,    66,   182,    18,    19,    60,    82,
      16,    20,    61,    17,    28,    29,    10,    46,    13,   186,
      15,    53,    14,    36,    28,    29,    43,    43,   127,    81,
      22,   119,   113,    90,    92,   120,    87,    23,    31,   122,
      32,    33,    34,    25,   101,   102,    30,    63,    31,    24,
      32,    33,    34,    28,    29,    43,     1,     2,     3,    43,
     174,   175,   176,   177,    50,    28,    29,   105,    36,     3,
     106,    75,   107,   108,   109,   110,   119,    31,    91,    32,
      33,    34,   111,   138,    58,   119,    51,    77,   112,    31,
      59,    32,    33,    34,    76,   162,   163,    73,    74,   119,
      77,    28,    29,   147,   151,   151,   106,    79,   107,   108,
     109,   110,    18,    19,    43,   158,   164,   165,   111,   166,
     167,   160,    80,    77,    83,    31,    88,    32,    33,    34,
      98,    99,   100,   151,   151,   151,   151,   151,   151,   151,
     151,    28,    29,   105,    95,     3,   106,    96,   107,   108,
     109,   110,    28,    29,    70,    71,    72,    97,   111,    28,
      29,   178,   179,    77,    19,    31,   104,    32,    33,    34,
      28,    29,   126,   129,    84,   123,    31,    45,    32,    33,
      34,    30,   128,    31,   130,    32,    33,    34,    28,    29,
     132,   133,    84,   135,    31,   136,    32,    33,    34,   141,
      67,    68,    69,   134,   139,   137,   142,   143,   144,   157,
      56,    60,    31,   148,    32,    33,    34,   168,   171,   161,
     169,   170,   184,   145,   172,   159,    52,   103,    89,   131,
      54,   121,   140,   183,   156,   146,   181,     0,   180
};

static const yytype_int16 yycheck[] =
{
      19,    18,    77,    77,     5,    55,   161,    18,     5,    19,
      22,    23,    46,    30,    31,   170,    22,    23,    23,    53,
       6,    27,    27,     9,     3,     4,     3,    28,     3,   184,
       0,    28,     5,    50,     3,     4,    55,    56,    88,    50,
      20,   116,   116,    60,    61,    79,    56,    21,    27,    83,
      29,    30,    31,     3,    73,    74,    25,    26,    27,    27,
      29,    30,    31,     3,     4,    84,     5,     6,     7,    88,
     162,   163,   164,   165,    22,     3,     4,     5,    95,     7,
       8,    24,    10,    11,    12,    13,   161,    27,    28,    29,
      30,    31,    20,   110,    20,   170,     3,    25,    26,    27,
      21,    29,    30,    31,     3,    14,    15,    29,    30,   184,
      25,     3,     4,   130,   133,   134,     8,    28,    10,    11,
      12,    13,    22,    23,   143,   142,    35,    36,    20,    16,
      17,   148,    21,    25,    28,    27,    22,    29,    30,    31,
      70,    71,    72,   162,   163,   164,   165,   166,   167,   168,
     169,     3,     4,     5,    21,     7,     8,    26,    10,    11,
      12,    13,     3,     4,    32,    33,    34,    28,    20,     3,
       4,   166,   167,    25,    23,    27,    23,    29,    30,    31,
       3,     4,    24,    28,    25,    26,    27,     5,    29,    30,
      31,    25,    24,    27,    21,    29,    30,    31,     3,     4,
      24,    27,    25,    20,    27,    20,    29,    30,    31,    20,
      32,    33,    34,    27,    26,    20,    22,    21,    26,    20,
      23,    23,    27,    23,    29,    30,    31,    18,    20,    28,
      19,    28,     9,   126,    24,   143,    23,    75,    59,    95,
      24,    80,   116,   172,   134,   128,   169,    -1,   168
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,    38,    39,    40,    41,    47,    53,
       3,    48,    49,     3,     5,     0,    39,    39,    22,    23,
      27,    50,    20,    21,    27,     3,    42,    43,     3,     4,
      25,    27,    29,    30,    31,    51,    63,    65,    67,    68,
      69,    72,    73,    73,    78,     5,    28,    54,    55,    56,
      22,     3,    48,    28,    54,    22,    23,    44,    20,    21,
      23,    27,    66,    26,    51,    52,    63,    69,    69,    69,
      32,    33,    34,    29,    30,    24,     3,    25,    58,    28,
      21,    51,    58,    28,    25,    45,    78,    78,    22,    42,
      63,    28,    63,    70,    71,    21,    26,    28,    72,    72,
      72,    73,    73,    50,    23,     5,     8,    10,    11,    12,
      13,    20,    26,    40,    58,    59,    60,    61,    63,    65,
      58,    55,    58,    26,    45,    46,    24,    45,    24,    28,
      21,    52,    24,    27,    27,    20,    20,    20,    63,    26,
      59,    20,    22,    21,    26,    44,    66,    63,    23,    57,
      64,    73,    74,    75,    76,    77,    64,    20,    63,    46,
      63,    28,    14,    15,    35,    36,    16,    17,    18,    19,
      28,    20,    24,    61,    74,    74,    74,    74,    75,    75,
      76,    77,    61,    57,     9,    62,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    39,    39,    40,    40,    41,
      42,    42,    43,    43,    44,    44,    45,    45,    45,    46,
      46,    47,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    51,    52,    52,    53,    53,    53,    53,    54,
      55,    55,    56,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    64,    65,    65,    66,
      66,    67,    67,    67,    68,    69,    69,    69,    69,    69,
      69,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    77,    77,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     4,
       3,     1,     4,     3,     4,     3,     1,     3,     2,     3,
       1,     3,     3,     1,     1,     2,     3,     4,     4,     3,
       1,     3,     2,     3,     1,     6,     6,     5,     5,     1,
       3,     1,     4,     5,     2,     4,     3,     3,     2,     2,
       1,     1,     1,     4,     2,     1,     1,     6,     5,     5,
       2,     2,     3,     2,     2,     1,     1,     1,     2,     4,
       3,     3,     1,     1,     1,     1,     4,     3,     2,     2,
       2,     1,     3,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1
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
  case 2: /* _CompUnit: CompUnit  */
#line 48 "lrparser.y"
                                {root = (yyval.pAst); (yyval.pAst) = (yyvsp[0].pAst);}
#line 1291 "lrparser.tab.c"
    break;

  case 3: /* CompUnit: Decl CompUnit  */
#line 51 "lrparser.y"
                                {(yyval.pAst) = ListNode((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1297 "lrparser.tab.c"
    break;

  case 4: /* CompUnit: FuncDef CompUnit  */
#line 52 "lrparser.y"
                                {(yyval.pAst) = ListNode((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1303 "lrparser.tab.c"
    break;

  case 5: /* CompUnit: Decl  */
#line 53 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1309 "lrparser.tab.c"
    break;

  case 6: /* CompUnit: FuncDef  */
#line 54 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1315 "lrparser.tab.c"
    break;

  case 7: /* Decl: ConstDecl  */
#line 57 "lrparser.y"
                                {(yyval.pAst) = newNode("Decl",strdup("const int"),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1321 "lrparser.tab.c"
    break;

  case 8: /* Decl: VarDecl  */
#line 58 "lrparser.y"
                                {(yyval.pAst) = newNode("Decl",strdup("int"),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1327 "lrparser.tab.c"
    break;

  case 9: /* ConstDecl: CONST INT _ConstDecl ';'  */
#line 61 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1333 "lrparser.tab.c"
    break;

  case 10: /* _ConstDecl: ConstDef ',' _ConstDecl  */
#line 64 "lrparser.y"
                                        {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1339 "lrparser.tab.c"
    break;

  case 11: /* _ConstDecl: ConstDef  */
#line 65 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1345 "lrparser.tab.c"
    break;

  case 12: /* ConstDef: ID _ConstDef '=' ConstInitVal  */
#line 68 "lrparser.y"
                                                {(yyval.pAst) = newNode("ConstDef",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1351 "lrparser.tab.c"
    break;

  case 13: /* ConstDef: ID '=' ConstInitVal  */
#line 69 "lrparser.y"
                                                {(yyval.pAst) = newNode("ConstDef",strdup((yyvsp[-2].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1357 "lrparser.tab.c"
    break;

  case 14: /* _ConstDef: '[' ConstExp ']' _ConstDef  */
#line 72 "lrparser.y"
                                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1363 "lrparser.tab.c"
    break;

  case 15: /* _ConstDef: '[' ConstExp ']'  */
#line 73 "lrparser.y"
                                                {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1369 "lrparser.tab.c"
    break;

  case 16: /* ConstInitVal: ConstExp  */
#line 76 "lrparser.y"
                                                {(yyval.pAst) = newNode("ConstInitVal",NULL,NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1375 "lrparser.tab.c"
    break;

  case 17: /* ConstInitVal: '{' _ConstInitVal '}'  */
#line 77 "lrparser.y"
                                                {(yyval.pAst) = newNode("ConstInitVal",NULL,NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1381 "lrparser.tab.c"
    break;

  case 18: /* ConstInitVal: '{' '}'  */
#line 78 "lrparser.y"
                                                {(yyval.pAst) = newNode("noConstInitVal",NULL,NOINT,NULL,NULL,NULL);}
#line 1387 "lrparser.tab.c"
    break;

  case 19: /* _ConstInitVal: ConstInitVal ',' _ConstInitVal  */
#line 81 "lrparser.y"
                                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1393 "lrparser.tab.c"
    break;

  case 20: /* _ConstInitVal: ConstInitVal  */
#line 82 "lrparser.y"
                                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1399 "lrparser.tab.c"
    break;

  case 21: /* VarDecl: INT _VarDecl ';'  */
#line 85 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1405 "lrparser.tab.c"
    break;

  case 22: /* _VarDecl: VarDef ',' _VarDecl  */
#line 88 "lrparser.y"
                                         {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1411 "lrparser.tab.c"
    break;

  case 23: /* _VarDecl: VarDef  */
#line 89 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1417 "lrparser.tab.c"
    break;

  case 24: /* VarDef: ID  */
#line 92 "lrparser.y"
                                        {(yyval.pAst) = newNode("VarDef",strdup((yyvsp[0].str)),NOINT,NULL,NULL,NULL);}
#line 1423 "lrparser.tab.c"
    break;

  case 25: /* VarDef: ID _VarDef  */
#line 93 "lrparser.y"
                                        {(yyval.pAst) = newNode("VarDef",strdup((yyvsp[-1].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1429 "lrparser.tab.c"
    break;

  case 26: /* VarDef: ID '=' InitVal  */
#line 94 "lrparser.y"
                                        {(yyval.pAst) = newNode("VarDef",strdup((yyvsp[-2].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1435 "lrparser.tab.c"
    break;

  case 27: /* VarDef: ID _VarDef '=' InitVal  */
#line 95 "lrparser.y"
                                        {(yyval.pAst) = newNode("VarDef",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1441 "lrparser.tab.c"
    break;

  case 28: /* _VarDef: '[' ConstExp ']' _VarDef  */
#line 98 "lrparser.y"
                                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1447 "lrparser.tab.c"
    break;

  case 29: /* _VarDef: '[' ConstExp ']'  */
#line 99 "lrparser.y"
                                                {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1453 "lrparser.tab.c"
    break;

  case 30: /* InitVal: Exp  */
#line 102 "lrparser.y"
                                        {(yyval.pAst) = newNode("InitVal",NULL,NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1459 "lrparser.tab.c"
    break;

  case 31: /* InitVal: '{' _InitVal '}'  */
#line 103 "lrparser.y"
                                        {(yyval.pAst) = newNode("InitVal",NULL,NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1465 "lrparser.tab.c"
    break;

  case 32: /* InitVal: '{' '}'  */
#line 104 "lrparser.y"
                                        {(yyval.pAst) = newNode("noInitVal",NULL,NOINT,NULL,NULL,NULL);}
#line 1471 "lrparser.tab.c"
    break;

  case 33: /* _InitVal: InitVal ',' _InitVal  */
#line 107 "lrparser.y"
                                         {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1477 "lrparser.tab.c"
    break;

  case 34: /* _InitVal: InitVal  */
#line 108 "lrparser.y"
                                         {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1483 "lrparser.tab.c"
    break;

  case 35: /* FuncDef: VOID ID '(' FuncFParams ')' Block  */
#line 111 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncDef  void",strdup((yyvsp[-4].str)),NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1489 "lrparser.tab.c"
    break;

  case 36: /* FuncDef: INT ID '(' FuncFParams ')' Block  */
#line 112 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncDef  int",strdup((yyvsp[-4].str)),NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1495 "lrparser.tab.c"
    break;

  case 37: /* FuncDef: VOID ID '(' ')' Block  */
#line 113 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncDef  void",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1501 "lrparser.tab.c"
    break;

  case 38: /* FuncDef: INT ID '(' ')' Block  */
#line 114 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncDef  int",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1507 "lrparser.tab.c"
    break;

  case 39: /* FuncFParams: _FuncFParams  */
#line 117 "lrparser.y"
                                     {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1513 "lrparser.tab.c"
    break;

  case 40: /* _FuncFParams: FuncFParam ',' _FuncFParams  */
#line 120 "lrparser.y"
                                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1519 "lrparser.tab.c"
    break;

  case 41: /* _FuncFParams: FuncFParam  */
#line 121 "lrparser.y"
                                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1525 "lrparser.tab.c"
    break;

  case 42: /* FuncFParam: INT ID '[' ']'  */
#line 124 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncFParam  int",strdup((yyvsp[-2].str)),NOINT,NULL,NULL,NULL);}
#line 1531 "lrparser.tab.c"
    break;

  case 43: /* FuncFParam: INT ID '[' ']' _FuncFParam  */
#line 125 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncFParam  int",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1537 "lrparser.tab.c"
    break;

  case 44: /* FuncFParam: INT ID  */
#line 126 "lrparser.y"
                                                {(yyval.pAst) = newNode("FuncFParam  int",strdup((yyvsp[0].str)),NOINT,NULL,NULL,NULL);}
#line 1543 "lrparser.tab.c"
    break;

  case 45: /* _FuncFParam: '[' Exp ']' _FuncFParam  */
#line 129 "lrparser.y"
                                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1549 "lrparser.tab.c"
    break;

  case 46: /* _FuncFParam: '[' Exp ']'  */
#line 130 "lrparser.y"
                                                {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1555 "lrparser.tab.c"
    break;

  case 47: /* Block: '{' _Block '}'  */
#line 133 "lrparser.y"
                                {(yyval.pAst) = newNode("Block",NULL,NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1561 "lrparser.tab.c"
    break;

  case 48: /* Block: '{' '}'  */
#line 134 "lrparser.y"
                                {(yyval.pAst) = newNode("noBlock",NULL,NOINT,NULL,NULL,NULL);}
#line 1567 "lrparser.tab.c"
    break;

  case 49: /* _Block: BlockItem _Block  */
#line 137 "lrparser.y"
                                {(yyval.pAst) = ListNode((yyvsp[-1].pAst),(yyvsp[0].pAst));}
#line 1573 "lrparser.tab.c"
    break;

  case 50: /* _Block: BlockItem  */
#line 138 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1579 "lrparser.tab.c"
    break;

  case 51: /* BlockItem: Decl  */
#line 141 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1585 "lrparser.tab.c"
    break;

  case 52: /* BlockItem: Stmt  */
#line 142 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1591 "lrparser.tab.c"
    break;

  case 53: /* Stmt: LVal '=' Exp ';'  */
#line 145 "lrparser.y"
                                        {(yyval.pAst) = newNode("AssignStmt",NULL,NOINT,NULL,(yyvsp[-3].pAst),(yyvsp[-1].pAst));}
#line 1597 "lrparser.tab.c"
    break;

  case 54: /* Stmt: Exp ';'  */
#line 146 "lrparser.y"
                                        {(yyval.pAst) = newNode("ExpStmt",NULL,NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1603 "lrparser.tab.c"
    break;

  case 55: /* Stmt: ';'  */
#line 147 "lrparser.y"
                                        {(yyval.pAst) = newNode("noStmt",NULL,NOINT,NULL,NULL,NULL);}
#line 1609 "lrparser.tab.c"
    break;

  case 56: /* Stmt: Block  */
#line 148 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1615 "lrparser.tab.c"
    break;

  case 57: /* Stmt: IF '(' Cond ')' Stmt ElseStmt  */
#line 149 "lrparser.y"
                                        {(yyval.pAst) = newNode("IfStmt",NULL,NOINT,(yyvsp[0].pAst),(yyvsp[-3].pAst),(yyvsp[-1].pAst));}
#line 1621 "lrparser.tab.c"
    break;

  case 58: /* Stmt: IF '(' Cond ')' Stmt  */
#line 150 "lrparser.y"
                                        {(yyval.pAst) = newNode("IfStmt",NULL,NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1627 "lrparser.tab.c"
    break;

  case 59: /* Stmt: WHILE '(' Cond ')' Stmt  */
#line 151 "lrparser.y"
                                        {(yyval.pAst) = newNode("WhileStmt",NULL,NOINT,NULL,(yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1633 "lrparser.tab.c"
    break;

  case 60: /* Stmt: BREAK ';'  */
#line 152 "lrparser.y"
                                        {(yyval.pAst) = newNode("BreakStmt",NULL,NOINT,NULL,NULL,NULL);}
#line 1639 "lrparser.tab.c"
    break;

  case 61: /* Stmt: CONTINUE ';'  */
#line 153 "lrparser.y"
                                        {(yyval.pAst) = newNode("ContinueStmt",NULL,NOINT,NULL,NULL,NULL);}
#line 1645 "lrparser.tab.c"
    break;

  case 62: /* Stmt: RETURN Exp ';'  */
#line 154 "lrparser.y"
                                        {(yyval.pAst) = newNode("ReturnStmt",NULL,NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1651 "lrparser.tab.c"
    break;

  case 63: /* Stmt: RETURN ';'  */
#line 155 "lrparser.y"
                                        {(yyval.pAst) = newNode("ReturnStmt",NULL,NOINT,NULL,NULL,NULL);}
#line 1657 "lrparser.tab.c"
    break;

  case 64: /* ElseStmt: ELSE Stmt  */
#line 158 "lrparser.y"
                                        {(yyval.pAst) = newNode("ElseStmt",NULL,NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1663 "lrparser.tab.c"
    break;

  case 65: /* Exp: AddExp  */
#line 161 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1669 "lrparser.tab.c"
    break;

  case 66: /* Cond: LOrExp  */
#line 164 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1675 "lrparser.tab.c"
    break;

  case 67: /* LVal: ID  */
#line 167 "lrparser.y"
                                {(yyval.pAst) = newNode("LVal",strdup((yyvsp[0].str)),NOINT,NULL,NULL,NULL);}
#line 1681 "lrparser.tab.c"
    break;

  case 68: /* LVal: ID _LVal  */
#line 168 "lrparser.y"
                                {(yyval.pAst) = newNode("LVal",strdup((yyvsp[-1].str)),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1687 "lrparser.tab.c"
    break;

  case 69: /* _LVal: '[' Exp ']' _LVal  */
#line 171 "lrparser.y"
                                {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1693 "lrparser.tab.c"
    break;

  case 70: /* _LVal: '[' Exp ']'  */
#line 172 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1699 "lrparser.tab.c"
    break;

  case 71: /* PrimaryExp: '(' Exp ')'  */
#line 175 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1705 "lrparser.tab.c"
    break;

  case 72: /* PrimaryExp: LVal  */
#line 176 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1711 "lrparser.tab.c"
    break;

  case 73: /* PrimaryExp: Number  */
#line 177 "lrparser.y"
                                {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1717 "lrparser.tab.c"
    break;

  case 74: /* Number: INTEGER  */
#line 180 "lrparser.y"
                                {(yyval.pAst) = newNode("Integer",NULL,(yyvsp[0].number),NULL,NULL,NULL);}
#line 1723 "lrparser.tab.c"
    break;

  case 75: /* UnaryExp: PrimaryExp  */
#line 183 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",NULL,NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1729 "lrparser.tab.c"
    break;

  case 76: /* UnaryExp: ID '(' FuncRParams ')'  */
#line 184 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",strdup((yyvsp[-3].str)),NOINT,NULL,(yyvsp[-1].pAst),NULL);}
#line 1735 "lrparser.tab.c"
    break;

  case 77: /* UnaryExp: ID '(' ')'  */
#line 185 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",strdup((yyvsp[-2].str)),NOINT,NULL,NULL,NULL);}
#line 1741 "lrparser.tab.c"
    break;

  case 78: /* UnaryExp: '+' UnaryExp  */
#line 186 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",strdup("+"),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1747 "lrparser.tab.c"
    break;

  case 79: /* UnaryExp: '-' UnaryExp  */
#line 187 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",strdup("-"),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1753 "lrparser.tab.c"
    break;

  case 80: /* UnaryExp: '!' UnaryExp  */
#line 188 "lrparser.y"
                                        {(yyval.pAst) = newNode("UnaryExp",strdup("!"),NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1759 "lrparser.tab.c"
    break;

  case 81: /* FuncRParams: _FuncRParams  */
#line 191 "lrparser.y"
                                        {(yyval.pAst) = newNode("FuncRParams",NULL,NOINT,NULL,(yyvsp[0].pAst),NULL);}
#line 1765 "lrparser.tab.c"
    break;

  case 82: /* _FuncRParams: _FuncRParams ',' Exp  */
#line 194 "lrparser.y"
                                        {(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1771 "lrparser.tab.c"
    break;

  case 83: /* _FuncRParams: Exp  */
#line 195 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1777 "lrparser.tab.c"
    break;

  case 84: /* MulExp: UnaryExp  */
#line 198 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1783 "lrparser.tab.c"
    break;

  case 85: /* MulExp: UnaryExp '*' MulExp  */
#line 199 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("*");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1789 "lrparser.tab.c"
    break;

  case 86: /* MulExp: UnaryExp '/' MulExp  */
#line 200 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("/");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1795 "lrparser.tab.c"
    break;

  case 87: /* MulExp: UnaryExp '%' MulExp  */
#line 201 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("%");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1801 "lrparser.tab.c"
    break;

  case 88: /* AddExp: MulExp  */
#line 204 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1807 "lrparser.tab.c"
    break;

  case 89: /* AddExp: MulExp '+' AddExp  */
#line 205 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("+");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1813 "lrparser.tab.c"
    break;

  case 90: /* AddExp: MulExp '-' AddExp  */
#line 206 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("-");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1819 "lrparser.tab.c"
    break;

  case 91: /* RelExp: AddExp  */
#line 209 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1825 "lrparser.tab.c"
    break;

  case 92: /* RelExp: AddExp '<' RelExp  */
#line 210 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup("<");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1831 "lrparser.tab.c"
    break;

  case 93: /* RelExp: AddExp '>' RelExp  */
#line 211 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup(">");(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1837 "lrparser.tab.c"
    break;

  case 94: /* RelExp: AddExp LESSEQ RelExp  */
#line 212 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1843 "lrparser.tab.c"
    break;

  case 95: /* RelExp: AddExp GREATEQ RelExp  */
#line 213 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1849 "lrparser.tab.c"
    break;

  case 96: /* EqExp: RelExp  */
#line 216 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1855 "lrparser.tab.c"
    break;

  case 97: /* EqExp: RelExp EQ EqExp  */
#line 217 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1861 "lrparser.tab.c"
    break;

  case 98: /* EqExp: RelExp NOTEQ EqExp  */
#line 218 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1867 "lrparser.tab.c"
    break;

  case 99: /* LAndExp: EqExp  */
#line 221 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1873 "lrparser.tab.c"
    break;

  case 100: /* LAndExp: EqExp AND LAndExp  */
#line 222 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1879 "lrparser.tab.c"
    break;

  case 101: /* LOrExp: LAndExp  */
#line 225 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1885 "lrparser.tab.c"
    break;

  case 102: /* LOrExp: LAndExp OR LOrExp  */
#line 226 "lrparser.y"
                                        {(yyvsp[0].pAst)->id = strdup((yyvsp[-1].str));(yyval.pAst) = ListNode((yyvsp[-2].pAst),(yyvsp[0].pAst));}
#line 1891 "lrparser.tab.c"
    break;

  case 103: /* ConstExp: AddExp  */
#line 229 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1897 "lrparser.tab.c"
    break;


#line 1901 "lrparser.tab.c"

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

#line 232 "lrparser.y"


/* Epilogue */

