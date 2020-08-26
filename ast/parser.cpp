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

#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <string.h>

#include "ast.hpp"
#include "lexer.hpp"




#line 85 "parser.cpp"

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
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 17 "parser.y"
 
	#include "ast.hpp" 	
	#include <string>

#line 133 "parser.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_and = 258,
    T_end = 259,
    T_list = 260,
    T_ref = 261,
    T_bool = 262,
    T_exit = 263,
    T_mod = 264,
    T_return = 265,
    T_char = 266,
    T_false = 267,
    T_true = 268,
    T_new = 269,
    T_skip = 270,
    T_decl = 271,
    T_for = 272,
    T_nil = 273,
    T_tail = 274,
    T_head = 275,
    T_def = 276,
    T_nilq = 277,
    T_if = 278,
    T_else = 279,
    T_elsif = 280,
    T_not = 281,
    T_int = 282,
    T_or = 283,
    T_assign = 284,
    T_ge = 285,
    T_le = 286,
    T_neq = 287,
    T_constInt = 288,
    T_var = 289,
    T_constChar = 290,
    T_constString = 291,
    UPLUS = 292,
    UMINUS = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

	StmtList *stmt_list;
	Stmt *stmt;
	Expr *expr;
	If *ifClass;
	For *forClass;
	ExprList* expr_list;
	CallObject *call_object;
	Var *var;
	std::string *type;
	VarList *var_list;
	VarDefinition *var_definition;
	Formal *formal;
	FormalList *formal_list;
	FunctionDefinition *func_def;
	FunctionDeclaration *func_decl;
	DefinitionList *def_list;
	Header *header;

	char chr;
	int num;
	char op;
	const char *str;

