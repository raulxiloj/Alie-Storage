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
#line 1 "Sintactico.y" /* yacc.c:339  */

    #include "scanner.h"
    #include "nodo.h"
    #include <iostream>

    extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
    extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
    extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
    extern Nodo *raiz; // Raiz del arbol

    int yyerror(const char* mens){
        std::cout<<mens<<std::endl;
        return 0;
    }


#line 83 "parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    mkdisk = 258,
    rmdisk = 259,
    fdisk = 260,
    mount = 261,
    unmount = 262,
    rep = 263,
    exec = 264,
    size = 265,
    unit = 266,
    path = 267,
    fit = 268,
    name = 269,
    type = 270,
    del = 271,
    add = 272,
    id = 273,
    bf = 274,
    ff = 275,
    wf = 276,
    fast = 277,
    full = 278,
    mbr = 279,
    disk = 280,
    igual = 281,
    extension = 282,
    num = 283,
    caracter = 284,
    cadena = 285,
    identificador = 286,
    ruta = 287,
    mkfs = 288,
    login = 289,
    logout = 290,
    mkgrp = 291,
    rmgrp = 292,
    mkusr = 293,
    rmusr = 294,
    Rchmod = 295,
    mkfile = 296,
    cat = 297,
    rem = 298,
    edit = 299,
    ren = 300,
    Rmkdir = 301,
    cp = 302,
    mv = 303,
    find = 304,
    Rchown = 305,
    chgrp = 306,
    pausa = 307,
    recovery = 308,
    loss = 309,
    fs = 310,
    fs2 = 311,
    fs3 = 312,
    usr = 313,
    pwd = 314,
    grp = 315,
    ugo = 316,
    r = 317,
    p = 318,
    cont = 319,
    file = 320,
    dest = 321,
    rutaRep = 322,
    inode = 323,
    journaling = 324,
    block = 325,
    bm_inode = 326,
    bm_block = 327,
    tree = 328,
    sb = 329,
    fileRep = 330,
    ls = 331,
    password = 332,
    directorio = 333,
    syncronice = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "Sintactico.y" /* yacc.c:355  */

        char text[400];
        class Nodo *nodito;
    

