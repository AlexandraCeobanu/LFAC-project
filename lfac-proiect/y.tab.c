/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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

    #include<stdio.h>
    #include<string.h>
    #include <stdbool.h>
    #include<stdlib.h>
    #include<ctype.h>
    extern int yylineno;
    extern FILE* yyin;
    extern char* yytext;
    void yyerror( char *msg);
    int yylex();
    int yywrap();
    struct simbol {
        char  id_name[500];
        char * data_type;
        char * type;
        int id_numar;
        int elem_vect[10];
        int nr_elemente;
        int intval;
        char* parametri[5];
        int nr_parametri;
        float floatval;
        char charval;
        char boolval[10];
    } symbol_table[300];
    int cauta_simbol(char []);
    int var_declarata(char []);
    void verifica_par(int ,int,char);
    void functie_def(char[]);
    void print_fun(int);
    void adauga_simbol(char,char[]);
    void insert_type();
    int count=0;
    int id_op=1;
    int cnt,cnt2;
    int rez,ord,ord2,rez2,rez3;
    int id_parametru;
    int s;
    int elemente_vect,nr_elemente;
    int nr_functie;
    char valoare;
    char type[15];
    char return_type[15];
    extern int nr_linii;

    struct node { 
	struct node *left; 
	struct node *right; 
    int intval;
	char token[30];
    };
    void insert_type();
    void printtree(struct node*);
    void printInorder(struct node*);
    int evalAST(struct node*);
    struct node* buildAST(struct node *left, struct node *right, char root[],int value);
    struct node* head;

#line 130 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    PRINT = 258,
    GLOBAL = 259,
    FUNCTIONS = 260,
    MAIN = 261,
    PRINTF = 262,
    INT = 263,
    BOOL = 264,
    FLOAT = 265,
    CHAR = 266,
    STRING = 267,
    EVAL = 268,
    RETURN = 269,
    FOR = 270,
    WHILE = 271,
    DO = 272,
    IF_ELSE = 273,
    VOID = 274,
    FUNCTION = 275,
    IF = 276,
    ELSE = 277,
    CALL = 278,
    VECTOR = 279,
    ATRR = 280,
    NUMAR = 281,
    TYPEOF = 282,
    NUMAR_REAL = 283,
    ID = 284,
    SIR_CAR = 285,
    CARACTER = 286,
    ATR = 287,
    ADUNARE_ATR = 288,
    SCADERE_ATR = 289,
    INMULTIRE_ATR = 290,
    DIV_ATR = 291,
    MOD_ATR = 292,
    TRUE_FALSE = 293,
    DIFERIT = 294,
    AND = 295,
    OR = 296,
    NOT = 297,
    EGALITATE = 298,
    GT = 299,
    GE = 300,
    LT = 301,
    LE = 302,
    ADUNARE = 303,
    SCADERE = 304,
    INMULTIRE = 305,
    DIV = 306,
    MODULO = 307,
    INCREMENTARE = 308,
    DECREMENTARE = 309
  };
#endif
/* Tokens.  */
#define PRINT 258
#define GLOBAL 259
#define FUNCTIONS 260
#define MAIN 261
#define PRINTF 262
#define INT 263
#define BOOL 264
#define FLOAT 265
#define CHAR 266
#define STRING 267
#define EVAL 268
#define RETURN 269
#define FOR 270
#define WHILE 271
#define DO 272
#define IF_ELSE 273
#define VOID 274
#define FUNCTION 275
#define IF 276
#define ELSE 277
#define CALL 278
#define VECTOR 279
#define ATRR 280
#define NUMAR 281
#define TYPEOF 282
#define NUMAR_REAL 283
#define ID 284
#define SIR_CAR 285
#define CARACTER 286
#define ATR 287
#define ADUNARE_ATR 288
#define SCADERE_ATR 289
#define INMULTIRE_ATR 290
#define DIV_ATR 291
#define MOD_ATR 292
#define TRUE_FALSE 293
#define DIFERIT 294
#define AND 295
#define OR 296
#define NOT 297
#define EGALITATE 298
#define GT 299
#define GE 300
#define LT 301
#define LE 302
#define ADUNARE 303
#define SCADERE 304
#define INMULTIRE 305
#define DIV 306
#define MODULO 307
#define INCREMENTARE 308
#define DECREMENTARE 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "parser.y"

    struct var_name {
    char name[500];
    int intval;
    char charval;
    char tip[10];
    float realval;
    char strval[500];
    char boolval[10];
    struct node* nd;
} nd_obj;

#line 303 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,    47,     2,     2,     2,
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,    66,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    48,    50,     2,     2,     2,
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
      35,    36,    37,    38,    46,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,   101,   102,   105,   107,   108,   110,   111,
     114,   115,   118,   118,   119,   119,   119,   121,   123,   124,
     124,   128,   128,   133,   133,   137,   137,   141,   143,   144,
     145,   148,   149,   149,   152,   153,   156,   157,   160,   161,
     162,   162,   165,   165,   168,   170,   170,   172,   175,   176,
     177,   181,   182,   183,   183,   184,   190,   191,   196,   203,
     210,   217,   224,   225,   225,   232,   233,   237,   238,   239,
     242,   243,   244,   245,   248,   249,   252,   253,   254,   255,
     260,   261,   262,   265,   266,   267,   271,   272,   275,   276,
     280,   281,   282,   283,   286,   287,   288,   289,   292,   294,
     295,   297,   299,   300,   301,   302,   303,   304,   305,   306,
     309,   310,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   328,   329,   330,   331,   332,
     333,   339,   343,   344,   347,   348,   352,   352,   356,   357,
     357,   358,   359,   360,   361,   361,   366,   366,   369,   370,
     370,   371,   372,   372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "GLOBAL", "FUNCTIONS", "MAIN",
  "PRINTF", "INT", "BOOL", "FLOAT", "CHAR", "STRING", "EVAL", "RETURN",
  "FOR", "WHILE", "DO", "IF_ELSE", "VOID", "FUNCTION", "IF", "ELSE",
  "CALL", "VECTOR", "ATRR", "NUMAR", "TYPEOF", "NUMAR_REAL", "ID",
  "SIR_CAR", "CARACTER", "ATR", "ADUNARE_ATR", "SCADERE_ATR",
  "INMULTIRE_ATR", "DIV_ATR", "MOD_ATR", "TRUE_FALSE", "','", "'['", "']'",
  "'('", "')'", "'!'", "';'", "DIFERIT", "'$'", "'}'", "'{'", "'~'", "AND",
  "OR", "NOT", "EGALITATE", "GT", "GE", "LT", "LE", "ADUNARE", "SCADERE",
  "INMULTIRE", "DIV", "MODULO", "INCREMENTARE", "DECREMENTARE", "'='",
  "$accept", "start", "blocMain", "str_control", "structtype",
  "blocFunctii", "declarari_func", "functie", "$@1", "$@2", "$@3", "bloc1",
  "bloc", "return", "$@4", "$@5", "$@6", "$@7", "parametri",
  "declarare_par", "$@8", "var_globale", "declarari_var_glob",
  "variabila_glob", "$@9", "array", "$@10", "elemente", "$@11",
  "datatype_f", "variabila", "$@12", "$@13", "op_ord1_int", "op_ord2_int",
  "operand_int", "op_ord1_float", "op_ord2_float", "operand_float",
  "datatype", "value", "for_loop", "if_then_else", "else", "cond_bool",
  "op_artm_unare", "stm_body", "afisari", "evaluare", "text",
  "function_call", "$@14", "f_parametri", "$@15", "$@16",
  "function_call_p", "$@17", "f_parametri2", "$@18", "$@19", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    44,
      91,    93,    40,    41,    33,    59,   294,    36,   125,   123,
     126,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    61
};
# endif