#line 208 "parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


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
       2,     2,     2,     2,     2,    40,     2,     2,     2,     2,
      48,    49,    43,    41,    51,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    50,
      39,    37,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
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
      35,    36,    45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   121,   121,   125,   129,   133,   134,   135,   136,   140,
     141,   145,   146,   150,   151,   155,   156,   160,   161,   165,
     166,   170,   171,   172,   173,   174,   179,   184,   185,   186,
     187,   188,   192,   193,   197,   198,   202,   203,   204,   208,
     209,   213,   217,   218,   222,   223,   227,   228,   229,   230,
     234,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"and\"", "\"end\"", "\"list\"",
  "\"ref\"", "\"bool\"", "\"exit\"", "\"mod\"", "\"return\"", "\"char\"",
  "\"false\"", "\"true\"", "\"new\"", "\"skip\"", "\"decl\"", "\"for\"",
  "\"nil\"", "\"tail\"", "\"head\"", "\"def\"", "\"nil?\"", "\"if\"",
  "\"else\"", "\"elsif\"", "\"not\"", "\"int\"", "\"or\"", "\":=\"",
  "\">=\"", "\"<=\"", "\"<>\"", "T_constInt", "T_var", "T_constChar",
  "T_constString", "'='", "'>'", "'<'", "'#'", "'+'", "'-'", "'*'", "'/'",
  "UPLUS", "UMINUS", "':'", "'('", "')'", "';'", "','", "'['", "']'",
  "$accept", "program", "func_def", "func_decl", "definition_list",
  "stmt_list", "header", "formal_list", "formal_tail", "formal",
  "var_list", "type", "var_def", "stmt", "elsif_list", "else", "simple",
  "simple_list", "call", "expr_list", "expr_tail", "atom", "expr", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,    62,    60,
      35,    43,    45,    42,    47,   292,   293,    58,    40,    41,
      59,    44,    91,    93
};
# endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-50)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    90,    17,  -102,   -31,  -102,  -102,  -102,   -26,   -21,
      27,  -102,   394,   362,   489,   -12,     2,   -42,   394,     8,
     -22,    53,    90,   489,   489,    -3,    53,   489,   362,  -102,
    -102,    53,  -102,   362,  -102,     0,  -102,  -102,  -102,  -102,
    -102,   420,  -102,    20,   420,    14,  -102,    60,    -3,  -102,
     -20,    -2,  -102,  -102,    39,  -102,   -22,    62,  -102,  -102,
     394,  -102,    51,    52,    55,   420,  -102,  -102,   420,   420,
     420,  -102,    59,   372,    56,    54,   290,   420,  -102,  -102,
     420,   420,  -102,  -102,  -102,    63,   420,   420,   420,   434,
    -102,  -102,   202,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,    20,   420,    -3,
      65,   159,   372,   113,   344,   222,   246,   266,  -102,   434,
    -102,   387,   449,   449,   449,   449,   449,   449,     4,    -5,
      -5,  -102,  -102,  -102,   176,     5,  -102,   420,  -102,  -102,
     133,  -102,  -102,  -102,    20,    74,   420,   119,  -102,   159,
    -102,    78,    -3,   308,  -102,  -102,    -3,  -102,    -3,   125,
       5,  -102,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,    22,    23,    21,     0,     0,
       0,     1,     0,    13,     5,     0,     0,     0,     0,     0,
      15,     0,     0,     5,     5,     0,     0,     5,    13,    24,
      25,     0,    11,     0,    14,    19,    17,     4,     6,     7,
      28,     0,    36,     0,     0,    46,    47,     0,     9,    27,
      38,     0,    26,     8,     0,    18,    15,     0,    68,    67,
       0,    73,     0,     0,     0,     0,    51,    52,     0,     0,
       0,    49,    50,    29,    39,     0,     0,    42,     3,    10,
       0,     0,    12,    16,    20,     0,     0,     0,     0,    69,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    37,     0,     0,     0,     0,     0,    53,    70,
      60,    71,    66,    65,    64,    61,    62,    63,    75,    56,
      57,    58,    59,    40,     0,    34,    41,     0,    43,    48,
       0,    77,    76,    74,     0,     0,     0,     0,    32,    44,
      72,     0,     0,     0,    30,    45,     0,    35,     0,     0,
      34,    31,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,   130,  -102,    67,   -46,   115,   107,    82,   106,
     -23,    80,  -102,  -102,   -14,  -102,   -18,  -101,   -25,  -102,
      -1,   -24,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    47,     9,    19,    34,    20,
      36,    26,    27,    48,   147,   148,    49,    75,    71,   110,
     138,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    51,    79,    52,    94,    40,   133,    41,    55,   -49,
      16,    30,    42,    94,    43,     1,    76,    11,    50,    51,
      44,    12,    13,    50,    51,    74,    14,    80,    33,   145,
     146,    45,   -49,    46,    84,    42,    28,    89,   105,   106,
      90,    91,    92,   151,   102,   103,   104,   105,   106,   111,
      81,    57,   112,   113,    45,    29,    46,    32,   115,   116,
     117,    15,    77,   135,    78,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,    16,
     134,    10,    50,    51,    50,    51,   140,    35,    82,    74,
      38,    39,    17,    21,    53,     4,    35,     5,    31,    86,
      87,     6,    10,    88,   108,    16,   157,   107,    21,   149,
     159,    81,   160,    21,   136,   114,    93,     7,   153,    50,
      51,   152,    94,   154,     8,   156,    74,    50,    51,   161,
       3,    50,    51,    50,    51,    54,    93,    37,    83,    56,
      85,    95,    94,    96,    97,    98,   162,     0,   155,     0,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
       0,    95,    93,    96,    97,    98,   139,     0,    94,     0,
      99,   100,   101,   102,   103,   104,   105,   106,     0,    93,
       0,     0,     0,     0,     0,    94,   150,    95,     0,    96,
      97,    98,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,   105,   106,    95,    93,    96,    97,    98,     0,
     137,    94,     0,    99,   100,   101,   102,   103,   104,   105,
     106,     0,     0,     0,     0,    93,   144,     0,     0,     0,
      95,    94,    96,    97,    98,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    93,
      95,   118,    96,    97,    98,    94,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    93,
       0,   141,     0,     0,    95,    94,    96,    97,    98,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
     106,     0,     0,    93,    95,   142,    96,    97,    98,    94,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
     106,    93,     0,     0,     0,   143,     0,    94,    95,     0,
      96,    97,    98,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,   105,   106,     0,    95,   109,    96,    97,
      98,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,   105,   106,     0,     0,   158,    58,    59,    60,     0,
       0,     0,    61,    62,    63,     0,    64,     4,    18,     5,
      65,     0,     0,     6,     0,    93,     0,    66,    45,    67,
      46,    94,     0,     0,     0,    68,    69,     0,     0,     7,
      93,     0,    70,     0,     0,     0,    94,    29,     0,     4,
      95,     5,    96,    97,    98,     6,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,   106,    96,    97,    98,
       0,     7,     0,     0,    99,   100,   101,   102,   103,   104,
     105,   106,    58,    59,    60,     0,     0,     0,    61,    62,
      63,     0,    64,    94,     0,     0,    65,     0,     0,     0,
       0,     0,     0,    66,    45,    67,    46,     0,    94,     0,
       0,    68,    69,     0,    96,    97,    98,     0,    70,     0,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   -50,
     -50,   -50,     0,     0,     0,     0,   -50,   -50,   -50,   102,
     103,   104,   105,   106,     4,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     7
};