#line 209 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  136
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  321

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   160,   160,   162,   166,   167,   171,   175,   176,   179,
     180,   184,   188,   189,   190,   191,   195,   196,   200,   204,
     205,   206,   210,   214,   218,   222,   226,   230,   234,   238,
     239,   240,   241,   245,   249,   254,   255,   259,   260,   263,
     268,   273,   278,   282,   287,   288,   289,   290,   291,   292,
     293,   295,   299,   304,   305,   306,   307,   309,   315,   316,
     317,   320,   324,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   346,
     351,   357,   361,   366,   367,   368,   369,   370,   372,   376,
     381,   382,   383,   384,   385,   386,   387,   389,   394,   400,
     405,   410,   414,   419,   420,   421,   422,   423,   424,   425,
     426,   428,   433,   439,   443,   448,   449,   450,   451,   453,
     457,   463,   464,   465,   466,   467,   468,   470,   475,   481,
     486,   491,   497,   501,   506,   507,   508,   510,   514,   519,
     520,   521,   526,   528,   532,   537,   538,   539,   540,   542,
     546,   551,   552,   553,   554,   555,   556,   558,   562,   567,
     571,   576,   577,   578,   583,   588,   590,   594,   599,   600,
     601,   602,   603,   604,   606,   610,   615,   616,   617,   618,
     620,   626,   632
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mkdisk", "rmdisk", "fdisk", "mount",
  "unmount", "rep", "exec", "size", "unit", "path", "fit", "name", "type",
  "del", "add", "id", "bf", "ff", "wf", "fast", "full", "mbr", "disk",
  "igual", "extension", "num", "caracter", "cadena", "identificador",
  "ruta", "mkfs", "login", "logout", "mkgrp", "rmgrp", "mkusr", "rmusr",
  "Rchmod", "mkfile", "cat", "rem", "edit", "ren", "Rmkdir", "cp", "mv",
  "find", "Rchown", "chgrp", "pausa", "recovery", "loss", "fs", "fs2",
  "fs3", "usr", "pwd", "grp", "ugo", "r", "p", "cont", "file", "dest",
  "rutaRep", "inode", "journaling", "block", "bm_inode", "bm_block",
  "tree", "sb", "fileRep", "ls", "password", "directorio", "syncronice",
  "$accept", "INIT", "COMANDO", "MKDISK", "PARAMETRO_MK", "RMDISK",
  "FDISK", "PARAMETRO_FK", "MOUNT", "PARAMETRO_M", "UNMOUNT", "AJUSTE",
  "REP", "PARAMETRO_R", "SCRIPT", "MKFS", "PARAM_MKFS", "LOGIN",
  "PARAM_LOGIN", "MKGRP", "RMGRP", "MKUSR", "PARAM_MKUSR", "RMUSR",
  "CHMOD", "PARAM_CHMOD", "MKFILE", "PARAM_MKFILE", "CAT", "REM", "EDIT",
  "PARAM_EDIT", "REN", "PARAM_REN", "MKDIR", "PARAM_MKDIR", "CP",
  "PARAM_CP", "MV", "FIND", "PARAM_FIND", "CHOWN", "PARAM_CHOWN", "CHGRP",
  "PARAM_CHGRP", "RECOVERY", "LOSS", "SYNCRO", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    15,    93,     5,   102,    76,    -4,   116,    77,    64,
     -24,   142,   148,    39,   127,    17,     1,   123,   174,    -3,
     103,    41,     0,     0,   106,    18,    61,   -24,   169,   171,
     172,   191,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   166,   167,   168,   170,    15,   -24,
     173,   175,   176,   177,   178,   -24,     5,   -24,   179,   180,
     102,   -24,   181,   182,   183,   184,   185,    -4,   -24,   186,
     187,   188,   189,    77,   -24,   190,   192,   193,    64,   -24,
     194,   195,   196,   197,   198,    39,   -24,   199,   200,   201,
     -24,    17,   -24,   202,   203,   -24,   204,     1,   -24,   205,
     206,   207,   208,    -3,   -24,   209,   210,   103,   -24,   211,
     212,   -24,    41,   -24,   213,   214,     0,   -24,   -24,     0,
     215,   216,   106,   -24,   217,   218,   -24,    18,   -24,   219,
     220,    61,   -24,   221,   222,   223,   -24,   224,   225,    94,
      88,   -24,    95,    70,   226,   136,   228,   -24,    99,   105,
     -24,   164,   109,    -1,   227,   110,   -24,   113,   138,   229,
     107,   -24,   230,   135,    26,   -24,   137,   139,   141,    53,
     143,   -24,   145,    32,   231,   -24,   234,   114,   117,   -24,
     118,    28,   121,   233,   -24,   122,   147,   -24,    60,   235,
     -24,    55,    56,   -24,   -24,   125,    82,   -24,    59,   149,
     -24,   151,   153,   -24,   236,   237,   238,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   243,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   244,   -24,   245,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     2,     4,     7,     9,    13,    14,    16,    19,
      20,    30,    31,    32,     0,     0,     0,     0,     3,    34,
       0,     0,     0,     0,     0,    44,     5,    43,     0,     0,
       6,    52,     0,     0,     0,     0,     0,     8,    62,     0,
       0,     0,     0,    10,    82,     0,     0,     0,    11,    89,
       0,     0,     0,     0,     0,    15,   102,     0,     0,     0,
     118,    17,   114,     0,     0,   126,     0,    18,   120,     0,
       0,     0,     0,    21,   133,     0,     0,    22,   138,     0,
       0,   148,    23,   144,     0,     0,    24,   150,   158,    25,
       0,     0,    26,   160,     0,     0,   173,    27,   167,     0,
       0,    28,   175,     0,     0,     0,     1,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,    42,     0,     0,
      51,     0,     0,     0,     0,     0,    61,     0,     0,     0,
       0,    81,     0,     0,     0,    88,     0,     0,     0,     0,
       0,   101,     0,     0,     0,   113,     0,     0,     0,   119,
       0,     0,     0,     0,   132,     0,     0,   137,     0,     0,
     143,     0,     0,   149,   157,     0,     0,   159,     0,     0,
     166,     0,     0,   174,     0,     0,     0,    35,    37,    38,
      39,    58,    59,    60,    36,    41,    40,    49,    48,    45,
      46,    47,    50,    53,    54,    56,    55,    57,    74,    75,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    76,    78,    77,    79,    80,    84,    85,    83,    86,
      87,    96,    91,    90,    92,    95,    93,    94,    98,    97,
     100,    99,   104,   103,   105,   108,   106,   107,   110,   109,
     112,   111,   115,   116,   117,   123,   122,   121,   125,   124,
     128,   127,   130,   129,   131,   135,   134,   136,   140,   139,
     142,     0,   146,   145,   147,   152,   151,   153,   155,   154,
     156,   162,   161,     0,   165,     0,   169,   168,   170,   172,
     171,   177,   176,   179,   178,   180,   181,   182,   141,   164,
     163
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -24,   -24,   -24,   -24,    54,   -24,   -24,   144,   -24,   157,
     -24,   -24,   -24,   130,   -24,   -24,   232,   -24,   120,   -24,
     -24,   -24,   165,   -24,   -24,   160,   -24,   156,   -24,   -24,
     -24,   154,   -24,   158,   -24,   152,   -24,   -23,   -24,   -24,
     155,   -24,   146,   -24,   150,   -24,   -24,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    48,    55,    33,    56,    57,    60,    61,
      34,   214,    67,    68,    35,    73,    74,    78,    79,    36,
      37,    85,    86,    38,    91,    92,    97,    98,    39,    40,
     103,   104,   107,   108,   112,   113,   116,   117,   119,   122,
     123,   127,   128,   131,   132,    41,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     118,     1,     2,     3,     4,     5,     6,     7,    63,   101,
      64,    93,   114,    94,    65,    44,    45,    46,    47,    51,
      52,    53,    54,   230,   231,    44,    45,    46,    47,    88,
     124,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   109,   254,    49,   255,   256,   282,   110,
     283,   102,   272,    66,    95,    96,   115,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   125,    30,    89,    90,
     126,   264,    75,   265,   266,   295,   298,   296,   299,   306,
     292,   307,    70,   193,    62,    71,   194,    82,    83,    84,
     217,   218,   141,   257,   111,    50,   284,   211,   212,   213,
     273,   303,   304,   305,    58,   105,    59,   106,   120,   129,
     121,   130,    76,    77,   209,   215,   210,   216,    69,   223,
     267,   224,    72,   297,   300,   225,   226,   308,   293,   228,
     242,   229,   243,   244,   276,   245,   277,   278,   280,   279,
     281,   285,   288,   286,   289,   301,    80,   302,   220,   221,
     246,   247,    81,   249,   250,   252,   253,   258,   259,   260,
     261,   262,   263,   268,   269,   270,   271,   290,   291,   309,
     310,   311,   312,   313,   314,    87,   100,   133,    99,   134,
     135,   136,   137,   138,   139,   227,   140,   156,   165,   142,
     147,   143,   144,   145,   146,   148,   149,   151,   152,   153,
     154,   155,   157,   158,   159,   160,   162,   150,   163,   164,
     166,   167,   168,   169,   170,   172,   173,   174,   176,   177,
     178,   180,   181,   182,   183,   185,   186,   188,   189,   191,
     192,   195,   196,   198,   199,   201,   202,   204,   205,   206,
     171,   175,   207,   179,   208,   219,   222,   184,   241,   274,
     248,   251,   275,   287,   190,   187,   294,   315,   316,   317,
     318,   319,   320,   200,     0,     0,     0,   197,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161
};