#define YYPACT_NINF (-194)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    45,    73,    37,  -194,   240,  -194,    94,    91,  -194,
    -194,  -194,  -194,    35,    70,    42,  -194,    98,    97,  -194,
    -194,   240,  -194,   118,  -194,   165,   111,  -194,   249,  -194,
     129,   142,  -194,  -194,  -194,  -194,   144,   116,  -194,    23,
     -12,   151,   159,  -194,   164,  -194,   178,   180,  -194,   173,
    -194,   189,   162,   249,   185,   175,    74,   177,  -194,   100,
     249,   249,   216,  -194,   190,   191,   193,    76,   226,    98,
    -194,  -194,  -194,   102,    92,  -194,  -194,  -194,  -194,   -12,
     108,   104,  -194,   271,   234,   162,  -194,   236,    -5,   -12,
     205,   162,   162,   162,   162,   162,  -194,  -194,  -194,   -33,
    -194,   162,   249,   162,   162,   162,   162,   162,   237,  -194,
    -194,  -194,   221,   249,   249,   245,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,   232,  -194,   254,   241,   249,   -31,   249,
     -12,   -12,   -12,   -12,   242,   255,   247,    -8,   244,   162,
     -12,    33,   110,  -194,    74,    74,    74,    74,    74,    74,
    -194,    44,  -194,   177,   177,  -194,  -194,  -194,   256,   248,
    -194,  -194,   250,   260,   267,   240,  -194,   253,  -194,  -194,
    -194,   104,   104,  -194,  -194,  -194,    76,   162,   162,   162,
     162,   162,   162,   243,   162,   162,    30,    74,    57,  -194,
     261,    76,  -194,   251,  -194,   240,   268,   273,   285,   249,
     276,    74,    74,    74,    74,    74,    74,   249,  -194,  -194,
      40,   277,   274,   279,  -194,   249,  -194,   245,   278,   270,
     240,   257,  -194,   162,   272,   293,   286,   287,  -194,    30,
     280,  -194,   275,   249,  -194,  -194,  -194,    16,   -11,  -194,
    -194,    30,  -194,   282,   249,  -194,   315,    76,   301,   283,
    -194,  -194,   289,    30,  -194,  -194,   288,    53,  -194,   113,
     249,   112,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   290,
     291,   292,   304,   296,   294,   297,   298,   299,   300,  -194,
     302,   303,   307,  -194,  -194,  -194,  -194,  -194,  -194,   249,
    -194,  -194,   112,   305,   112,  -194,   309,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    35,     0,     1,     0,     0,    90,
      93,    91,    92,     0,     0,     0,     9,     0,     0,     2,
      34,    36,    42,    38,    39,     0,     0,     4,     0,    37,
       0,     0,    48,    49,    50,    14,     0,     0,     8,     0,
       0,     0,     0,     7,     0,     6,     0,    77,    76,     0,
      78,    75,     0,   117,     0,     0,    65,    69,    73,     0,
     122,   116,     0,   124,     0,    79,     0,     0,     0,    10,
      12,    77,    75,     0,     0,    79,    89,    88,    87,     0,
       0,    82,    85,     0,     0,     0,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,    62,     0,
     119,     0,   112,     0,     0,     0,     0,     0,    51,    52,
     123,   118,     0,   120,   114,    47,    94,    95,    96,    97,
      41,    15,    11,     0,   134,     0,     0,   125,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    66,    55,    57,    58,    59,    60,    61,
      74,     0,   113,    67,    68,    70,    71,    72,     0,     0,
     121,   115,    44,     0,     0,    30,   135,     0,   126,    86,
     128,    80,    81,    83,    84,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,     0,   132,
       0,     0,     3,     0,    43,    30,     0,    28,     0,   129,
       0,   105,   104,   107,   109,   106,   108,     0,   102,   103,
       0,   143,     0,   141,   133,     0,    54,    47,     0,     0,
      30,    31,   130,     0,     0,     0,   138,     0,   137,     0,
       0,    46,     0,     0,    13,    29,    32,     0,     0,   146,
     139,     0,   142,     0,     0,    16,     0,     0,     0,     0,
      99,   100,     0,     0,   145,     5,     0,     0,    33,     0,
       0,     0,   140,    17,    19,    23,    21,    25,    27,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,    18,
       0,     0,   148,   152,   147,    20,    24,    22,    26,     0,
     101,   149,     0,     0,     0,   153,     0,   150,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,  -194,  -194,   281,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -189,  -194,
    -194,  -194,   318,  -194,  -194,   306,  -194,   124,  -194,  -194,
     -81,  -194,  -194,    18,    79,   139,   -76,    87,    77,    -1,
    -169,  -194,  -194,  -194,   -96,    88,   -52,  -194,  -194,  -194,
     -28,  -194,  -193,  -194,  -194,  -194,  -194,  -136,  -194,  -194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    53,    54,     8,    26,    36,   123,    68,
     164,   245,   234,   269,   275,   277,   276,   278,   196,   197,
     247,     3,    13,    14,    31,    24,    30,   163,   193,    37,
      55,   158,    87,    56,    57,    58,    80,    81,    82,    59,
     120,    60,    61,   251,   137,    98,    62,    63,    64,   126,
      75,   138,   212,   253,   227,   213,   252,   274,   294,   292
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   100,   134,   128,    15,   151,   218,   200,   110,   111,
     150,   249,   169,   142,    76,     1,    77,    78,    46,    71,
      15,    48,   216,    50,    72,    65,   103,   104,   130,   131,
      79,   235,    65,    65,   250,   183,   242,    52,     9,    10,
      11,    12,     7,   184,   185,   140,    46,    71,   254,    48,
     152,    50,    72,    46,    47,   248,    48,    74,    50,    51,
     262,   160,   161,   225,   188,    73,    22,   184,   185,   226,
      99,    23,    52,     6,    65,   168,   189,   170,   258,   264,
     210,   265,   266,    20,   267,    65,    65,   190,   208,   209,
       4,    99,   103,   104,     5,   184,   185,    18,   268,    65,
     214,    65,   116,   136,   117,   211,   141,   118,   144,   145,
     146,   147,   148,   149,   119,    21,   130,   131,    25,   136,
       9,    10,    11,    12,    22,    46,    71,   237,    48,   108,
      50,    72,   124,   103,   104,    46,    47,   127,    48,    16,
      50,    51,    27,    17,    52,    70,    28,   222,   211,   125,
     -40,   103,   104,   129,    52,   224,   295,   187,   297,    38,
     211,    66,   272,   230,   198,   132,   133,   130,   131,   130,
     131,    65,   211,    32,    67,    33,    34,    96,    97,    65,
     273,   246,   153,   154,    35,    46,    71,    65,    48,    69,
      50,    72,   256,    83,   198,   201,   202,   203,   204,   205,
     206,    84,   136,   136,    52,    65,    85,    86,   271,   173,
     174,   273,   -63,   273,    89,    88,    65,   171,   172,   198,
     102,    90,    91,    92,    93,    94,    95,   101,    46,    71,
     112,    48,    65,    50,    72,   113,   114,   293,   105,   106,
     107,   136,   115,   143,   155,   156,   157,    52,     9,    10,
      11,    12,    39,    96,    97,   121,    40,     9,    10,    11,
      12,    65,    41,   135,    42,    43,   159,    44,   139,   -53,
      45,   162,    46,    47,   165,    48,    49,    50,    51,     9,
      10,    11,    12,   166,   167,   175,   186,   176,   191,   -45,
     217,    52,   207,   177,    46,    47,   192,    48,   199,    50,
      51,   178,   179,   180,   181,   182,   103,   104,   194,   195,
     215,   219,   220,    52,   221,   223,  -144,   228,   229,   233,
     238,   232,   239,   236,   244,   240,   241,   255,   243,   257,
     259,   261,   260,   282,   280,   283,   263,   284,   279,    29,
     281,   231,   285,   286,   287,   288,   291,   270,   290,     0,
     122,   289,     0,   296,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109
};