static const yytype_int16 yycheck[] =
{
      25,    25,    48,    26,     9,     8,   107,    10,    31,    29,
      52,    53,    15,     9,    17,    21,    44,     0,    43,    43,
      23,    52,    48,    48,    48,    43,    47,    29,    50,    24,
      25,    34,    52,    36,    57,    15,    48,    65,    43,    44,
      68,    69,    70,   144,    40,    41,    42,    43,    44,    77,
      52,    51,    80,    81,    34,    53,    36,    49,    86,    87,
      88,    34,    48,   109,     4,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    52,
     108,     1,   107,   107,   109,   109,   114,    34,    49,   107,
      23,    24,    12,    13,    27,     5,    34,     7,    18,    48,
      48,    11,    22,    48,    50,    52,   152,    51,    28,   137,
     156,    52,   158,    33,    49,    52,     3,    27,   146,   144,
     144,    47,     9,     4,    34,    47,   144,   152,   152,     4,
       0,   156,   156,   158,   158,    28,     3,    22,    56,    33,
      60,    28,     9,    30,    31,    32,   160,    -1,   149,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    28,     3,    30,    31,    32,    53,    -1,     9,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,     3,
      -1,    -1,    -1,    -1,    -1,     9,    53,    28,    -1,    30,
      31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    28,     3,    30,    31,    32,    -1,
      51,     9,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,     3,    50,    -1,    -1,    -1,
      28,     9,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,     3,
      28,    49,    30,    31,    32,     9,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,     3,
      -1,    49,    -1,    -1,    28,     9,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,     3,    28,    49,    30,    31,    32,     9,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,     3,    -1,    -1,    -1,    49,    -1,     9,    28,    -1,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    28,    47,    30,    31,
      32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    12,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,     5,     6,     7,
      26,    -1,    -1,    11,    -1,     3,    -1,    33,    34,    35,
      36,     9,    -1,    -1,    -1,    41,    42,    -1,    -1,    27,
       3,    -1,    48,    -1,    -1,    -1,     9,    53,    -1,     5,
      28,     7,    30,    31,    32,    11,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    30,    31,    32,
      -1,    27,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    12,    13,    14,    -1,    -1,    -1,    18,    19,
      20,    -1,    22,     9,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,     9,    -1,
      -1,    41,    42,    -1,    30,    31,    32,    -1,    48,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    30,
      31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,     5,    -1,     7,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    55,    56,     5,     7,    11,    27,    34,    60,
      65,     0,    52,    48,    47,    34,    52,    65,     6,    61,
      63,    65,    16,    56,    57,    58,    65,    66,    48,    53,
      53,    65,    49,    50,    62,    34,    64,    60,    58,    58,
       8,    10,    15,    17,    23,    34,    36,    59,    67,    70,
      72,    75,    64,    58,    61,    64,    63,    51,    12,    13,
      14,    18,    19,    20,    22,    26,    33,    35,    41,    42,
      48,    72,    75,    76,    70,    71,    76,    48,     4,    59,
      29,    52,    49,    62,    64,    65,    48,    48,    48,    76,
      76,    76,    76,     3,     9,    28,    30,    31,    32,    37,
      38,    39,    40,    41,    42,    43,    44,    51,    50,    47,
      73,    76,    76,    76,    52,    76,    76,    76,    49,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    71,    76,    59,    49,    51,    74,    53,
      76,    49,    49,    49,    50,    24,    25,    68,    69,    76,
      53,    71,    47,    76,     4,    74,    47,    59,    47,    59,
      59,     4,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    57,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    66,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     6,     2,     0,     2,     2,     2,     1,
       2,     4,     5,     0,     2,     0,     3,     2,     3,     1,
       3,     1,     1,     1,     3,     4,     2,     1,     1,     2,
       6,     9,     1,     5,     0,     3,     1,     3,     1,     1,
       3,     4,     0,     2,     0,     3,     1,     1,     4,     1,
       1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       3,     3,     5,     1,     4,     3,     4,     4
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
  case 3:
#line 125 "parser.y"
                                                                        { (yyval.func_def) = new FunctionDefinition((yyvsp[-4].header),(yyvsp[-2].def_list),(yyvsp[-1].stmt_list)); }
#line 1564 "parser.cpp"
    break;

  case 4:
#line 129 "parser.y"
                                                { (yyval.func_decl) = new FunctionDeclaration((yyvsp[0].header)); }
#line 1570 "parser.cpp"
    break;

  case 5:
#line 133 "parser.y"
                                                                        { (yyval.def_list) = new DefinitionList(); }
#line 1576 "parser.cpp"
    break;

  case 6:
#line 134 "parser.y"
                                                { (yyvsp[0].def_list)->append((yyvsp[-1].func_def)); (yyval.def_list)=(yyvsp[0].def_list); }
#line 1582 "parser.cpp"
    break;

  case 7:
#line 135 "parser.y"
                                                { (yyvsp[0].def_list)->append((yyvsp[-1].func_decl)); (yyval.def_list)=(yyvsp[0].def_list); }
#line 1588 "parser.cpp"
    break;

  case 8:
#line 136 "parser.y"
                                                { (yyvsp[0].def_list)->append((yyvsp[-1].var_definition)); (yyval.def_list)=(yyvsp[0].def_list); }
#line 1594 "parser.cpp"
    break;

  case 9:
#line 140 "parser.y"
                                                { (yyval.stmt_list) = new StmtList((yyvsp[0].stmt)); }
#line 1600 "parser.cpp"
    break;

  case 10:
#line 141 "parser.y"
                                        { (yyvsp[0].stmt_list)->append((yyvsp[-1].stmt)); (yyval.stmt_list)=(yyvsp[0].stmt_list); }
#line 1606 "parser.cpp"
    break;

  case 11:
#line 145 "parser.y"
                                                                { (yyval.header) = new Header((yyvsp[-3].var),(yyvsp[-1].formal_list)); }
#line 1612 "parser.cpp"
    break;

  case 12:
#line 146 "parser.y"
                                                        { (yyval.header) = new Header((yyvsp[-3].var),(yyvsp[-1].formal_list),(yyvsp[-4].type)); }
#line 1618 "parser.cpp"
    break;

  case 13:
#line 150 "parser.y"
                                                                        { (yyval.formal_list) = new FormalList(); }
#line 1624 "parser.cpp"
    break;

  case 14:
#line 151 "parser.y"
                                                        { (yyvsp[0].formal_list)->append((yyvsp[-1].formal)) ; (yyval.formal_list) = (yyvsp[0].formal_list); }
#line 1630 "parser.cpp"
    break;

  case 15:
#line 155 "parser.y"
                                                                        { (yyval.formal_list) = new FormalList(); }
#line 1636 "parser.cpp"
    break;

  case 16:
#line 156 "parser.y"
                                                { (yyvsp[0].formal_list)->append((yyvsp[-1].formal)); (yyval.formal_list) = (yyvsp[0].formal_list); }
#line 1642 "parser.cpp"
    break;

  case 17:
#line 160 "parser.y"
                                                { (yyval.formal) = new Formal((yyvsp[-1].type),(yyvsp[0].var_list)); }
#line 1648 "parser.cpp"
    break;

  case 18:
#line 161 "parser.y"
                                        { (yyval.formal) = new Formal((yyvsp[-1].type),(yyvsp[0].var_list),true); }
#line 1654 "parser.cpp"
    break;

  case 19:
#line 165 "parser.y"
                                                        { (yyval.var_list) = new VarList((yyvsp[0].var)); }
#line 1660 "parser.cpp"
    break;

  case 20:
#line 166 "parser.y"
                                                { (yyvsp[0].var_list)->append((yyvsp[-2].var)); (yyval.var_list) = (yyvsp[0].var_list); }
#line 1666 "parser.cpp"
    break;

  case 21:
#line 170 "parser.y"
                                                        { (yyval.type) = new std::string("int"); }
#line 1672 "parser.cpp"
    break;

  case 22:
#line 171 "parser.y"
                                                        { (yyval.type) = new std::string("bool"); }
#line 1678 "parser.cpp"
    break;

  case 23:
#line 172 "parser.y"
                                                        { (yyval.type) = new std::string("char"); }
#line 1684 "parser.cpp"
    break;

  case 24:
#line 173 "parser.y"
                                                { (yyvsp[-2].type)->append("[]"); (yyval.type)=(yyvsp[-2].type); }
#line 1690 "parser.cpp"
    break;

  case 25:
#line 174 "parser.y"
                                        { (yyval.type) = new std::string("list ["); (yyval.type)->append((yyvsp[-1].type)->c_str()) ; (yyval.type)->append("]"); }
#line 1696 "parser.cpp"
    break;

  case 26:
#line 179 "parser.y"
                                                { (yyval.var_definition) = new VarDefinition((yyvsp[-1].type),(yyvsp[0].var_list)); }
#line 1702 "parser.cpp"
    break;

  case 27:
#line 184 "parser.y"
                                                                                                                                                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1708 "parser.cpp"
    break;

  case 28:
#line 185 "parser.y"
                                                                                                                                                { (yyval.stmt) = new ExitStmt(); }
#line 1714 "parser.cpp"
    break;

  case 29:
#line 186 "parser.y"
                                                                                                                                        { (yyval.stmt) = new ReturnStmt((yyvsp[0].expr)); }
#line 1720 "parser.cpp"
    break;

  case 30:
#line 187 "parser.y"
                                                                                                                { (yyval.stmt) = new If((yyvsp[-4].expr),(yyvsp[-2].stmt_list),(yyvsp[-1].ifClass)); }
#line 1726 "parser.cpp"
    break;

  case 31:
#line 188 "parser.y"
                                                                                        { (yyval.stmt) = new For((yyvsp[-7].stmt_list),(yyvsp[-5].expr),(yyvsp[-3].stmt_list),(yyvsp[-1].stmt_list)); }
#line 1732 "parser.cpp"
    break;

  case 32:
#line 192 "parser.y"
                                { (yyval.ifClass) = (yyvsp[0].ifClass); }
#line 1738 "parser.cpp"
    break;

  case 33:
#line 193 "parser.y"
                                                                { (yyval.ifClass) = new If((yyvsp[-3].expr),(yyvsp[-1].stmt_list),(yyvsp[0].ifClass)); }
#line 1744 "parser.cpp"
    break;

  case 34:
#line 197 "parser.y"
                                                { (yyval.ifClass) = NULL; }
#line 1750 "parser.cpp"
    break;

  case 35:
#line 198 "parser.y"
                                        { (yyval.ifClass) = new If(NULL,(yyvsp[0].stmt_list),NULL); }
#line 1756 "parser.cpp"
    break;

  case 36:
#line 202 "parser.y"
                                                                {  }
#line 1762 "parser.cpp"
    break;

  case 37:
#line 203 "parser.y"
                                                        { (yyval.stmt) = new AssignStmt((yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1768 "parser.cpp"
    break;

  case 38:
#line 204 "parser.y"
                                                                { (yyval.stmt) = (yyvsp[0].call_object); }
#line 1774 "parser.cpp"
    break;

  case 39:
#line 208 "parser.y"
                                                        { (yyval.stmt_list) = new StmtList((yyvsp[0].stmt)); }
#line 1780 "parser.cpp"
    break;

  case 40:
#line 209 "parser.y"
                                        { (yyvsp[0].stmt_list)->append((yyvsp[-2].stmt)); (yyval.stmt_list) = (yyvsp[0].stmt_list); }
#line 1786 "parser.cpp"
    break;

  case 41:
#line 213 "parser.y"
                                                { (yyval.call_object) = new CallObject((yyvsp[-3].var),(yyvsp[-1].expr_list)); }
#line 1792 "parser.cpp"
    break;

  case 42:
#line 217 "parser.y"
                                                        { (yyval.expr_list) = new ExprList(); }
#line 1798 "parser.cpp"
    break;

  case 43:
#line 218 "parser.y"
                                                        { (yyvsp[0].expr_list)->append((yyvsp[-1].expr)); (yyvsp[0].expr_list)->reverse() ; (yyval.expr_list) = (yyvsp[0].expr_list); }
#line 1804 "parser.cpp"
    break;

  case 44:
#line 222 "parser.y"
                                                                        { (yyval.expr_list) = new ExprList(); }
#line 1810 "parser.cpp"
    break;

  case 45:
#line 223 "parser.y"
                                                { (yyvsp[0].expr_list)->append((yyvsp[-1].expr)) ; (yyval.expr_list) = (yyvsp[0].expr_list); }
#line 1816 "parser.cpp"
    break;

  case 46:
#line 227 "parser.y"
                                                                { (yyval.expr) = (yyvsp[0].var); }
#line 1822 "parser.cpp"
    break;

  case 47:
#line 228 "parser.y"
                                                        { (yyval.expr) = new ConstString((yyvsp[0].str)); }
#line 1828 "parser.cpp"
    break;

  case 48:
#line 229 "parser.y"
                                                        { (yyval.expr) = new ArrayIndexing((yyvsp[-3].expr),(yyvsp[-1].expr)); }
#line 1834 "parser.cpp"
    break;

  case 49:
#line 230 "parser.y"
                                                                { (yyval.expr) = (yyvsp[0].call_object); }
#line 1840 "parser.cpp"
    break;

  case 50:
#line 235 "parser.y"
                        { (yyval.expr) = (yyvsp[0].expr); }
#line 1846 "parser.cpp"
    break;

  case 51:
#line 236 "parser.y"
                                                        { (yyval.expr) = new Const((yyvsp[0].num)); }
#line 1852 "parser.cpp"
    break;

  case 52:
#line 237 "parser.y"
                                                        { (yyval.expr) = new Const((yyvsp[0].num)); }
#line 1858 "parser.cpp"
    break;

  case 53:
#line 238 "parser.y"
                                                        { (yyval.expr) = (yyvsp[-1].expr); }
#line 1864 "parser.cpp"
    break;

  case 54:
#line 239 "parser.y"
                                                { (yyval.expr) = new BinOp(NULL,'+',(yyvsp[0].expr)); }
#line 1870 "parser.cpp"
    break;

  case 55:
#line 240 "parser.y"
                                                { (yyval.expr) = new BinOp(NULL,'-',(yyvsp[0].expr)); }
#line 1876 "parser.cpp"
    break;

  case 56:
#line 241 "parser.y"
                                                        { (yyval.expr) = new BinOp((yyvsp[-2].expr),'+',(yyvsp[0].expr)); }
#line 1882 "parser.cpp"
    break;

  case 57:
#line 242 "parser.y"
                                                        { (yyval.expr) = new BinOp((yyvsp[-2].expr),'-',(yyvsp[0].expr)); }
#line 1888 "parser.cpp"
    break;

  case 58:
#line 243 "parser.y"
                                                        { (yyval.expr) = new BinOp((yyvsp[-2].expr),'*',(yyvsp[0].expr)); }
#line 1894 "parser.cpp"
    break;

  case 59:
#line 244 "parser.y"
                                                        { (yyval.expr) = new BinOp((yyvsp[-2].expr),'/',(yyvsp[0].expr)); }
#line 1900 "parser.cpp"
    break;

  case 60:
#line 245 "parser.y"
                                                        { (yyval.expr) = new BinOp((yyvsp[-2].expr),'%',(yyvsp[0].expr)); }
#line 1906 "parser.cpp"
    break;

  case 61:
#line 246 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),eq,(yyvsp[0].expr)); }
#line 1912 "parser.cpp"
    break;

  case 62:
#line 247 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),gt,(yyvsp[0].expr)); }
#line 1918 "parser.cpp"
    break;

  case 63:
#line 248 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),lt,(yyvsp[0].expr)); }
#line 1924 "parser.cpp"
    break;

  case 64:
#line 249 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),neq,(yyvsp[0].expr)); }
#line 1930 "parser.cpp"
    break;

  case 65:
#line 250 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),le,(yyvsp[0].expr)); }
#line 1936 "parser.cpp"
    break;

  case 66:
#line 251 "parser.y"
                                                        { (yyval.expr) = new RelOp((yyvsp[-2].expr),ge,(yyvsp[0].expr)); }
#line 1942 "parser.cpp"
    break;

  case 67:
#line 252 "parser.y"
                                                                { (yyval.expr) = new LogOp(TRUE); }
#line 1948 "parser.cpp"
    break;

  case 68:
#line 253 "parser.y"
                                                                { (yyval.expr) = new LogOp(FALSE); }
#line 1954 "parser.cpp"
    break;

  case 69:
#line 254 "parser.y"
                                                        { (yyval.expr) = new LogOp(NOT,NULL,(yyvsp[0].expr)); }
#line 1960 "parser.cpp"
    break;

  case 70:
#line 255 "parser.y"
                                                        { (yyval.expr) = new LogOp(AND,(yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1966 "parser.cpp"
    break;

  case 71:
#line 256 "parser.y"
                                                        { (yyval.expr) = new LogOp(OR,(yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1972 "parser.cpp"
    break;

  case 72:
#line 257 "parser.y"
                                                { (yyval.expr) = new ArrayInit((yyvsp[-3].type),(yyvsp[-1].expr)); }
#line 1978 "parser.cpp"
    break;

  case 73:
#line 258 "parser.y"
                                                                { (yyval.expr) = new ListOp(nil,NULL,NULL); }
#line 1984 "parser.cpp"
    break;

  case 74:
#line 259 "parser.y"
                                                { (yyval.expr) = new ListOp(nilq,NULL,(yyvsp[-1].expr)); }
#line 1990 "parser.cpp"
    break;

  case 75:
#line 260 "parser.y"
                                                        { (yyval.expr) = new ListOp(append,(yyvsp[-2].expr),(yyvsp[0].expr)); }
#line 1996 "parser.cpp"
    break;

  case 76:
#line 261 "parser.y"
                                                { (yyval.expr) = new ListOp(head,NULL,(yyvsp[-1].expr)); }
#line 2002 "parser.cpp"
    break;

  case 77:
#line 262 "parser.y"
                                                { (yyval.expr) = new ListOp(tail,NULL,(yyvsp[-1].expr)); }
#line 2008 "parser.cpp"
    break;


#line 2012 "parser.cpp"

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
#line 265 "parser.y"


int main() 
{
	int result = yyparse();
	if (result == 0) printf("Success.\n");
	return result;
}