static const yytype_int16 yycheck[] =
{
      23,     3,     4,     5,     6,     7,     8,     9,    12,    12,
      14,    10,    12,    12,    18,    10,    11,    12,    13,    14,
      15,    16,    17,    24,    25,    10,    11,    12,    13,    12,
      12,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    12,    28,     1,    30,    31,    30,    18,
      32,    64,    30,    67,    63,    64,    66,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    58,    79,    61,    62,
      62,    28,    18,    30,    31,    30,    30,    32,    32,    30,
      30,    32,    15,   116,    18,    18,   119,    58,    59,    60,
      30,    31,    48,    77,    63,    12,    78,    19,    20,    21,
      78,    29,    30,    31,    12,    12,    14,    14,    12,    58,
      14,    60,    58,    59,    30,    30,    32,    32,    12,    30,
      77,    32,    55,    78,    78,    30,    31,    78,    78,    30,
      30,    32,    32,    30,    30,    32,    32,    30,    30,    32,
      32,    30,    30,    32,    32,    30,    14,    32,    22,    23,
      22,    23,    14,    56,    57,    30,    31,    30,    31,    30,
      31,    30,    31,    30,    31,    30,    31,    30,    31,    30,
      31,    30,    31,    30,    31,    58,    12,    18,    65,    18,
      18,     0,    26,    26,    26,    31,    26,    67,    78,    26,
      56,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    60,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      85,    91,    28,    97,    29,    29,    28,   103,    31,    28,
      31,    31,    28,    30,   112,   107,    31,    31,    31,    31,
      27,    27,    27,   127,    -1,    -1,    -1,   122,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      79,    81,    82,    85,    90,    94,    99,   100,   103,   108,
     109,   125,   126,   127,    10,    11,    12,    13,    83,    84,
      12,    14,    15,    16,    17,    84,    86,    87,    12,    14,
      88,    89,    18,    12,    14,    18,    67,    92,    93,    12,
      15,    18,    55,    95,    96,    18,    58,    59,    97,    98,
      14,    14,    58,    59,    60,   101,   102,    58,    12,    61,
      62,   104,   105,    10,    12,    63,    64,   106,   107,    65,
      12,    12,    64,   110,   111,    12,    14,   112,   113,    12,
      18,    63,   114,   115,    12,    66,   116,   117,   117,   118,
      12,    14,   119,   120,    12,    58,    62,   121,   122,    58,
      60,   123,   124,    18,    18,    18,     0,    26,    26,    26,
      26,    84,    26,    26,    26,    26,    26,    87,    26,    26,
      89,    26,    26,    26,    26,    26,    93,    26,    26,    26,
      26,    96,    26,    26,    26,    98,    26,    26,    26,    26,
      26,   102,    26,    26,    26,   105,    26,    26,    26,   107,
      26,    26,    26,    26,   111,    26,    26,   113,    26,    26,
     115,    26,    26,   117,   117,    26,    26,   120,    26,    26,
     122,    26,    26,   124,    26,    26,    26,    28,    29,    30,
      32,    19,    20,    21,    91,    30,    32,    30,    31,    29,
      22,    23,    28,    30,    32,    30,    31,    31,    30,    32,
      24,    25,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    31,    30,    32,    30,    32,    22,    23,    31,    56,
      57,    31,    30,    31,    28,    30,    31,    77,    30,    31,
      30,    31,    30,    31,    28,    30,    31,    77,    30,    31,
      30,    31,    30,    78,    28,    28,    30,    32,    30,    32,
      30,    32,    30,    32,    78,    30,    32,    30,    30,    32,
      30,    31,    30,    78,    31,    30,    32,    78,    30,    32,
      78,    30,    32,    29,    30,    31,    30,    32,    78,    30,
      31,    30,    31,    30,    31,    31,    31,    31,    27,    27,
      27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    89,    90,    91,    91,
      91,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   106,
     106,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   111,   112,   112,   113,
     113,   113,   113,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   124,   124,
     125,   126,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     2,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     3,     3,     3,     3,     3,
       4,     4,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     1,     3,     3,     3,     3,     4,     1,     1,
       1,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     2,     1,     3,     3,     3,     3,     3,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
       4,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     2,     1,     3,     3,     3,     1,     2,
       1,     3,     3,     3,     3,     3,     1,     4,     4,     4,
       4,     4,     2,     1,     3,     3,     3,     2,     1,     3,
       3,     4,     3,     2,     1,     3,     3,     3,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     2,     1,     2,
       1,     3,     3,     4,     4,     3,     2,     1,     3,     3,
       3,     3,     3,     1,     2,     1,     3,     3,     3,     3,
       4,     4,     4
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
#line 160 "Sintactico.y" /* yacc.c:1646  */
    { raiz = (yyval.nodito); }
#line 1540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 162 "Sintactico.y" /* yacc.c:1646  */
    {
                         (yyval.nodito) = new Nodo("MKDISK","");
                         (yyval.nodito)->add(*(yyvsp[0].nodito));
                       }
#line 1549 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 166 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1555 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 167 "Sintactico.y" /* yacc.c:1646  */
    {
                          (yyval.nodito) = new Nodo("FDISK","");
                          (yyval.nodito)->add(*(yyvsp[0].nodito));
                        }
#line 1564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "Sintactico.y" /* yacc.c:1646  */
    {
                         (yyval.nodito) = new Nodo("MOUNT", "");
                         (yyval.nodito)->add(*(yyvsp[0].nodito));
                       }
#line 1573 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 175 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1579 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("REP","");
                     (yyval.nodito)->add(*(yyvsp[0].nodito));
                   }