static const yytype_int16 yycheck[] =
{
      28,    53,    83,    79,     5,   101,   195,   176,    60,    61,
      43,    22,    43,    89,    26,     4,    28,    29,    23,    24,
      21,    26,   191,    28,    29,    53,    59,    60,    59,    60,
      42,   220,    60,    61,    45,    43,   229,    42,     8,     9,
      10,    11,     5,    51,    52,    50,    23,    24,   241,    26,
     102,    28,    29,    23,    24,    39,    26,    39,    28,    29,
     253,   113,   114,    23,   140,    42,    24,    51,    52,    29,
      52,    29,    42,     0,   102,   127,    43,   129,   247,    26,
      50,    28,    29,    48,    31,   113,   114,    43,   184,   185,
      45,    73,    59,    60,    49,    51,    52,     6,    45,   127,
      43,   129,    26,    85,    28,   186,    88,    31,    90,    91,
      92,    93,    94,    95,    38,    45,    59,    60,    20,   101,
       8,     9,    10,    11,    24,    23,    24,   223,    26,    29,
      28,    29,    30,    59,    60,    23,    24,    45,    26,    45,
      28,    29,    45,    49,    42,    29,    49,   199,   229,    47,
      32,    59,    60,    45,    42,   207,   292,   139,   294,    48,
     241,    32,    50,   215,   165,    61,    62,    59,    60,    59,
      60,   199,   253,     8,    32,    10,    11,    64,    65,   207,
     261,   233,   103,   104,    19,    23,    24,   215,    26,    45,
      28,    29,   244,    42,   195,   177,   178,   179,   180,   181,
     182,    42,   184,   185,    42,   233,    42,    29,   260,   132,
     133,   292,    32,   294,    25,    42,   244,   130,   131,   220,
      45,    32,    33,    34,    35,    36,    37,    42,    23,    24,
      14,    26,   260,    28,    29,    45,    45,   289,    61,    62,
      63,   223,    49,    38,   105,   106,   107,    42,     8,     9,
      10,    11,     3,    64,    65,    29,     7,     8,     9,    10,
      11,   289,    13,    29,    15,    16,    45,    18,    32,    32,
      21,    26,    23,    24,    42,    26,    27,    28,    29,     8,
       9,    10,    11,    29,    43,    43,    42,    32,    32,    39,
      39,    42,    49,    46,    23,    24,    48,    26,    45,    28,
      29,    54,    55,    56,    57,    58,    59,    60,    48,    42,
      49,    43,    39,    42,    29,    39,    39,    43,    39,    49,
      48,    43,    29,    66,    49,    39,    39,    45,    48,    14,
      29,    42,    49,    29,    43,    39,    48,    43,    48,    21,
      48,   217,    45,    45,    45,    45,    39,   259,    45,    -1,
      69,    49,    -1,    48,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    68,    88,    45,    49,     0,     5,    72,     8,
       9,    10,    11,    89,    90,   106,    45,    49,     6,    69,
      48,    45,    24,    29,    92,    20,    73,    45,    49,    89,
      93,    91,     8,    10,    11,    19,    74,    96,    48,     3,
       7,    13,    15,    16,    18,    21,    23,    24,    26,    27,
      28,    29,    42,    70,    71,    97,   100,   101,   102,   106,
     108,   109,   113,   114,   115,   117,    32,    32,    76,    45,
      29,    24,    29,    42,   100,   117,    26,    28,    29,    42,
     103,   104,   105,    42,    42,    42,    29,    99,    42,    25,
      32,    33,    34,    35,    36,    37,    64,    65,   112,   100,
     113,    42,    45,    59,    60,    61,    62,    63,    29,    92,
     113,   113,    14,    45,    45,    49,    26,    28,    31,    38,
     107,    29,    73,    75,    30,    47,   116,    45,   103,    45,
      59,    60,    61,    62,    97,    29,   100,   111,   118,    32,
      50,   100,   103,    38,   100,   100,   100,   100,   100,   100,
      43,   111,   113,   101,   101,   102,   102,   102,    98,    45,
     113,   113,    26,    94,    77,    42,    29,    43,   113,    43,
     113,   104,   104,   105,   105,    43,    32,    46,    54,    55,
      56,    57,    58,    43,    51,    52,    42,   100,   103,    43,
      43,    32,    48,    95,    48,    42,    85,    86,   106,    45,
     107,   100,   100,   100,   100,   100,   100,    49,   111,   111,
      50,    97,   119,   122,    43,    49,   107,    39,    85,    43,
      39,    29,   113,    39,   113,    23,    29,   121,    43,    39,
     113,    94,    43,    49,    79,    85,    66,   111,    48,    29,
      39,    39,   119,    48,    49,    78,   113,    87,    39,    22,
      45,   110,   123,   120,   119,    45,   113,    14,   107,    29,
      49,    42,   119,    48,    26,    28,    29,    31,    45,    80,
     112,   113,    50,    97,   124,    81,    83,    82,    84,    48,
      43,    48,    29,    39,    43,    45,    45,    45,    45,    49,
      45,    39,   126,   113,   125,   124,    48,   124,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    75,    74,    76,    77,    74,    78,    79,    81,
      80,    82,    80,    83,    80,    84,    80,    80,    85,    85,
      85,    86,    87,    86,    88,    88,    89,    89,    90,    90,
      91,    90,    93,    92,    94,    95,    94,    94,    96,    96,
      96,    97,    97,    98,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    99,    97,    97,    97,   100,   100,   100,
     101,   101,   101,   101,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   105,   105,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   109,
     109,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   116,   116,   118,   117,   119,   120,
     119,   119,   119,   119,   121,   119,   123,   122,   124,   125,
     124,   124,   126,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     6,     2,     8,     1,     1,     4,     2,
       3,     4,     0,     7,     0,     0,     8,     3,     5,     0,
       3,     0,     3,     0,     3,     0,     3,     1,     1,     3,
       0,     2,     0,     5,     4,     2,     2,     3,     2,     2,
       0,     5,     0,     6,     1,     0,     4,     0,     1,     1,
       1,     2,     2,     0,     5,     3,     3,     3,     3,     3,
       3,     3,     2,     0,     4,     1,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,    15,     8,
       8,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     3,     2,     3,     1,     1,     2,     2,
       2,     3,     1,     2,     1,     3,     4,     3,     4,     5,
       6,     4,     4,     5,     1,     2,     0,     6,     2,     0,
       5,     1,     3,     1,     0,     4,     0,     7,     2,     0,
       5,     1,     0,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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
  case 12:
#line 118 "parser.y"
                       {nr_functie=count;id_parametru=0;adauga_simbol('f',(yyvsp[0].nd_obj).name);}
#line 1708 "y.tab.c"
    break;

  case 14:
#line 119 "parser.y"
       {insert_type();}
#line 1714 "y.tab.c"
    break;

  case 15:
#line 119 "parser.y"
                           {nr_functie=count;id_parametru=0;adauga_simbol('f',(yyvsp[0].nd_obj).name);}
#line 1720 "y.tab.c"
    break;

  case 19:
#line 124 "parser.y"
                {if(strcmp("int",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}
#line 1729 "y.tab.c"
    break;

  case 21:
#line 128 "parser.y"
      {rez=cauta_simbol((yyvsp[0].nd_obj).name); if(rez!=-1){if(strcmp(symbol_table[rez].data_type,symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}
                                else {printf("variabila %s nu a fost declarata",symbol_table[rez].id_name);exit(1);}}
#line 1739 "y.tab.c"
    break;

  case 23:
#line 133 "parser.y"
              {if(strcmp("float",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}
#line 1748 "y.tab.c"
    break;

  case 25:
#line 137 "parser.y"
           {if(strcmp("char",symbol_table[nr_functie].data_type)!=0)
                                {
                                     printf("tipul returnat de functia %s este incorect\n",symbol_table[nr_functie].id_name);exit(1);
                                }}
#line 1757 "y.tab.c"
    break;

  case 27:
#line 141 "parser.y"
      {if(strcmp(symbol_table[nr_functie].data_type,"void")!=0) {printf("Functia nu e de tip 'void' "); exit(1);}}
#line 1763 "y.tab.c"
    break;

  case 31:
#line 148 "parser.y"
                           {adauga_simbol('p',(yyvsp[0].nd_obj).name);}
#line 1769 "y.tab.c"
    break;

  case 32:
#line 149 "parser.y"
                   {adauga_simbol('p',(yyvsp[-1].nd_obj).name);}
#line 1775 "y.tab.c"
    break;

  case 38:
#line 160 "parser.y"
                              {adauga_simbol('g',(yyvsp[0].nd_obj).name);}
#line 1781 "y.tab.c"
    break;

  case 40:
#line 162 "parser.y"
              {adauga_simbol('g',(yyvsp[0].nd_obj).name);}
#line 1787 "y.tab.c"
    break;

  case 42:
#line 165 "parser.y"
               {nr_elemente=(yyvsp[0].nd_obj).intval;adauga_simbol('a',(yyvsp[0].nd_obj).strval);elemente_vect=0;}
#line 1793 "y.tab.c"
    break;

  case 43:
#line 165 "parser.y"
                                                                                                          {if(elemente_vect>nr_elemente){printf("Dimensiunea vectorul '%s' a fost depasita\n",(yyvsp[-5].nd_obj).strval);exit(1);}}
#line 1799 "y.tab.c"
    break;

  case 44:
#line 168 "parser.y"
                {if(strcmp(symbol_table[count-1].data_type,"int")!=0){printf("Al %d-lea element al vectorului '%s' are tip diferit de date \n",elemente_vect+1,symbol_table[count-1].id_name);exit(1);}
                            ++elemente_vect;symbol_table[count-1].elem_vect[elemente_vect]=((yyvsp[0].nd_obj).intval);}
#line 1806 "y.tab.c"
    break;

  case 45:
#line 170 "parser.y"
        {if(strcmp(symbol_table[count-1].data_type,"int")!=0){printf("Al %d -lea element al vectorului '%s' are tip diferit de date \n",elemente_vect+1,symbol_table[count-1].id_name);exit(1);}
    ++elemente_vect;symbol_table[count-1].elem_vect[elemente_vect]=((yyvsp[0].nd_obj).intval);}
#line 1813 "y.tab.c"
    break;

  case 48:
#line 175 "parser.y"
                 {insert_type();}
#line 1819 "y.tab.c"
    break;

  case 49:
#line 176 "parser.y"
        {insert_type();}
#line 1825 "y.tab.c"
    break;

  case 50:
#line 177 "parser.y"
       {insert_type();}
#line 1831 "y.tab.c"
    break;

  case 51:
#line 181 "parser.y"
                         {adauga_simbol('v',(yyvsp[0].nd_obj).name);}
#line 1837 "y.tab.c"
    break;

  case 53:
#line 183 "parser.y"
              {adauga_simbol('v',(yyvsp[0].nd_obj).name);}
#line 1843 "y.tab.c"
    break;

  case 55:
#line 184 "parser.y"
                     {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[cauta_simbol((yyvsp[-2].nd_obj).name)].intval=(yyvsp[0].nd_obj).intval;printf("\n\n");
	                                            printf("\t\t\t\t\t\t AST \n\n");
	                                            printtree(head); 
                                                printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                                head=NULL;}
#line 1853 "y.tab.c"
    break;

  case 56:
#line 190 "parser.y"
                        {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].floatval=(yyvsp[0].nd_obj).realval;}
#line 1859 "y.tab.c"
    break;

  case 57:
#line 191 "parser.y"
                             {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].intval += (yyvsp[0].nd_obj).intval;printf("\n\n");
	                                            printf("\t\t\t\t\t\t AST \n\n");
	                                            printtree(head); 
	                                           printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                               head=NULL;}
#line 1869 "y.tab.c"
    break;

  case 58:
#line 196 "parser.y"
                             {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].intval -= (yyvsp[0].nd_obj).intval;
                                             printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                            head=NULL;}
#line 1880 "y.tab.c"
    break;

  case 59:
#line 203 "parser.y"
                               {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].intval *= (yyvsp[0].nd_obj).intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                            head=NULL;}
#line 1891 "y.tab.c"
    break;

  case 60:
#line 210 "parser.y"
                         {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].intval /= (yyvsp[0].nd_obj).intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                            head=NULL;}
#line 1902 "y.tab.c"
    break;

  case 61:
#line 217 "parser.y"
                         {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)symbol_table[rez3].intval %= (yyvsp[0].nd_obj).intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                            head=NULL;}
#line 1913 "y.tab.c"
    break;

  case 62:
#line 224 "parser.y"
                   {if(rez=cauta_simbol((yyvsp[-1].nd_obj).name)!=-1)symbol_table[rez].intval++;}
#line 1919 "y.tab.c"
    break;

  case 63:
#line 225 "parser.y"
         {rez=var_declarata((yyvsp[0].nd_obj).strval);if((yyvsp[0].nd_obj).intval>symbol_table[rez].nr_elemente){printf("Elementul '%s' nu exista",(yyvsp[0].nd_obj).name);exit(1);}}
#line 1925 "y.tab.c"
    break;

  case 64:
#line 225 "parser.y"
                                                                                                                                                        { 
                                            symbol_table[rez].elem_vect[(yyvsp[-3].nd_obj).intval] = (yyvsp[0].nd_obj).intval;
                                            printf("\n\n");
	                                        printf("\t\t\t\t\t\t AST \n\n");
	                                        printtree(head); 
                                            printf("Valoarea expresiei: %d\n", (yyvsp[0].nd_obj).intval);
                                            head=NULL;}
#line 1937 "y.tab.c"
    break;

  case 66:
#line 233 "parser.y"
                    {rez3=cauta_simbol((yyvsp[-2].nd_obj).name);if(rez3!=-1)strcpy(symbol_table[rez3].boolval , (yyvsp[0].nd_obj).boolval);}
#line 1943 "y.tab.c"
    break;

  case 67:
#line 237 "parser.y"
                                             {(yyval.nd_obj).intval = (yyvsp[-2].nd_obj).intval + (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST((yyvsp[-2].nd_obj).nd,(yyvsp[0].nd_obj).nd,(yyvsp[-1].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 1949 "y.tab.c"
    break;

  case 68:
#line 238 "parser.y"
                                  {(yyval.nd_obj).intval = (yyvsp[-2].nd_obj).intval - (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST((yyvsp[-2].nd_obj).nd,(yyvsp[0].nd_obj).nd,(yyvsp[-1].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 1955 "y.tab.c"
    break;

  case 69:
#line 239 "parser.y"
              {(yyval.nd_obj).intval = (yyvsp[0].nd_obj).intval;}
#line 1961 "y.tab.c"
    break;

  case 70:
#line 242 "parser.y"
                                               {(yyval.nd_obj).intval = (yyvsp[-2].nd_obj).intval * (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST((yyvsp[-2].nd_obj).nd,(yyvsp[0].nd_obj).nd,(yyvsp[-1].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 1967 "y.tab.c"
    break;

  case 71:
#line 243 "parser.y"
                              {(yyval.nd_obj).intval = (yyvsp[-2].nd_obj).intval / (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST((yyvsp[-2].nd_obj).nd,(yyvsp[0].nd_obj).nd,(yyvsp[-1].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 1973 "y.tab.c"
    break;

  case 72:
#line 244 "parser.y"
                                 {(yyval.nd_obj) .intval= (yyvsp[-2].nd_obj).intval % (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST((yyvsp[-2].nd_obj).nd,(yyvsp[0].nd_obj).nd,(yyvsp[-1].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 1979 "y.tab.c"
    break;

  case 73:
#line 245 "parser.y"
              {(yyval.nd_obj).intval = (yyvsp[0].nd_obj).intval;}
#line 1985 "y.tab.c"
    break;

  case 74:
#line 248 "parser.y"
                                 {(yyval.nd_obj).intval = (yyvsp[-1].nd_obj).intval;}
#line 1991 "y.tab.c"
    break;

  case 75:
#line 249 "parser.y"
     {rez=cauta_simbol((yyvsp[0].nd_obj).name);if(rez!=-1) if(strcmp(symbol_table[rez].data_type,"int") == 0) 
       { (yyval.nd_obj).intval = symbol_table[rez].intval; (yyval.nd_obj).nd=buildAST(NULL,NULL,(yyvsp[0].nd_obj).name,symbol_table[rez].intval); head=(yyval.nd_obj).nd;}
       else {printf("The type of variable %s is not int, ", (yyvsp[0].nd_obj).name); yyerror ("semantic error");}}
#line 1999 "y.tab.c"
    break;

  case 76:
#line 252 "parser.y"
        {(yyval.nd_obj) .intval= (yyvsp[0].nd_obj).intval;(yyval.nd_obj).nd=buildAST(NULL,NULL,(yyvsp[0].nd_obj).name,(yyvsp[0].nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 2005 "y.tab.c"
    break;

  case 77:
#line 253 "parser.y"
         {rez=var_declarata((yyvsp[0].nd_obj).strval);if((yyvsp[0].nd_obj).intval>symbol_table[rez].nr_elemente){printf("Elementul '%s' nu exista",(yyvsp[0].nd_obj).name);exit(1);}(yyval.nd_obj).intval = symbol_table[rez].elem_vect[(yyvsp[0].nd_obj).intval];(yyval.nd_obj).nd=buildAST(NULL,NULL,(yyvsp[0].nd_obj).name,(yyval.nd_obj).intval); head=(yyval.nd_obj).nd;}
#line 2011 "y.tab.c"
    break;

  case 78:
#line 254 "parser.y"
             {printf("The type of constant %s is float, ", (yyvsp[0].nd_obj).name); yyerror ("semantic error");}
#line 2017 "y.tab.c"
    break;

  case 79:
#line 255 "parser.y"
                { if(strcmp(symbol_table[ord].data_type,"int") == 0) 
       { (yyval.nd_obj).intval = symbol_table[rez].intval; (yyval.nd_obj).nd=buildAST(NULL,NULL,(yyvsp[0].nd_obj).name,0); head=(yyval.nd_obj).nd;}
       else {printf("The type of function %s is not int, ", (yyvsp[0].nd_obj).name); yyerror ("semantic error");}}
#line 2025 "y.tab.c"
    break;

  case 80:
#line 260 "parser.y"
                                                   {(yyval.nd_obj).realval = (yyvsp[-2].nd_obj).realval + (yyvsp[0].nd_obj).realval;}
#line 2031 "y.tab.c"
    break;

  case 81:
#line 261 "parser.y"
                                      {(yyval.nd_obj).realval = (yyvsp[-2].nd_obj).realval - (yyvsp[0].nd_obj).realval;}
#line 2037 "y.tab.c"
    break;

  case 82:
#line 262 "parser.y"
                {(yyval.nd_obj).realval = (yyvsp[0].nd_obj).realval;}
#line 2043 "y.tab.c"
    break;

  case 83:
#line 265 "parser.y"
                                                     {(yyval.nd_obj) .realval= (yyvsp[-2].nd_obj).realval * (yyvsp[0].nd_obj).realval;}
#line 2049 "y.tab.c"
    break;

  case 84:
#line 266 "parser.y"
                                  {(yyval.nd_obj).realval = (yyvsp[-2].nd_obj).realval / (yyvsp[0].nd_obj).realval;}
#line 2055 "y.tab.c"
    break;

  case 85:
#line 267 "parser.y"
                {(yyval.nd_obj).realval = (yyvsp[0].nd_obj).realval;}
#line 2061 "y.tab.c"
    break;

  case 86:
#line 271 "parser.y"
                                     {(yyval.nd_obj) .realval= (yyvsp[-1].nd_obj).realval;}
#line 2067 "y.tab.c"
    break;

  case 87:
#line 272 "parser.y"
     {rez=cauta_simbol((yyvsp[0].nd_obj).name) ;if(rez!=-1) if(strcmp(symbol_table[rez].data_type,"float") == 0) 
        (yyval.nd_obj).realval = symbol_table[rez].floatval; 
       else {printf("The type of variable %s is not float, ", (yyvsp[0].nd_obj).name); yyerror ("semantic error");}}
#line 2075 "y.tab.c"
    break;

  case 88:
#line 275 "parser.y"
             {(yyval.nd_obj) .realval= (yyvsp[0].nd_obj).realval;}
#line 2081 "y.tab.c"
    break;

  case 89:
#line 276 "parser.y"
        {printf("The type of constant %s is int, ", (yyvsp[0].nd_obj).name); yyerror ("semantic error");}
#line 2087 "y.tab.c"
    break;

  case 90:
#line 280 "parser.y"
              {insert_type();}
#line 2093 "y.tab.c"
    break;

  case 91:
#line 281 "parser.y"
        {insert_type();}
#line 2099 "y.tab.c"
    break;

  case 92:
#line 282 "parser.y"
       {insert_type();}
#line 2105 "y.tab.c"
    break;

  case 93:
#line 283 "parser.y"
       {insert_type();}
#line 2111 "y.tab.c"
    break;

  case 94:
#line 286 "parser.y"
             {symbol_table[count-1].intval=(yyvsp[0].nd_obj).intval;}
#line 2117 "y.tab.c"
    break;

  case 95:
#line 287 "parser.y"
             {symbol_table[count-1].floatval=(yyvsp[0].nd_obj).realval;}
#line 2123 "y.tab.c"
    break;

  case 96:
#line 288 "parser.y"
           {symbol_table[count-1].charval=(yyvsp[0].nd_obj).charval;}
#line 2129 "y.tab.c"
    break;

  case 97:
#line 289 "parser.y"
             {strcpy(symbol_table[count-1].boolval,(yyvsp[0].nd_obj).boolval);}
#line 2135 "y.tab.c"
    break;

  case 125:
#line 328 "parser.y"
                               {printf("Valoarea expresiei: %d\n", (yyvsp[-1].nd_obj).intval);}
#line 2141 "y.tab.c"
    break;

  case 126:
#line 329 "parser.y"
                                 {printf("Valoarea expresiei: %d\n", (yyvsp[-2].nd_obj).intval);}
#line 2147 "y.tab.c"
    break;

  case 127:
#line 330 "parser.y"
                           {printf("Valoarea expresiei: %f\n", (yyvsp[-1].nd_obj).realval);}
#line 2153 "y.tab.c"
    break;

  case 128:
#line 331 "parser.y"
                                    {printf("Valoarea expresiei: %f\n", (yyvsp[-2].nd_obj).realval);}
#line 2159 "y.tab.c"
    break;

  case 131:
#line 339 "parser.y"
                                {printf("\n\n");
	printf("\t\t\t\t\t\t AST \n\n");
	printtree(head); 
	printf("\n");}
#line 2168 "y.tab.c"
    break;

  case 132:
#line 343 "parser.y"
                             {printf("Valoarea expresiei: %s\n", "int");}
#line 2174 "y.tab.c"
    break;

  case 133:
#line 344 "parser.y"
                                    {printf("Valoarea expresiei: %s\n", "float");}
#line 2180 "y.tab.c"
    break;

  case 134:
#line 347 "parser.y"
              {printf("%s\n",(yyvsp[0].nd_obj).strval);}
#line 2186 "y.tab.c"
    break;

  case 135:
#line 348 "parser.y"
         {rez=cauta_simbol((yyvsp[0].nd_obj).name);if(rez!=-1)print_fun(rez); else {printf("variabila %s nu exista\n",(yyvsp[0].nd_obj).name);exit(1);}}
#line 2192 "y.tab.c"
    break;

  case 136:
#line 352 "parser.y"
                        {ord=cauta_simbol((yyvsp[0].nd_obj).name);if(ord!=-1) cnt=0; else {printf("functia %s nu exista\n",(yyvsp[0].nd_obj).name); exit(1);}}
#line 2198 "y.tab.c"
    break;

  case 137:
#line 352 "parser.y"
                                                                                                                                                     {if(cnt<symbol_table[ord].nr_parametri){printf("parametri insuficienti\n");exit(1);}
                                                                                    else
                                                                        if(cnt>symbol_table[ord].nr_parametri){printf("PREA MULTI PARAMETRI %s\n",symbol_table[ord].id_name);exit(1);}}
#line 2206 "y.tab.c"
    break;

  case 138:
#line 356 "parser.y"
                     {rez=cauta_simbol((yyvsp[0].nd_obj).name);if(rez!=-1){ verifica_par(rez,ord,'p');}else {printf("varibila %s nu exista\n",(yyvsp[0].nd_obj).name);exit(1);}}
#line 2212 "y.tab.c"
    break;

  case 139:
#line 357 "parser.y"
             {rez=cauta_simbol((yyvsp[-1].nd_obj).name);if(rez!=-1){ verifica_par(rez,ord,'p');}else {printf("varibila %s nu exista\n",(yyvsp[-1].nd_obj).name);exit(1);}}
#line 2218 "y.tab.c"
    break;

  case 143:
#line 360 "parser.y"
            {++cnt;}
#line 2224 "y.tab.c"
    break;

  case 144:
#line 361 "parser.y"
            {++cnt;}
#line 2230 "y.tab.c"
    break;

  case 146:
#line 366 "parser.y"
                             {rez=cauta_simbol((yyvsp[0].nd_obj).name);verifica_par(rez,ord,'p');ord2=cauta_simbol((yyvsp[0].nd_obj).name);cnt2=0;}
#line 2236 "y.tab.c"
    break;

  case 147:
#line 366 "parser.y"
                                                                                                                                           {if(cnt2<symbol_table[ord2].nr_parametri){printf("parametri insuficienti\n");exit(1);}
                                                                                    else
                                                                        if(cnt2>symbol_table[ord2].nr_parametri){printf("PREA MULTI PARAMETRI %s\n",symbol_table[ord2].id_name );exit(1);}}
#line 2244 "y.tab.c"
    break;

  case 148:
#line 369 "parser.y"
                     {rez=cauta_simbol((yyvsp[0].nd_obj).name);verifica_par(rez,ord,'s');}
#line 2250 "y.tab.c"
    break;

  case 149:
#line 370 "parser.y"
             {rez=cauta_simbol((yyvsp[-1].nd_obj).name);verifica_par(rez,ord,'s');}
#line 2256 "y.tab.c"
    break;

  case 151:
#line 371 "parser.y"
            {++cnt2;}
#line 2262 "y.tab.c"
    break;

  case 152:
#line 372 "parser.y"
                {++cnt2;}
#line 2268 "y.tab.c"
    break;


#line 2272 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 374 "parser.y"

int main(int argc, char** argv)
{

    // to do::: de recunoscut a[2];
    FILE *f1,*f2;
    yyin = fopen("input_gresit.txt","r");
    yyparse();
    f1=fopen("symbol_table.txt","w");
    f2=fopen("symbol_table_functions.txt","w");
    fprintf(f1,"\n\n");
    fprintf(f2,"\n\n");
	fprintf(f1,"\t\t\t\t\t\t\t\t SYMBOL TABLE \n\n");
    fprintf(f2,"\t\t\t\t\t\t\t\t SYMBOL TABLE \n\n");
	fprintf(f1,"\nID   DATATYPE   TYPE   VALUE \n");
	fprintf(f1,"_______________________________________\n\n");

    fprintf(f2,"\nID   DATATYPE   TYPE   \n");
	fprintf(f2,"_______________________________________\n\n");
    for(int i=0;i<count;i++)
    {
        char s[20];
        if(strcmp(symbol_table[i].data_type,"int")==0)
        sprintf(s,"%d",symbol_table[i].intval);
        if(strcmp(symbol_table[i].data_type,"char")==0)
        sprintf(s,"%c",symbol_table[i].charval);
        if(strcmp(symbol_table[i].data_type,"float")==0)
        sprintf(s,"%f",symbol_table[i].floatval);
        if(strcmp(symbol_table[i].data_type,"bool")==0)
        sprintf(s,"%s",symbol_table[i].boolval);
        if(strcmp(symbol_table[i].type,"FUNCTIE")!=0 && strstr(symbol_table[i].type,"PARAMETRUL FUNCTIEI")==NULL)
        fprintf(f1,"%s\t%s\t%s\t%s\n",symbol_table[i].id_name,symbol_table[i].data_type,symbol_table[i].type,s);
            else
        fprintf(f2,"%s\t%s\t%s\t\n",symbol_table[i].id_name,symbol_table[i].data_type,symbol_table[i].type);
    }
    for(int i=0;i<count;i++) {
		bzero(symbol_table[i].id_name,500);
		bzero(symbol_table[i].type,sizeof(symbol_table[i].type));
        bzero(symbol_table[i].data_type,sizeof(symbol_table[i].data_type));
        bzero(symbol_table[i].parametri,sizeof(symbol_table[i].parametri));
        bzero(symbol_table[i].elem_vect,sizeof(symbol_table[i].elem_vect));

	}
    printf("programul a fost compilat cu succes\n");
    return 0;
}
void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,nr_linii);
exit(3);
}
void insert_type()
{
    strcpy(type,yytext);
}

void adauga_simbol(char c,char simbol[])
{
    s=cauta_simbol(simbol);
    if(s==-1 || (s!=-1 && strstr(symbol_table[s].type,"PARAMETRUL")!=NULL))
    {
        if(c=='v')
        {
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VARIABILA LOCALA");
            symbol_table[count].id_numar=count;
            ++count;
        }
        if(c=='f')
        {
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("FUNCTIE");
            symbol_table[count].nr_parametri=0;
            symbol_table[count].id_numar=count;
            ++count;
        }
        if(c=='g')
        {

            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VARIABILA GLOBALA");
            symbol_table[count].id_numar=count;
            ++count;
        }
         if(c=='p')
        {
            char s[550];
            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            sprintf(s,"PARAMETRUL FUNCTIEI %s",symbol_table[nr_functie].id_name);
            symbol_table[nr_functie].parametri[id_parametru]=strdup(type);
            symbol_table[count].type=strdup(s);
            ++symbol_table[nr_functie].nr_parametri;
            symbol_table[count].id_numar=count;
            ++count;
            ++id_parametru;
        }
        if(c=='a')
        {

            strcpy(symbol_table[count].id_name,simbol);
            symbol_table[count].data_type=strdup(type);
            symbol_table[count].type=strdup("VECTOR");
            symbol_table[count].id_numar=count;
            symbol_table[count].nr_elemente=nr_elemente;
            ++count;
        }
    }
    else
    {
        if(c=='f')
        printf("REDEFINIRE FUNCTIE\n");
        else
        printf("REDEFINIRE VARIABILA\n");
        exit(1);
    }
}
void verifica_par(int id_par,int ord,char tip)
{
    //printf("%s  %s\n",symbol_table[id_par].data_type,symbol_table[id_par].id_name);
    //printf("%s\n",symbol_table[ord].parametri[cnt]);
    if(cnt< symbol_table[ord].nr_parametri && strcmp(symbol_table[id_par].data_type,symbol_table[ord].parametri[cnt])!=0 && tip=='p')
    {
        printf("Tipul parametrului %s este incorent\n",symbol_table[id_par].id_name);
        exit(1);
    }
    if(cnt2< symbol_table[ord].nr_parametri && strcmp(symbol_table[id_par].data_type,symbol_table[ord].parametri[cnt2])!=0 && tip=='s')
    {
        printf("Tipul parametrului %s este incorent\n",symbol_table[id_par].id_name);
        exit(1);
    }
    if(tip=='p')
    ++cnt;
    else
    ++cnt2;
}
void functie_def(char functie[])
{
    int ok=0;
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,functie)==0)
        {
            ok=1;
            break;
        }
    }
    if(ok==0)
    {
        printf("functia %s nu a fost definita\n",functie);
        exit(1);
    }
}
int var_declarata(char var[])
{
    int ok=0;
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,var)==0)
        {
            ok=1;
            return symbol_table[i].id_numar;
            break;
        }
    }
    if(ok==0)
    {
        printf("linia %d : varibila %s nu a fost declarata\n",nr_linii,var);
        return -1;
        exit(1);
    }
}

int cauta_simbol(char nume[])
{
    for(int i=0;i<count;i++)
    {
        if(strcmp(symbol_table[i].id_name,nume)==0)
        {
            return symbol_table[i].id_numar; // s-a gasit simbolul in tabel
            break;
        }
    }
    return -1;
}
void print_fun(int id)
{
    if(strcmp(symbol_table[id].data_type,"int")==0)
    printf("%d\n",symbol_table[id].intval);

    if(strcmp(symbol_table[id].data_type,"char")==0)
    printf("%c\n",symbol_table[id].charval);

    if(strcmp(symbol_table[id].data_type,"float")==0)
    printf("%f\n",symbol_table[id].floatval);
    
}

struct node* buildAST(struct node *left, struct node *right, char root[],int value) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(root)+1);
	strcpy(newstr, root);
	newnode->left = left;
	newnode->right = right;
	strcpy(newnode->token , newstr);
    newnode->intval=value;
	return(newnode);
}
void printtree(struct node* tree) {
	printf("\n\n Parcurgerea in inordine AST: \n\n");
	printInorder(tree);
	printf("\n\n");
    free(tree);
}
void printInorder(struct node* tree) {
	if (tree)
    {
		printInorder(tree->left);
        printf("%s: ",tree->token);
        printf("%d\n", evalAST(tree));


        //if(tree->left!=NULL && tree->right!=NULL)
        //printf("stanga : %s , dreapta: %s \n",tree->left->token,tree->right->token);


		printInorder(tree->right);
	}
}
int evalAST(struct node* nod)
{
    if(nod->left==NULL && nod->right==NULL)
    {
        return nod->intval;
    }
    else
    return -1;
}