#line 1587 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 179 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1593 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("MKFS","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 1602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "Sintactico.y" /* yacc.c:1646  */
    {
                         (yyval.nodito) = new Nodo("LOGIN", "");
                         (yyval.nodito)->add(*(yyvsp[0].nodito));
                       }
#line 1611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 188 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("LOGOUT",""); }
#line 1617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 189 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 190 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("MKUSR","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                       }
#line 1638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 196 "Sintactico.y" /* yacc.c:1646  */
    {
                         (yyval.nodito) = new Nodo("CHMOD","");
                         (yyval.nodito)->add(*(yyvsp[0].nodito));
                       }
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 200 "Sintactico.y" /* yacc.c:1646  */
    {
                            (yyval.nodito) = new Nodo("MKFILE","");
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 1662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 204 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 205 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1674 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 206 "Sintactico.y" /* yacc.c:1646  */
    {
                       (yyval.nodito) = new Nodo("EDIT","");
                       (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "Sintactico.y" /* yacc.c:1646  */
    {
                    (yyval.nodito) = new Nodo("REN","");
                    (yyval.nodito)->add(*(yyvsp[0].nodito));
                  }
#line 1692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 214 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("MKDIR","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 1701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "Sintactico.y" /* yacc.c:1646  */
    {
                  (yyval.nodito) = new Nodo("CP","");
                  (yyval.nodito)->add(*(yyvsp[0].nodito));
                }
#line 1710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 222 "Sintactico.y" /* yacc.c:1646  */
    {
                  (yyval.nodito) = new Nodo("MV","");
                  (yyval.nodito)->add(*(yyvsp[0].nodito));
                }
#line 1719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 226 "Sintactico.y" /* yacc.c:1646  */
    {
                      (yyval.nodito) = new Nodo("FIND","");
                      (yyval.nodito)->add(*(yyvsp[0].nodito));
                    }
#line 1728 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 230 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("CHOWN","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 1737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("CHGRP","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 1746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 238 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("PAUSE",""); }
#line 1752 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 239 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1758 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 240 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1764 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 241 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1770 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 245 "Sintactico.y" /* yacc.c:1646  */
    {
                             (yyval.nodito) = (yyvsp[-1].nodito);
                             (yyval.nodito)->add(*(yyvsp[0].nodito));
                            }
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "Sintactico.y" /* yacc.c:1646  */
    {
                       (yyval.nodito) = new Nodo("PARAMETRO","");
                       (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 254 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito)= new Nodo("size",(yyvsp[0].text)); }
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 255 "Sintactico.y" /* yacc.c:1646  */
    {
                                (yyval.nodito) = new Nodo ("fit", "");
                                (yyval.nodito)->add(*(yyvsp[0].nodito));
                               }
#line 1803 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 259 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("unit",(yyvsp[0].text)); }
#line 1809 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 260 "Sintactico.y" /* yacc.c:1646  */
    {
                                 (yyval.nodito) = new Nodo("path",(yyvsp[0].text));
                                }
#line 1817 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 263 "Sintactico.y" /* yacc.c:1646  */
    {
                               (yyval.nodito) = new Nodo("path", (yyvsp[0].text));

                             }
#line 1826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 268 "Sintactico.y" /* yacc.c:1646  */
    {
                                (yyval.nodito) = new Nodo("RMDISK","");
                                Nodo *n = new Nodo("path",(yyvsp[0].text));
                                (yyval.nodito)->add(*n);
                               }
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 273 "Sintactico.y" /* yacc.c:1646  */
    {
                                      (yyval.nodito) = new Nodo("RMDISK","");
                                      Nodo *ruta = new Nodo("path",(yyvsp[0].text));
                                      (yyval.nodito)->add(*ruta);
                                    }
#line 1846 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 278 "Sintactico.y" /* yacc.c:1646  */
    {
                            (yyval.nodito) = (yyvsp[-1].nodito);
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                          }
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 282 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("PARAMETRO","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 1864 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 287 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = (yyvsp[0].nodito); }
#line 1870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 288 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("type",(yyvsp[0].text)); }
#line 1876 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 289 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("delete", "fast"); }
#line 1882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 290 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("delete", "full"); }
#line 1888 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 291 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", (yyvsp[0].text)); }
#line 1894 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 292 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", (yyvsp[0].text)); }
#line 1900 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 293 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("add", (yyvsp[0].text)); }
#line 1906 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 295 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 1915 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 299 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("PARAMETRO","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 1924 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 304 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 1930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 305 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path", (yyvsp[0].text)); }
#line 1936 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 306 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", (yyvsp[0].text)); }
#line 1942 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 307 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name",(yyvsp[0].text)); }
#line 1948 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 309 "Sintactico.y" /* yacc.c:1646  */
    {
                                          (yyval.nodito) = new Nodo("UNMOUNT", "");
                                          Nodo *n = new Nodo("id",(yyvsp[0].text));
                                          (yyval.nodito)->add(*n);
                                        }
#line 1958 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 315 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ajuste", "bf"); }
#line 1964 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 316 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ajuste", "ff"); }
#line 1970 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 317 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ajuste", "wf"); }
#line 1976 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 320 "Sintactico.y" /* yacc.c:1646  */
    {
                     (yyval.nodito) = (yyvsp[-1].nodito);
                     (yyval.nodito)->add(*(yyvsp[0].nodito));
                    }
#line 1985 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 324 "Sintactico.y" /* yacc.c:1646  */
    {
                    (yyval.nodito) = new Nodo("PARAMETRO", "");
                    (yyval.nodito)->add(*(yyvsp[0].nodito));
                  }
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 329 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name","mbr"); }
#line 2000 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 330 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name","disk"); }
#line 2006 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 331 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "inode"); }
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 332 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "journaling"); }
#line 2018 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 333 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "block"); }
#line 2024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 334 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "bm_inode"); }
#line 2030 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 335 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "bm_block"); }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 336 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "tree"); }
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 337 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "sb"); }
#line 2048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 338 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "file"); }
#line 2054 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 339 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name", "ls"); }
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 340 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path", (yyvsp[0].text)); }
#line 2066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 341 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2072 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 342 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("id", (yyvsp[0].text)); }
#line 2078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 343 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ruta", (yyvsp[0].text)); }
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 344 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ruta", (yyvsp[0].text)); }
#line 2090 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 346 "Sintactico.y" /* yacc.c:1646  */
    {
                                (yyval.nodito) = new Nodo("EXEC","");
                                Nodo *path = new Nodo("path", (yyvsp[0].text));
                                (yyval.nodito)->add(*path);
                               }
#line 2100 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 351 "Sintactico.y" /* yacc.c:1646  */
    {
                                 (yyval.nodito) = new Nodo("EXEC","");
                                 Nodo *n = new Nodo("path", (yyvsp[0].text));
                                 (yyval.nodito)->add(*n);
                               }
#line 2110 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 357 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = (yyvsp[-1].nodito);
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 2119 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 361 "Sintactico.y" /* yacc.c:1646  */
    {
                      (yyval.nodito) = new Nodo("PARAMETRO", "");
                      (yyval.nodito)->add(*(yyvsp[0].nodito));
                   }
#line 2128 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 366 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("id",(yyvsp[0].text)); }
#line 2134 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 367 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("type", "fast"); }
#line 2140 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 368 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("type", "full"); }
#line 2146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 369 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("fs", "2fs"); }
#line 2152 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 370 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("fs", "3fs"); }
#line 2158 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 372 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2167 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 376 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("PARAMETRO","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 2176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 381 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user", (yyvsp[0].text)); }
#line 2182 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 382 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user", (yyvsp[0].text)); }
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 383 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password",(yyvsp[0].text)); }
#line 2194 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 384 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password", (yyvsp[0].text)); }
#line 2200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 385 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password", (yyvsp[0].text)); }
#line 2206 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 386 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password", (yyvsp[0].text)); }
#line 2212 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 387 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("id", (yyvsp[0].text)); }
#line 2218 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 389 "Sintactico.y" /* yacc.c:1646  */
    {
                                        (yyval.nodito) = new Nodo("MKGRP","");
                                        Nodo *n = new Nodo("name",(yyvsp[0].text));
                                        (yyval.nodito)->add(*n);
                                      }
#line 2228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 394 "Sintactico.y" /* yacc.c:1646  */
    {
                                    (yyval.nodito) = new Nodo("MKGRP","");
                                    Nodo *n = new Nodo("name",(yyvsp[0].text));
                                    (yyval.nodito)->add(*n);
                                 }
#line 2238 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 400 "Sintactico.y" /* yacc.c:1646  */
    {
                                        (yyval.nodito) = new Nodo("RMGRP","");
                                        Nodo *n = new Nodo("name", (yyvsp[0].text));
                                        (yyval.nodito)->add(*n);
                                     }
#line 2248 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 405 "Sintactico.y" /* yacc.c:1646  */
    {
                                    (yyval.nodito) = new Nodo("RMGRP", "");
                                    Nodo *n = new Nodo("name",(yyvsp[0].text));
                                    (yyval.nodito)->add(*n);
                                 }
#line 2258 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 410 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2267 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 414 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("PARAMETRO", "");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 2276 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 419 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2282 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 420 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2288 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 421 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password",(yyvsp[0].text)); }
#line 2294 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 422 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password", (yyvsp[0].text)); }
#line 2300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 423 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password", (yyvsp[0].text)); }
#line 2306 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 424 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("password",(yyvsp[0].text)); }
#line 2312 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 425 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("group", (yyvsp[0].text)); }
#line 2318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 426 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("group",(yyvsp[0].text)); }
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 428 "Sintactico.y" /* yacc.c:1646  */
    {
                                        (yyval.nodito) = new Nodo("RMUSR","");
                                        Nodo *n = new Nodo("user",(yyvsp[0].text));
                                        (yyval.nodito)->add(*n);
                                     }
#line 2334 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 433 "Sintactico.y" /* yacc.c:1646  */
    {
                                  (yyval.nodito) = new Nodo("RMUSR", "");
                                  Nodo *n = new Nodo("user",(yyvsp[0].text));
                                  (yyval.nodito)->add(*n);
                               }
#line 2344 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 439 "Sintactico.y" /* yacc.c:1646  */
    {
                          (yyval.nodito) = (yyvsp[-1].nodito);
                          (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2353 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 443 "Sintactico.y" /* yacc.c:1646  */
    {
                       (yyval.nodito) = new Nodo("PARAMETRO","");
                       (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 2362 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 448 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2368 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 449 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2374 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 450 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("ugo",(yyvsp[0].text)); }
#line 2380 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 451 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("r",""); }
#line 2386 "parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 453 "Sintactico.y" /* yacc.c:1646  */
    {
                              (yyval.nodito) = (yyvsp[-1].nodito);
                              (yyval.nodito)->add(*(yyvsp[0].nodito));
                            }
#line 2395 "parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 457 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = new Nodo("PARAMETRO","");
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 2404 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 463 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2410 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 464 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2416 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 465 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("size",(yyvsp[0].text)); }
#line 2422 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 466 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("cont",(yyvsp[0].text)); }
#line 2428 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 467 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("cont",(yyvsp[0].text)); }
#line 2434 "parser.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 468 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("p",""); }
#line 2440 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 470 "Sintactico.y" /* yacc.c:1646  */
    {
                          (yyval.nodito) = new Nodo("CAT","");
                          Nodo *n = new Nodo("file",(yyvsp[0].text));
                          (yyval.nodito)->add(*n);
                        }
#line 2450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 475 "Sintactico.y" /* yacc.c:1646  */
    {
                             (yyval.nodito) = new Nodo("CAT","");
                             Nodo *n = new Nodo("file",(yyvsp[0].text));
                             (yyval.nodito)->add(*n);
                           }
#line 2460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 481 "Sintactico.y" /* yacc.c:1646  */
    {
                          (yyval.nodito) = new Nodo("REM","");
                          Nodo *n = new Nodo("path",(yyvsp[0].text));
                          (yyval.nodito)->add(*n);
                        }
#line 2470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 486 "Sintactico.y" /* yacc.c:1646  */
    {
                               (yyval.nodito) = new Nodo("REM","");
                               Nodo *n = new Nodo("path",(yyvsp[0].text));
                               (yyval.nodito)->add(*n);
                            }
#line 2480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 491 "Sintactico.y" /* yacc.c:1646  */
    {
                                  (yyval.nodito) = new Nodo("REM","");
                                  Nodo *n = new Nodo("path",(yyvsp[0].text));
                                  (yyval.nodito)->add(*n);
                                }
#line 2490 "parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 497 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) = (yyvsp[-1].nodito);
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 2499 "parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 501 "Sintactico.y" /* yacc.c:1646  */
    {
                     (yyval.nodito) = new Nodo("PARAMETRO","");
                     (yyval.nodito)->add(*(yyvsp[0].nodito));
                   }
#line 2508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 506 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2514 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 507 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2520 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 508 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("cont", (yyvsp[0].text)); }
#line 2526 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 510 "Sintactico.y" /* yacc.c:1646  */
    {
                    (yyval.nodito) = (yyvsp[-1].nodito);
                    (yyval.nodito)->add(*(yyvsp[0].nodito));
                   }
#line 2535 "parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 514 "Sintactico.y" /* yacc.c:1646  */
    {
                   (yyval.nodito) = new Nodo("PARAMETRO","");
                   (yyval.nodito)->add(*(yyvsp[0].nodito));
                 }
#line 2544 "parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 519 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path", (yyvsp[0].text)); }
#line 2550 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 520 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2556 "parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 521 "Sintactico.y" /* yacc.c:1646  */
    {
                                                  (yyval.nodito) = new Nodo("name","");
                                                  Nodo *n = new Nodo((yyvsp[-1].text),(yyvsp[0].text));
                                                  (yyval.nodito)->add(*n);
                                                }
#line 2566 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 526 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name",(yyvsp[0].text)); }
#line 2572 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 528 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 532 "Sintactico.y" /* yacc.c:1646  */
    {
                      (yyval.nodito) = new Nodo("PARAMETRO","");
                      (yyval.nodito)->add(*(yyvsp[0].nodito));
                    }
#line 2590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 537 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 538 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 539 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("id",(yyvsp[0].text));}
#line 2608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 540 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("p",""); }
#line 2614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 542 "Sintactico.y" /* yacc.c:1646  */
    {
                 (yyval.nodito) = (yyvsp[-1].nodito);
                 (yyval.nodito)->add(*(yyvsp[0].nodito));
               }
#line 2623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 546 "Sintactico.y" /* yacc.c:1646  */
    {
                (yyval.nodito) = new Nodo("PARAMETRO","");
                (yyval.nodito)->add(*(yyvsp[0].nodito));
              }
#line 2632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 551 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2638 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 552 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 553 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2650 "parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 554 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("dest",(yyvsp[0].text)); }
#line 2656 "parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 555 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("dest",(yyvsp[0].text)); }
#line 2662 "parser.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 556 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("dest",(yyvsp[0].text)); }
#line 2668 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 558 "Sintactico.y" /* yacc.c:1646  */
    {
                  (yyval.nodito) = (yyvsp[-1].nodito);
                  (yyval.nodito)->add(*(yyvsp[0].nodito));
                }
#line 2677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 562 "Sintactico.y" /* yacc.c:1646  */
    {
                (yyval.nodito) = new Nodo("PARAMETRO","");
                (yyval.nodito)->add(*(yyvsp[0].nodito));
              }
#line 2686 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 567 "Sintactico.y" /* yacc.c:1646  */
    {
                        (yyval.nodito) =(yyvsp[-1].nodito);
                        (yyval.nodito)->add(*(yyvsp[0].nodito));
                      }
#line 2695 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 571 "Sintactico.y" /* yacc.c:1646  */
    {
                     (yyval.nodito) = new Nodo("PARAMETRO","");
                     (yyval.nodito)->add(*(yyvsp[0].nodito));
                   }
#line 2704 "parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 576 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2710 "parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 577 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2716 "parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 578 "Sintactico.y" /* yacc.c:1646  */
    {
                                                   (yyval.nodito) = new Nodo("name","");
                                                   Nodo *n = new Nodo((yyvsp[-1].text),(yyvsp[0].text));
                                                   (yyval.nodito)->add(*n);
                                                 }
#line 2726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 583 "Sintactico.y" /* yacc.c:1646  */
    {
                                              (yyval.nodito) = new Nodo("name","");
                                              Nodo *n = new Nodo((yyvsp[-1].text),(yyvsp[0].text));
                                              (yyval.nodito)->add(*n);
                                            }
#line 2736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 588 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("name",(yyvsp[0].text)); }
#line 2742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 590 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2751 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 594 "Sintactico.y" /* yacc.c:1646  */
    {
                       (yyval.nodito) = new Nodo("PARAMETRO","");
                       (yyval.nodito)->add(*(yyvsp[0].nodito));
                     }
#line 2760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 599 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 600 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path", (yyvsp[0].text)); }
#line 2772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 601 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("path",(yyvsp[0].text)); }
#line 2778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 602 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 603 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2790 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 604 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("r",""); }
#line 2796 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 606 "Sintactico.y" /* yacc.c:1646  */
    {
                           (yyval.nodito) = (yyvsp[-1].nodito);
                           (yyval.nodito)->add(*(yyvsp[0].nodito));
                         }
#line 2805 "parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 610 "Sintactico.y" /* yacc.c:1646  */
    {
                      (yyval.nodito) = new Nodo("PARAMETRO","");
                      (yyval.nodito)->add(*(yyvsp[0].nodito));
                    }
#line 2814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 615 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2820 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 616 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("user",(yyvsp[0].text)); }
#line 2826 "parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 617 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("group",(yyvsp[0].text));}
#line 2832 "parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 618 "Sintactico.y" /* yacc.c:1646  */
    { (yyval.nodito) = new Nodo("group", (yyvsp[0].text)); }
#line 2838 "parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 620 "Sintactico.y" /* yacc.c:1646  */
    {
                                            (yyval.nodito) = new Nodo("RECOVERY","");
                                            Nodo *n = new Nodo("id",(yyvsp[0].text));
                                            (yyval.nodito)->add(*n);
                                          }
#line 2848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 626 "Sintactico.y" /* yacc.c:1646  */
    {
                                    (yyval.nodito) = new Nodo("LOSS","");
                                    Nodo *n = new Nodo("id",(yyvsp[0].text));
                                    (yyval.nodito)->add(*n);
                                 }
#line 2858 "parser.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 632 "Sintactico.y" /* yacc.c:1646  */
    {
                                          (yyval.nodito) = new Nodo("SYNCRONICE","");
                                          Nodo *n = new Nodo("id",(yyvsp[0].text));
                                          (yyval.nodito)->add(*n);
                                         }
#line 2868 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2872 "parser.cpp" /* yacc.c:1646  */
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
