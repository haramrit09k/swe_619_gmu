#include <stdlib.h>

# line 3 "grammar.y"
#include "storage.h"
#include "node.h"
#include "hash.h"
#include "assoc.h"
#include <setjmp.h>
#include "lost.h"
#define catch_err(c) {longjmp_on_err = 1; if(!setjmp(longjmp_buf))c; longjmp_on_err = 0;}

extern int longjmp_on_err;
extern jmp_buf longjmp_buf;

node_ptr parse_tree;

# line 16 "grammar.y"
typedef union  {
  node_ptr node;
} YYSTYPE;

# define GOTO 257
# define LET 258
# define STEP 259
# define EVAL 260
# define RESET 261
# define ASYNC 262
# define MODULE 263
# define PROCESS 264
# define MODTYPE 265
# define LAMBDA 266
# define CONTEXT 267
# define EU 268
# define AU 269
# define EBU 270
# define ABU 271
# define MINU 272
# define MAXU 273
# define VAR 274
# define DEFINE 275
# define INIT 276
# define TRANS 277
# define INVAR 278
# define FORMAT 279
# define SPEC 280
# define COMPUTE 281
# define FAIRNESS 282
# define ISA 283
# define CONSTANT 284
# define ASSIGN 285
# define INPUT 286
# define OUTPUT 287
# define IMPLEMENTS 288
# define BOOLEAN 289
# define ARRAY 290
# define OF 291
# define SCALAR 292
# define LIST 293
# define OVER 294
# define BDD 295
# define SEMI 296
# define LP 297
# define RP 298
# define LB 299
# define RB 300
# define LCB 301
# define RCB 302
# define EQDEF 303
# define TWODOTS 304
# define ATLINE 305
# define FALSEEXP 306
# define TRUEEXP 307
# define APROPOS 308
# define SELF 309
# define SIGMA 310
# define CASE 311
# define ESAC 312
# define COLON 313
# define ATOM 314
# define NUMBER 315
# define QUOTE 316
# define COMMA 317
# define IMPLIES 318
# define IFF 319
# define OR 320
# define AND 321
# define NOT 322
# define EX 323
# define AX 324
# define EF 325
# define AF 326
# define EG 327
# define AG 328
# define E 329
# define A 330
# define UNTIL 331
# define EBF 332
# define EBG 333
# define ABF 334
# define ABG 335
# define BUNTIL 336
# define MIN 337
# define MAX 338
# define APATH 339
# define EPATH 340
# define EQUAL 341
# define LT 342
# define GT 343
# define LE 344
# define GE 345
# define UNION 346
# define SETIN 347
# define MOD 348
# define PLUS 349
# define MINUS 350
# define TIMES 351
# define DIVIDE 352
# define UMINUS 353
# define NEXT 354
# define SMALLINIT 355
# define DOT 356

#ifdef __STDC__
#include <stdlib.h>
#include <string.h>
#else
#include <malloc.h>
#include <memory.h>
#endif

//#include <values.h>

#ifdef __cplusplus

#ifndef yyerror
	void yyerror(const char *);
#endif

#ifndef yylex
#ifdef __EXTERN_C__
	extern "C" { int yylex(void); }
#else
	int yylex(void);
#endif
#endif
	int yyparse(void);

#endif
#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
YYSTYPE yylval;
YYSTYPE yyval;
typedef int yytabelem;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
#if YYMAXDEPTH > 0
int yy_yys[YYMAXDEPTH], *yys = yy_yys;
YYSTYPE yy_yyv[YYMAXDEPTH], *yyv = yy_yyv;
#else	/* user does initial allocation */
int *yys;
YYSTYPE *yyv;
#endif
static int yymaxdepth = YYMAXDEPTH;
# define YYERRCODE 256

# line 300 "grammar.y"

yytabelem yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
-1, 3,
	0, 2,
	-2, 0,
	};
# define YYNPROD 136
# define YYLAST 1056
yytabelem yyact[]={

    28,   113,   270,    83,    44,   269,    83,   115,   209,    26,
    27,   182,    47,    45,    42,    71,    72,    46,    48,    69,
    70,    71,    72,    83,   271,    29,    30,    31,    32,    33,
    34,    35,    37,    36,    83,    38,    40,    39,    41,   272,
    47,    65,    66,    67,    68,    46,    47,    48,   228,   192,
   193,    46,    49,    50,   205,   181,   111,    43,    83,   206,
    82,   114,   229,    82,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
    82,    49,    50,   178,   110,   217,   218,    54,   249,   203,
   221,    82,   199,   277,   204,    67,    68,   185,   179,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,    65,    66,    67,    68,    82,    74,    75,    76,    77,
    78,    79,    80,    73,    69,    70,    71,    72,   276,    83,
   180,   166,   149,   116,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
    79,    80,    73,    69,    70,    71,    72,    21,   176,   268,
    80,    73,    69,    70,    71,    72,   280,   241,    84,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,    65,    66,    67,    68,   281,    82,    73,    69,    70,
    71,    72,   232,   214,   265,   213,   252,    65,    66,    67,
    68,   109,    94,    93,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
    74,    75,    76,    77,    78,    79,    80,    73,    69,    70,
    71,    72,   264,   257,   234,    68,   233,    64,   259,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,    65,    66,    67,    68,    74,    75,    76,    77,    78,
    79,    80,    73,    69,    70,    71,    72,    62,   256,   251,
    65,    66,    67,    68,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
    61,    56,   273,    74,    75,    76,    77,    78,    79,    80,
    73,    69,    70,    71,    72,   238,   219,   242,     6,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,   236,     3,    65,    66,    67,    68,   220,     5,     1,
     4,   245,    19,    18,    52,    53,   226,   100,   260,    65,
    66,    67,    68,   197,   134,   133,    74,    75,    76,    77,
    78,    79,    80,    73,    69,    70,    71,    72,    65,    66,
    67,    68,    74,    75,    76,    77,    78,    79,    80,    73,
    69,    70,    71,    72,   210,   200,   184,   132,   103,   215,
   195,    74,    75,    76,    77,    78,    79,    80,    73,    69,
    70,    71,    72,   202,   201,   131,    65,    66,    67,    68,
   274,    20,   191,   148,   130,   129,   128,   189,   127,   126,
   125,    65,    66,    67,    68,   124,   123,   122,   121,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,    63,     2,     0,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,   177,   169,     0,     0,
     0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   120,     0,     0,    65,    66,    67,
    68,     0,     0,     0,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
    74,    75,    76,    77,    78,    79,    80,    73,    69,    70,
    71,    72,   119,     0,     0,     0,     0,     0,     0,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,   118,   196,     0,    65,    66,    67,    68,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
     0,     0,     0,    65,    66,    67,    68,    74,    75,    76,
    77,    78,    79,    80,    73,    69,    70,    71,    72,    65,
    66,    67,    68,   104,   240,     0,    74,    75,    76,    77,
    78,    79,    80,    73,    69,    70,    71,    72,   112,   263,
     0,   279,    74,    75,    76,    77,    78,    79,    80,    73,
    69,    70,    71,    72,    81,     0,     0,     0,     0,     0,
    65,    66,    67,    68,    74,    75,    76,    77,    78,    79,
    80,    73,    69,    70,    71,    72,    65,    66,    67,    68,
     0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
    73,    69,    70,    71,    72,    65,    66,    67,    68,    74,
    75,    76,    77,    78,    79,    80,    73,    69,    70,    71,
    72,   247,     0,     0,     0,     0,     0,     0,    74,    75,
    76,    77,    78,    79,    80,    73,    69,    70,    71,    72,
   107,   108,     0,     0,     0,     0,   243,   246,   105,    48,
     0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
   101,    17,     9,    10,    11,    12,    16,     0,    22,    51,
     0,   249,    48,    57,    58,    59,    60,     0,     0,     0,
     0,    13,    15,    49,    50,     7,     8,    14,     0,    85,
    86,    87,    88,    89,    90,    91,    92,     0,     0,     0,
     0,     0,     0,     0,   102,     0,    49,    50,   135,   140,
   137,   138,   139,   208,   141,   142,   143,   136,     0,   144,
   145,   146,   147,     0,     0,     0,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
   164,   165,    24,     0,   167,    17,     9,    10,    11,    12,
    16,    25,     6,     0,   170,   171,   172,     0,   173,   174,
   175,     0,     0,     0,     0,    13,    15,     0,     0,     7,
     8,    14,     0,     0,     0,     0,     0,   183,   261,     0,
     0,    96,    96,    96,    96,    23,     0,   106,     0,     0,
    95,    97,    98,    99,     0,     0,    55,     0,   186,   187,
   188,     0,   190,     0,   194,     0,   278,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   168,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   222,     0,   224,     0,     0,     0,
     0,     0,     0,     0,   230,   231,     0,     0,     0,     0,
     0,     0,     0,     0,   237,     0,   239,     0,     0,     0,
   250,     0,     0,   253,     0,     0,     0,     0,     0,     0,
     0,     0,   258,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   266,   267,     0,     0,     0,     0,     0,     0,
     0,     0,   106,     0,     0,   275,     0,     0,     0,     0,
     0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   282,     0,     0,     0,     0,    96,     0,    96,
     0,     0,    96,     0,     0,     0,   223,     0,   225,     0,
     0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
   211,    96,     0,     0,     0,   212,     0,     0,     0,     0,
   248,   216,   211,     0,     0,     0,     0,   106,     0,    96,
     0,     0,     0,     0,     0,     0,     0,     0,   262,     0,
     0,     0,     0,     0,     0,     0,   235,     0,     0,     0,
     0,     0,     0,     0,     0,   106,    96,     0,     0,   254,
   255,     0,     0,     0,     0,   248 };
yytabelem yypact[]={

   519,-10000000,    45,   435,-10000000,-10000000,  -157,  -297,  -297,  -228,
  -263,    -5,  -297,  -297,  -297,  -297,    -6,   -29,-10000000,-10000000,
-10000000,   -60,   298,  -276,  -136,-10000000,-10000000,-10000000,  -297,  -297,
  -297,  -297,  -297,  -297,  -297,  -297,   -96,   -97,  -268,  -268,
  -268,  -268,  -297,  -297,   364,   -98,-10000000,-10000000,-10000000,  -231,
  -259,   282,  -295,  -349,-10000000,  -170,-10000000,   241,   225,   206,
   168,-10000000,-10000000,   464,  -182,  -297,  -297,  -297,  -297,  -297,
  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
  -297,-10000000,  -183,  -297,  -268,   149,   263,   263,   263,   263,
   263,   263,   263,  -297,  -297,  -297,  -136,  -297,  -297,  -297,
  -154,   133,-10000000,  -219,-10000000,-10000000,-10000000,-10000000,-10000000,  -184,
-10000000,-10000000,-10000000,-10000000,  -260,  -304,  -297,-10000000,-10000000,-10000000,
-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,
-10000000,-10000000,-10000000,-10000000,-10000000,-10000000,  -217,  -297,  -297,  -297,
-10000000,  -297,  -288,  -297,-10000000,-10000000,  -263,  -222,    77,-10000000,
   317,  -225,   -86,   263,  -336,  -336,-10000000,-10000000,  -330,  -196,
  -196,  -196,  -196,  -196,  -187,  -161,-10000000,    93,-10000000,-10000000,
  -242,  -277,   263,   263,   263,   263,-10000000,  -297,-10000000,   364,
  -333,-10000000,-10000000,    78,  -263,-10000000,   317,   317,   317,  -263,
   317,-10000000,  -104,  -106,   317,  -269,  -263,    10,  -276,-10000000,
-10000000,  -224,-10000000,  -297,  -268,  -297,  -268,    40,-10000000,  -268,
-10000000,  -265,  -241,  -297,  -297,  -111,  -276,   -61,   -63,-10000000,
  -263,-10000000,    21,  -297,     5,  -297,  -297,  -133,   387,  -297,
   -48,  -121,  -297,  -263,  -263,  -276,-10000000,   -32,-10000000,   -67,
-10000000,  -297,   -58,-10000000,   364,-10000000,  -268,  -226,-10000000,   -65,
  -102,  -297,  -297,  -137,  -293,  -296,-10000000,-10000000,   317,-10000000,
  -278,-10000000,     1,-10000000,  -297,-10000000,  -172,  -207,-10000000,-10000000,
-10000000,-10000000,   364,   387,  -132,   317,-10000000,-10000000,-10000000,-10000000,
-10000000,  -297,   317 };
yytabelem yypgo[]={

     0,   432,   330,   431,   418,   417,   376,   307,   416,   415,
   410,   409,   408,   407,   406,   405,   404,   403,   815,   781,
   772,   690,   402,   337,   563,   401,   331,   400,   395,   380,
   379,   378,   377,   345,   344,   343,   338,   335,   334,   329,
   322,   328 };
yytabelem yyr1[]={

     0,    39,    39,     1,     1,     2,    25,    25,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     4,    34,     5,    32,    33,     6,     6,     7,
     7,     7,     7,     7,     7,    26,    26,    19,     8,     9,
    10,    11,    12,    13,    13,    28,    29,    29,    30,    30,
    30,    14,    15,    16,    36,    36,    17,    17,    27,    27,
    35,    35,    18,    18,    18,    18,    20,    20,    20,    21,
    21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
    21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
    21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
    21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
    22,    22,    31,    31,    24,    24,    24,    24,    23,    23,
    40,    40,    41,    41,    41,    41,    41,    41,    41,    41,
    41,    41,    41,    37,    37,    38 };
yytabelem yyr2[]={

     0,     3,     2,     3,     5,     7,     3,     9,     1,     5,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     5,     5,     5,     7,     1,    11,     3,
     7,     2,     9,     5,     2,     3,     9,     7,     5,     5,
     5,     5,     5,     1,    11,     5,     1,    11,     2,     9,
     9,     5,     5,     5,     3,     7,     3,     7,     3,     7,
     3,     7,     2,     3,     7,     9,     2,     5,     5,     2,
     2,     2,     2,     2,     7,     7,     7,     7,     7,     5,
     5,     5,     5,     5,     5,     5,    13,    13,    15,    15,
     7,     7,     7,     7,     7,     5,     7,     7,     7,     7,
     7,     7,     7,     7,     7,     7,     7,     7,     7,    15,
    13,    13,     2,     7,     2,     2,     2,     2,     1,    11,
     2,     4,     7,     7,     7,    11,     5,     7,     7,     7,
     7,     5,     5,     3,     7,     7 };
yytabelem yychk[]={

-10000000,   -39,    -1,   -40,    -2,   -41,   263,   280,   281,   257,
   258,   259,   260,   276,   282,   277,   261,   256,    -2,   -41,
   -25,   314,   -21,   -18,   -20,   -19,   306,   307,   297,   322,
   323,   324,   325,   326,   327,   328,   330,   329,   332,   334,
   333,   335,   311,   354,   301,   310,   314,   309,   315,   349,
   350,   -21,   -38,   -37,   315,   -18,   296,   -21,   -21,   -21,
   -21,   296,   296,    -3,   297,   318,   319,   320,   321,   349,
   350,   351,   352,   348,   341,   342,   343,   344,   345,   346,
   347,   296,   356,   299,   304,   -21,   -21,   -21,   -21,   -21,
   -21,   -21,   -21,   299,   299,   -19,   -20,   -19,   -19,   -19,
   -23,   -21,   -21,   -31,   -24,   314,   -20,   306,   307,   299,
   315,   315,   296,   296,   356,   356,   303,   296,   296,   296,
   296,    -4,    -5,    -8,    -9,   -10,   -11,   -12,   -14,   -15,
   -16,   -28,   -32,   -33,   -34,   274,   283,   276,   277,   278,
   275,   280,   281,   282,   285,   286,   287,   288,   -17,   314,
   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
   -21,   -21,   -21,   -21,   -21,   -21,   314,   -21,   -20,   298,
   -21,   -21,   -21,   -21,   -21,   -21,   312,   313,   302,   317,
   314,   315,   315,   -21,    -6,   314,   -21,   -21,   -21,   -13,
   -21,   -22,   337,   338,   -21,   -29,    -6,   -35,   -18,   314,
   298,   317,   300,   331,   336,   331,   336,   -21,   -24,   341,
   296,   -18,   -18,   299,   299,   -30,   -18,   354,   355,   296,
   317,   314,   -21,   -19,   -21,   -19,   296,   -19,   313,   303,
   -21,   -21,   303,   297,   297,   -18,   300,   -21,   300,   -21,
   -23,   300,    -7,   289,   301,   -26,   290,   264,   -19,   314,
   -21,   317,   317,   -21,   -18,   -18,   300,   300,   -21,   296,
   -36,   -24,   -19,   -26,   297,   296,   -21,   -21,   296,   298,
   298,   302,   317,   291,   -27,   -21,   300,   300,   -24,    -7,
   298,   317,   -21 };
yytabelem yydef[]={

     0,    -2,     1,    -2,     3,   120,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     4,   121,
     8,     6,     0,    69,    70,    71,    72,    73,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   118,     0,     0,     0,    62,    63,    66,     0,
     0,     0,     0,     0,   133,     0,   126,     0,     0,     0,
     0,   131,   132,     5,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   122,     0,     0,     0,     0,    79,    80,    81,    82,
    83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    95,     0,   112,   114,   115,   116,   117,     0,
    67,    68,   123,   124,     0,     0,     0,   127,   128,   129,
   130,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    27,     0,     0,     0,     0,
    43,     0,     0,     0,    46,    27,     0,     0,     0,    56,
    75,    76,    77,    78,    96,    97,    98,    99,   100,   101,
   102,   103,   104,   105,   107,   108,    64,     0,    37,    74,
     0,     0,    90,    91,    92,    93,    94,     0,   106,     0,
     0,   134,   135,     0,    24,    38,    39,    40,    41,    42,
    51,    52,     0,     0,    53,    45,    25,     0,    60,    23,
     7,     0,    65,     0,     0,     0,     0,     0,   113,     0,
   125,     0,     0,     0,     0,     0,    48,     0,     0,    26,
     0,    57,     0,     0,     0,     0,   118,     0,     0,     0,
     0,     0,     0,     0,     0,    61,    86,     0,    87,     0,
   119,     0,     0,    29,     0,    31,     0,     0,    34,    35,
     0,     0,     0,     0,     0,     0,    88,    89,   109,    28,
     0,    54,     0,    33,     0,    44,     0,     0,    47,    49,
    50,    30,     0,     0,     0,    58,   110,   111,    55,    32,
    36,     0,    59 };
typedef struct
#ifdef __cplusplus
	yytoktype
#endif
{ char *t_name; int t_val; } yytoktype;
#ifndef YYDEBUG
#	define YYDEBUG	0	/* don't allow debugging */
#endif

#if YYDEBUG

yytoktype yytoks[] =
{
	"GOTO",	257,
	"LET",	258,
	"STEP",	259,
	"EVAL",	260,
	"RESET",	261,
	"ASYNC",	262,
	"MODULE",	263,
	"PROCESS",	264,
	"MODTYPE",	265,
	"LAMBDA",	266,
	"CONTEXT",	267,
	"EU",	268,
	"AU",	269,
	"EBU",	270,
	"ABU",	271,
	"MINU",	272,
	"MAXU",	273,
	"VAR",	274,
	"DEFINE",	275,
	"INIT",	276,
	"TRANS",	277,
	"INVAR",	278,
	"FORMAT",	279,
	"SPEC",	280,
	"COMPUTE",	281,
	"FAIRNESS",	282,
	"ISA",	283,
	"CONSTANT",	284,
	"ASSIGN",	285,
	"INPUT",	286,
	"OUTPUT",	287,
	"IMPLEMENTS",	288,
	"BOOLEAN",	289,
	"ARRAY",	290,
	"OF",	291,
	"SCALAR",	292,
	"LIST",	293,
	"OVER",	294,
	"BDD",	295,
	"SEMI",	296,
	"LP",	297,
	"RP",	298,
	"LB",	299,
	"RB",	300,
	"LCB",	301,
	"RCB",	302,
	"EQDEF",	303,
	"TWODOTS",	304,
	"ATLINE",	305,
	"FALSEEXP",	306,
	"TRUEEXP",	307,
	"APROPOS",	308,
	"SELF",	309,
	"SIGMA",	310,
	"CASE",	311,
	"ESAC",	312,
	"COLON",	313,
	"ATOM",	314,
	"NUMBER",	315,
	"QUOTE",	316,
	"COMMA",	317,
	"IMPLIES",	318,
	"IFF",	319,
	"OR",	320,
	"AND",	321,
	"NOT",	322,
	"EX",	323,
	"AX",	324,
	"EF",	325,
	"AF",	326,
	"EG",	327,
	"AG",	328,
	"E",	329,
	"A",	330,
	"UNTIL",	331,
	"EBF",	332,
	"EBG",	333,
	"ABF",	334,
	"ABG",	335,
	"BUNTIL",	336,
	"MIN",	337,
	"MAX",	338,
	"APATH",	339,
	"EPATH",	340,
	"EQUAL",	341,
	"LT",	342,
	"GT",	343,
	"LE",	344,
	"GE",	345,
	"UNION",	346,
	"SETIN",	347,
	"MOD",	348,
	"PLUS",	349,
	"MINUS",	350,
	"TIMES",	351,
	"DIVIDE",	352,
	"UMINUS",	353,
	"NEXT",	354,
	"SMALLINIT",	355,
	"DOT",	356,
	"-unknown-",	-1	/* ends search */
};

char * yyreds[] =
{
	"-no such reduction-",
	"begin : modules",
	"begin : commandlist",
	"modules : module",
	"modules : modules module",
	"module : MODULE moduletype declarations",
	"moduletype : ATOM",
	"moduletype : ATOM LP neatomlist RP",
	"declarations : /* empty */",
	"declarations : declarations declaration",
	"declaration : var",
	"declaration : isa",
	"declaration : init",
	"declaration : trans",
	"declaration : invar",
	"declaration : define",
	"declaration : spec",
	"declaration : compute",
	"declaration : fairness",
	"declaration : assign",
	"declaration : input",
	"declaration : output",
	"declaration : implements",
	"implements : IMPLEMENTS ATOM",
	"var : VAR vlist",
	"input : INPUT vlist",
	"output : OUTPUT netermlist SEMI",
	"vlist : /* empty */",
	"vlist : vlist term COLON type SEMI",
	"type : BOOLEAN",
	"type : LCB neconstlist RCB",
	"type : usertype",
	"type : ARRAY subrange OF type",
	"type : PROCESS usertype",
	"type : subrange",
	"usertype : ATOM",
	"usertype : ATOM LP neexprlist RP",
	"subrange : number TWODOTS number",
	"isa : ISA ATOM",
	"init : INIT expr",
	"trans : TRANS expr",
	"invar : INVAR expr",
	"define : DEFINE dlist",
	"dlist : /* empty */",
	"dlist : dlist term EQDEF expr SEMI",
	"assign : ASSIGN alist",
	"alist : /* empty */",
	"alist : alist alhs EQDEF expr SEMI",
	"alhs : term",
	"alhs : NEXT LP term RP",
	"alhs : SMALLINIT LP term RP",
	"spec : SPEC expr",
	"compute : COMPUTE cexpr",
	"fairness : FAIRNESS expr",
	"neconstlist : constant",
	"neconstlist : neconstlist COMMA constant",
	"neatomlist : ATOM",
	"neatomlist : neatomlist COMMA ATOM",
	"neexprlist : expr",
	"neexprlist : neexprlist COMMA expr",
	"netermlist : term",
	"netermlist : netermlist COMMA term",
	"term : ATOM",
	"term : SELF",
	"term : term DOT ATOM",
	"term : term LB expr RB",
	"number : NUMBER",
	"number : PLUS NUMBER",
	"number : MINUS NUMBER",
	"expr : term",
	"expr : number",
	"expr : subrange",
	"expr : FALSEEXP",
	"expr : TRUEEXP",
	"expr : LP expr RP",
	"expr : expr IMPLIES expr",
	"expr : expr IFF expr",
	"expr : expr OR expr",
	"expr : expr AND expr",
	"expr : NOT expr",
	"expr : EX expr",
	"expr : AX expr",
	"expr : EF expr",
	"expr : AF expr",
	"expr : EG expr",
	"expr : AG expr",
	"expr : A LB expr UNTIL expr RB",
	"expr : E LB expr UNTIL expr RB",
	"expr : A LB expr BUNTIL subrange expr RB",
	"expr : E LB expr BUNTIL subrange expr RB",
	"expr : EBF subrange expr",
	"expr : ABF subrange expr",
	"expr : EBG subrange expr",
	"expr : ABG subrange expr",
	"expr : CASE caselist ESAC",
	"expr : NEXT expr",
	"expr : expr PLUS expr",
	"expr : expr MINUS expr",
	"expr : expr TIMES expr",
	"expr : expr DIVIDE expr",
	"expr : expr MOD expr",
	"expr : expr EQUAL expr",
	"expr : expr LT expr",
	"expr : expr GT expr",
	"expr : expr LE expr",
	"expr : expr GE expr",
	"expr : LCB neatomset RCB",
	"expr : expr UNION expr",
	"expr : expr SETIN expr",
	"expr : SIGMA LB ATOM EQUAL subrange RB expr",
	"cexpr : MIN LB expr COMMA expr RB",
	"cexpr : MAX LB expr COMMA expr RB",
	"neatomset : constant",
	"neatomset : neatomset COMMA constant",
	"constant : ATOM",
	"constant : number",
	"constant : FALSEEXP",
	"constant : TRUEEXP",
	"caselist : /* empty */",
	"caselist : expr COLON expr SEMI caselist",
	"commandlist : command",
	"commandlist : commandlist command",
	"command : SPEC expr SEMI",
	"command : COMPUTE expr SEMI",
	"command : GOTO state SEMI",
	"command : LET term EQDEF expr SEMI",
	"command : STEP SEMI",
	"command : EVAL expr SEMI",
	"command : INIT expr SEMI",
	"command : FAIRNESS expr SEMI",
	"command : TRANS expr SEMI",
	"command : RESET SEMI",
	"command : error SEMI",
	"trace : NUMBER",
	"trace : state DOT NUMBER",
	"state : trace DOT NUMBER",
};
#endif /* YYDEBUG */
# line	1 "/afs/andrew.cmu.edu/system/gamma/sun4_55/os/usr/ccs/bin/yaccpar"
/*
 * Copyright (c) 1993 by Sun Microsystems, Inc.
 */

#pragma ident	"@(#)yaccpar	6.12	93/06/07 SMI"

/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#define YYERROR		goto yyerrlab
#define YYACCEPT	return(0)
#define YYABORT		return(1)
#define YYBACKUP( newtoken, newvalue )\
{\
	if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
	{\
		yyerror( "syntax error - cannot backup" );\
		goto yyerrlab;\
	}\
	yychar = newtoken;\
	yystate = *yyps;\
	yylval = newvalue;\
	goto yynewstate;\
}
#define YYRECOVERING()	(!!yyerrflag)
#define YYNEW(type)	malloc(sizeof(type) * yynewmax)
#define YYCOPY(to, from, type) \
	(type *) memcpy(to, (char *) from, yynewmax * sizeof(type))
#define YYENLARGE( from, type) \
	(type *) realloc((char *) from, yynewmax * sizeof(type))
#ifndef YYDEBUG
#	define YYDEBUG	1	/* make debugging available */
#endif

/*
** user known globals
*/
int yydebug;			/* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG		(-10000000)

/*
** global variables used by the parser
*/
YYSTYPE *yypv;			/* top of value stack */
int *yyps;			/* top of state stack */

int yystate;			/* current state */
int yytmp;			/* extra var (lasts between blocks) */

int yynerrs;			/* number of errors */
int yyerrflag;			/* error recovery flag */
int yychar;			/* current input token number */



#ifdef YYNMBCHARS
#define YYLEX()		yycvtok(yylex())
/*
** yycvtok - return a token if i is a wchar_t value that exceeds 255.
**	If i<255, i itself is the token.  If i>255 but the neither 
**	of the 30th or 31st bit is on, i is already a token.
*/
#if defined(__STDC__) || defined(__cplusplus)
int yycvtok(int i)
#else
int yycvtok(i) int i;
#endif
{
	int first = 0;
	int last = YYNMBCHARS - 1;
	int mid;
	wchar_t j;

	if(i&0x60000000){/*Must convert to a token. */
		if( yymbchars[last].character < i ){
			return i;/*Giving up*/
		}
		while ((last>=first)&&(first>=0)) {/*Binary search loop*/
			mid = (first+last)/2;
			j = yymbchars[mid].character;
			if( j==i ){/*Found*/ 
				return yymbchars[mid].tvalue;
			}else if( j<i ){
				first = mid + 1;
			}else{
				last = mid -1;
			}
		}
		/*No entry in the table.*/
		return i;/* Giving up.*/
	}else{/* i is already a token. */
		return i;
	}
}
#else/*!YYNMBCHARS*/
#define YYLEX()		yylex()
#endif/*!YYNMBCHARS*/

/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
#if defined(__STDC__) || defined(__cplusplus)
int yyparse(void)
#else
int yyparse()
#endif
{
	register YYSTYPE *yypvt;	/* top of value stack for $vars */

#if defined(__cplusplus) || defined(lint)
/*
	hacks to please C++ and lint - goto's inside switch should never be
	executed; yypvt is set to 0 to avoid "used before set" warning.
*/
	static int __yaccpar_lint_hack__ = 0;
	switch (__yaccpar_lint_hack__)
	{
		case 1: goto yyerrlab;
		case 2: goto yynewstate;
	}
	yypvt = 0;
#endif

	/*
	** Initialize externals - yyparse may be called more than once
	*/
	yypv = &yyv[-1];
	yyps = &yys[-1];
	yystate = 0;
	yytmp = 0;
	yynerrs = 0;
	yyerrflag = 0;
	yychar = -1;

#if YYMAXDEPTH <= 0
	if (yymaxdepth <= 0)
	{
		if ((yymaxdepth = YYEXPAND(0)) <= 0)
		{
			yyerror("yacc initialization error");
			YYABORT;
		}
	}
#endif

	{
		register YYSTYPE *yy_pv;	/* top of value stack */
		register int *yy_ps;		/* top of state stack */
		register int yy_state;		/* current state */
		register int  yy_n;		/* internal state number info */
	goto yystack;	/* moved from 6 lines above to here to please C++ */

		/*
		** get globals into registers.
		** branch to here only if YYBACKUP was called.
		*/
	yynewstate:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;
		goto yy_newstate;

		/*
		** get globals into registers.
		** either we just started, or we just finished a reduction
		*/
	yystack:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;

		/*
		** top of for (;;) loop while no reductions done
		*/
	yy_stack:
		/*
		** put a state and value onto the stacks
		*/
#if YYDEBUG
		/*
		** if debugging, look up token value in list of value vs.
		** name pairs.  0 and negative (-1) are special values.
		** Note: linear search is used since time is not a real
		** consideration while debugging.
		*/
		if ( yydebug )
		{
			register int yy_i;

			printf( "State %d, token ", yy_state );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ++yy_ps >= &yys[ yymaxdepth ] )	/* room on stack? */
		{
			/*
			** reallocate and recover.  Note that pointers
			** have to be reset, or bad things will happen
			*/
			int yyps_index = (yy_ps - yys);
			int yypv_index = (yy_pv - yyv);
			int yypvt_index = (yypvt - yyv);
			int yynewmax;
#ifdef YYEXPAND
			yynewmax = YYEXPAND(yymaxdepth);
#else
			yynewmax = 2 * yymaxdepth;	/* double table size */
			if (yymaxdepth == YYMAXDEPTH)	/* first time growth */
			{
				char *newyys = (char *)YYNEW(int);
				char *newyyv = (char *)YYNEW(YYSTYPE);
				if (newyys != 0 && newyyv != 0)
				{
					yys = YYCOPY(newyys, yys, int);
					yyv = YYCOPY(newyyv, yyv, YYSTYPE);
				}
				else
					yynewmax = 0;	/* failed */
			}
			else				/* not first time */
			{
				yys = YYENLARGE(yys, int);
				yyv = YYENLARGE(yyv, YYSTYPE);
				if (yys == 0 || yyv == 0)
					yynewmax = 0;	/* failed */
			}
#endif
			if (yynewmax <= yymaxdepth)	/* tables not expanded */
			{
				yyerror( "yacc stack overflow" );
				YYABORT;
			}
			yymaxdepth = yynewmax;

			yy_ps = yys + yyps_index;
			yy_pv = yyv + yypv_index;
			yypvt = yyv + yypvt_index;
		}
		*yy_ps = yy_state;
		*++yy_pv = yyval;

		/*
		** we have a new state - find out what to do
		*/
	yy_newstate:
		if ( ( yy_n = yypact[ yy_state ] ) <= YYFLAG )
			goto yydefault;		/* simple state */
#if YYDEBUG
		/*
		** if debugging, need to mark whether new token grabbed
		*/
		yytmp = yychar < 0;
#endif
		if ( ( yychar < 0 ) && ( ( yychar = YYLEX() ) < 0 ) )
			yychar = 0;		/* reached EOF */
#if YYDEBUG
		if ( yydebug && yytmp )
		{
			register int yy_i;

			printf( "Received token " );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ( ( yy_n += yychar ) < 0 ) || ( yy_n >= YYLAST ) )
			goto yydefault;
		if ( yychk[ yy_n = yyact[ yy_n ] ] == yychar )	/*valid shift*/
		{
			yychar = -1;
			yyval = yylval;
			yy_state = yy_n;
			if ( yyerrflag > 0 )
				yyerrflag--;
			goto yy_stack;
		}

	yydefault:
		if ( ( yy_n = yydef[ yy_state ] ) == -2 )
		{
#if YYDEBUG
			yytmp = yychar < 0;
#endif
			if ( ( yychar < 0 ) && ( ( yychar = YYLEX() ) < 0 ) )
				yychar = 0;		/* reached EOF */
#if YYDEBUG
			if ( yydebug && yytmp )
			{
				register int yy_i;

				printf( "Received token " );
				if ( yychar == 0 )
					printf( "end-of-file\n" );
				else if ( yychar < 0 )
					printf( "-none-\n" );
				else
				{
					for ( yy_i = 0;
						yytoks[yy_i].t_val >= 0;
						yy_i++ )
					{
						if ( yytoks[yy_i].t_val
							== yychar )
						{
							break;
						}
					}
					printf( "%s\n", yytoks[yy_i].t_name );
				}
			}
#endif /* YYDEBUG */
			/*
			** look through exception table
			*/
			{
				register int *yyxi = yyexca;

				while ( ( *yyxi != -1 ) ||
					( yyxi[1] != yy_state ) )
				{
					yyxi += 2;
				}
				while ( ( *(yyxi += 2) >= 0 ) &&
					( *yyxi != yychar ) )
					;
				if ( ( yy_n = yyxi[1] ) < 0 )
					YYACCEPT;
			}
		}

		/*
		** check for syntax error
		*/
		if ( yy_n == 0 )	/* have an error */
		{
			/* no worry about speed here! */
			switch ( yyerrflag )
			{
			case 0:		/* new error */
				yyerror( "syntax error" );
				goto skip_init;
			yyerrlab:
				/*
				** get globals into registers.
				** we have a user generated syntax type error
				*/
				yy_pv = yypv;
				yy_ps = yyps;
				yy_state = yystate;
			skip_init:
				yynerrs++;
				/* FALLTHRU */
			case 1:
			case 2:		/* incompletely recovered error */
					/* try again... */
				yyerrflag = 3;
				/*
				** find state where "error" is a legal
				** shift action
				*/
				while ( yy_ps >= yys )
				{
					yy_n = yypact[ *yy_ps ] + YYERRCODE;
					if ( yy_n >= 0 && yy_n < YYLAST &&
						yychk[yyact[yy_n]] == YYERRCODE)					{
						/*
						** simulate shift of "error"
						*/
						yy_state = yyact[ yy_n ];
						goto yy_stack;
					}
					/*
					** current state has no shift on
					** "error", pop stack
					*/
#if YYDEBUG
#	define _POP_ "Error recovery pops state %d, uncovers state %d\n"
					if ( yydebug )
						printf( _POP_, *yy_ps,
							yy_ps[-1] );
#	undef _POP_
#endif
					yy_ps--;
					yy_pv--;
				}
				/*
				** there is no state on stack with "error" as
				** a valid shift.  give up.
				*/
				YYABORT;
			case 3:		/* no shift yet; eat a token */
#if YYDEBUG
				/*
				** if debugging, look up token in list of
				** pairs.  0 and negative shouldn't occur,
				** but since timing doesn't matter when
				** debugging, it doesn't hurt to leave the
				** tests here.
				*/
				if ( yydebug )
				{
					register int yy_i;

					printf( "Error recovery discards " );
					if ( yychar == 0 )
						printf( "token end-of-file\n" );
					else if ( yychar < 0 )
						printf( "token -none-\n" );
					else
					{
						for ( yy_i = 0;
							yytoks[yy_i].t_val >= 0;
							yy_i++ )
						{
							if ( yytoks[yy_i].t_val
								== yychar )
							{
								break;
							}
						}
						printf( "token %s\n",
							yytoks[yy_i].t_name );
					}
				}
#endif /* YYDEBUG */
				if ( yychar == 0 )	/* reached EOF. quit */
					YYABORT;
				yychar = -1;
				goto yy_newstate;
			}
		}/* end if ( yy_n == 0 ) */
		/*
		** reduction by production yy_n
		** put stack tops, etc. so things right after switch
		*/
#if YYDEBUG
		/*
		** if debugging, print the string that is the user's
		** specification of the reduction which is just about
		** to be done.
		*/
		if ( yydebug )
			printf( "Reduce by (%d) \"%s\"\n",
				yy_n, yyreds[ yy_n ] );
#endif
		yytmp = yy_n;			/* value to switch over */
		yypvt = yy_pv;			/* $vars top of value stack */
		/*
		** Look in goto table for next state
		** Sorry about using yy_state here as temporary
		** register variable, but why not, if it works...
		** If yyr2[ yy_n ] doesn't have the low order bit
		** set, then there is no action to be done for
		** this reduction.  So, no saving & unsaving of
		** registers done.  The only difference between the
		** code just after the if and the body of the if is
		** the goto yy_stack in the body.  This way the test
		** can be made before the choice of what to do is needed.
		*/
		{
			/* length of production doubled with extra bit */
			register int yy_len = yyr2[ yy_n ];

			if ( !( yy_len & 01 ) )
			{
				yy_len >>= 1;
				yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
				yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
					*( yy_ps -= yy_len ) + 1;
				if ( yy_state >= YYLAST ||
					yychk[ yy_state =
					yyact[ yy_state ] ] != -yy_n )
				{
					yy_state = yyact[ yypgo[ yy_n ] ];
				}
				goto yy_stack;
			}
			yy_len >>= 1;
			yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
			yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
				*( yy_ps -= yy_len ) + 1;
			if ( yy_state >= YYLAST ||
				yychk[ yy_state = yyact[ yy_state ] ] != -yy_n )
			{
				yy_state = yyact[ yypgo[ yy_n ] ];
			}
		}
					/* save until reenter driver code */
		yystate = yy_state;
		yyps = yy_ps;
		yypv = yy_pv;
	}
	/*
	** code supplied by user is placed in this switch
	*/
	switch( yytmp )
	{
		
case 1:
# line 72 "grammar.y"
{parse_tree = yypvt[-0].node;} break;
case 3:
# line 76 "grammar.y"
{yyval.node = cons(yypvt[-0].node,NIL);} break;
case 4:
# line 77 "grammar.y"
{yyval.node = cons(yypvt[-0].node,yypvt[-1].node);} break;
case 5:
# line 81 "grammar.y"
{yyval.node = new_node(MODULE,yypvt[-1].node,yypvt[-0].node);} break;
case 6:
# line 84 "grammar.y"
{yyval.node = new_node(MODTYPE,yypvt[-0].node,NIL);} break;
case 7:
# line 85 "grammar.y"
{yyval.node = new_node(MODTYPE,yypvt[-3].node,yypvt[-1].node);} break;
case 8:
# line 88 "grammar.y"
{yyval.node = NIL;} break;
case 9:
# line 89 "grammar.y"
{yyval.node = cons(yypvt[-0].node,yypvt[-1].node);} break;
case 23:
# line 107 "grammar.y"
{yyval.node = new_node(IMPLEMENTS,yypvt[-0].node,NIL);} break;
case 24:
# line 110 "grammar.y"
{yyval.node = new_node(VAR,yypvt[-0].node,NIL);} break;
case 25:
# line 113 "grammar.y"
{yyval.node = new_node(INPUT,yypvt[-0].node,NIL);} break;
case 26:
# line 116 "grammar.y"
{yyval.node = new_node(OUTPUT,yypvt[-1].node,NIL);} break;
case 27:
# line 119 "grammar.y"
{yyval.node = NIL;} break;
case 28:
# line 121 "grammar.y"
{yyval.node = cons(new_node(COLON,yypvt[-3].node,yypvt[-1].node),yypvt[-4].node);} break;
case 29:
# line 124 "grammar.y"
{yyval.node = new_node(BOOLEAN,NIL,NIL);} break;
case 30:
# line 125 "grammar.y"
{yyval.node = new_node(SCALAR,yypvt[-1].node,NIL);} break;
case 32:
# line 127 "grammar.y"
{yyval.node = new_node(ARRAY,yypvt[-2].node,yypvt[-0].node);} break;
case 33:
# line 128 "grammar.y"
{yyval.node = new_node(PROCESS,yypvt[-0].node,NIL);} break;
case 35:
# line 132 "grammar.y"
{yyval.node = new_node(MODTYPE,yypvt[-0].node,NIL);} break;
case 36:
# line 133 "grammar.y"
{yyval.node = new_node(MODTYPE,yypvt[-3].node,yypvt[-1].node);} break;
case 37:
# line 136 "grammar.y"
{yyval.node = new_node(TWODOTS,yypvt[-2].node,yypvt[-0].node);} break;
case 38:
# line 139 "grammar.y"
{yyval.node = new_node(ISA,yypvt[-0].node,NIL);} break;
case 39:
# line 142 "grammar.y"
{yyval.node = new_node(INIT,yypvt[-0].node,NIL);} break;
case 40:
# line 145 "grammar.y"
{yyval.node = new_node(TRANS,yypvt[-0].node,NIL);} break;
case 41:
# line 148 "grammar.y"
{yyval.node = new_node(INVAR,yypvt[-0].node,NIL);} break;
case 42:
# line 151 "grammar.y"
{yyval.node = new_node(DEFINE,yypvt[-0].node,NIL);} break;
case 43:
# line 154 "grammar.y"
{yyval.node = NIL;} break;
case 44:
# line 156 "grammar.y"
{yyval.node = cons(new_node(EQDEF,yypvt[-3].node,yypvt[-1].node),yypvt[-4].node);} break;
case 45:
# line 159 "grammar.y"
{yyval.node = new_node(ASSIGN,yypvt[-0].node,NIL);} break;
case 46:
# line 162 "grammar.y"
{yyval.node = NIL;} break;
case 47:
# line 164 "grammar.y"
{yyval.node = new_node(AND,yypvt[-4].node,new_node(EQDEF,yypvt[-3].node,yypvt[-1].node));} break;
case 49:
# line 168 "grammar.y"
{yyval.node = new_node(NEXT,yypvt[-1].node,NIL);} break;
case 50:
# line 169 "grammar.y"
{yyval.node = new_node(SMALLINIT,yypvt[-1].node,NIL);} break;
case 51:
# line 172 "grammar.y"
{yyval.node = new_node(SPEC,yypvt[-0].node,NIL);} break;
case 52:
# line 175 "grammar.y"
{yyval.node = new_node(COMPUTE,yypvt[-0].node,NIL);} break;
case 53:
# line 178 "grammar.y"
{yyval.node = new_node(FAIRNESS,yypvt[-0].node,NIL);} break;
case 54:
# line 182 "grammar.y"
{yyval.node = cons(find_atom(yypvt[-0].node),NIL);} break;
case 55:
# line 183 "grammar.y"
{yyval.node = cons(find_atom(yypvt[-0].node),yypvt[-2].node);} break;
case 56:
# line 186 "grammar.y"
{yyval.node = cons(find_atom(yypvt[-0].node),NIL);} break;
case 57:
# line 187 "grammar.y"
{yyval.node = cons(find_atom(yypvt[-0].node),yypvt[-2].node);} break;
case 58:
# line 190 "grammar.y"
{yyval.node = cons(yypvt[-0].node,NIL);} break;
case 59:
# line 191 "grammar.y"
{yyval.node = cons(yypvt[-0].node,yypvt[-2].node);} break;
case 60:
# line 194 "grammar.y"
{yyval.node = cons(yypvt[-0].node,NIL);} break;
case 61:
# line 195 "grammar.y"
{yyval.node = cons(yypvt[-0].node,yypvt[-2].node);} break;
case 63:
# line 199 "grammar.y"
{yyval.node = new_node(SELF,NIL,NIL);} break;
case 64:
# line 200 "grammar.y"
{yyval.node = new_node(DOT,yypvt[-2].node,yypvt[-0].node);} break;
case 65:
# line 201 "grammar.y"
{yyval.node = new_node(ARRAY,yypvt[-3].node,yypvt[-1].node);} break;
case 67:
# line 206 "grammar.y"
{ yyval.node = yypvt[-0].node; } break;
case 68:
# line 208 "grammar.y"
{yypvt[-0].node->left.inttype = -(yypvt[-0].node->left.inttype); yyval.node = yypvt[-0].node;} break;
case 74:
# line 215 "grammar.y"
{ yyval.node = yypvt[-1].node; } break;
case 75:
# line 216 "grammar.y"
{ yyval.node = new_node(IMPLIES,yypvt[-2].node,yypvt[-0].node); } break;
case 76:
# line 217 "grammar.y"
{ yyval.node = new_node(IFF,yypvt[-2].node,yypvt[-0].node); } break;
case 77:
# line 218 "grammar.y"
{ yyval.node = new_node(OR,yypvt[-2].node,yypvt[-0].node); } break;
case 78:
# line 219 "grammar.y"
{ yyval.node = new_node(AND,yypvt[-2].node,yypvt[-0].node); } break;
case 79:
# line 220 "grammar.y"
{ yyval.node = new_node(NOT,yypvt[-0].node,NIL); } break;
case 80:
# line 221 "grammar.y"
{ yyval.node = new_node(EX,yypvt[-0].node,NIL); } break;
case 81:
# line 222 "grammar.y"
{ yyval.node = new_node(AX,yypvt[-0].node,NIL); } break;
case 82:
# line 223 "grammar.y"
{ yyval.node = new_node(EF,yypvt[-0].node,NIL); } break;
case 83:
# line 224 "grammar.y"
{ yyval.node = new_node(AF,yypvt[-0].node,NIL); } break;
case 84:
# line 225 "grammar.y"
{ yyval.node = new_node(EG,yypvt[-0].node,NIL); } break;
case 85:
# line 226 "grammar.y"
{ yyval.node = new_node(AG,yypvt[-0].node,NIL); } break;
case 86:
# line 227 "grammar.y"
{ yyval.node = new_node(AU,yypvt[-3].node,yypvt[-1].node); } break;
case 87:
# line 228 "grammar.y"
{ yyval.node = new_node(EU,yypvt[-3].node,yypvt[-1].node); } break;
case 88:
# line 230 "grammar.y"
{ yyval.node = new_node(ABU,new_node(AU,yypvt[-4].node,yypvt[-1].node),yypvt[-2].node); } break;
case 89:
# line 232 "grammar.y"
{ yyval.node = new_node(EBU,new_node(EU,yypvt[-4].node,yypvt[-1].node),yypvt[-2].node); } break;
case 90:
# line 233 "grammar.y"
{ yyval.node = new_node(EBF,yypvt[-0].node,yypvt[-1].node); } break;
case 91:
# line 234 "grammar.y"
{ yyval.node = new_node(ABF,yypvt[-0].node,yypvt[-1].node); } break;
case 92:
# line 235 "grammar.y"
{ yyval.node = new_node(EBG,yypvt[-0].node,yypvt[-1].node); } break;
case 93:
# line 236 "grammar.y"
{ yyval.node = new_node(ABG,yypvt[-0].node,yypvt[-1].node); } break;
case 94:
# line 237 "grammar.y"
{ yyval.node = yypvt[-1].node; } break;
case 95:
# line 238 "grammar.y"
{ yyval.node = new_node(NEXT,yypvt[-0].node,NIL); } break;
case 96:
# line 239 "grammar.y"
{ yyval.node = new_node(PLUS,yypvt[-2].node,yypvt[-0].node); } break;
case 97:
# line 240 "grammar.y"
{ yyval.node = new_node(MINUS,yypvt[-2].node,yypvt[-0].node); } break;
case 98:
# line 241 "grammar.y"
{ yyval.node = new_node(TIMES,yypvt[-2].node,yypvt[-0].node); } break;
case 99:
# line 242 "grammar.y"
{ yyval.node = new_node(DIVIDE,yypvt[-2].node,yypvt[-0].node); } break;
case 100:
# line 243 "grammar.y"
{ yyval.node = new_node(MOD,yypvt[-2].node,yypvt[-0].node); } break;
case 101:
# line 244 "grammar.y"
{ yyval.node = new_node(EQUAL,yypvt[-2].node,yypvt[-0].node); } break;
case 102:
# line 245 "grammar.y"
{ yyval.node = new_node(LT,yypvt[-2].node,yypvt[-0].node); } break;
case 103:
# line 246 "grammar.y"
{ yyval.node = new_node(GT,yypvt[-2].node,yypvt[-0].node); } break;
case 104:
# line 247 "grammar.y"
{ yyval.node = new_node(LE,yypvt[-2].node,yypvt[-0].node); } break;
case 105:
# line 248 "grammar.y"
{ yyval.node = new_node(GE,yypvt[-2].node,yypvt[-0].node); } break;
case 106:
# line 249 "grammar.y"
{ yyval.node = yypvt[-1].node; } break;
case 107:
# line 250 "grammar.y"
{ yyval.node = new_node(UNION,yypvt[-2].node,yypvt[-0].node); } break;
case 108:
# line 251 "grammar.y"
{ yyval.node = new_node(SETIN,yypvt[-2].node,yypvt[-0].node); } break;
case 109:
# line 253 "grammar.y"
{ yyval.node = new_node(SIGMA,new_node(EQUAL,yypvt[-4].node,yypvt[-2].node),yypvt[-0].node); } break;
case 110:
# line 256 "grammar.y"
{ yyval.node = new_node(MINU,yypvt[-3].node,yypvt[-1].node); } break;
case 111:
# line 257 "grammar.y"
{ yyval.node = new_node(MAXU,yypvt[-3].node,yypvt[-1].node); } break;
case 113:
# line 261 "grammar.y"
{yyval.node = new_node(UNION,yypvt[-2].node,yypvt[-0].node);} break;
case 118:
# line 270 "grammar.y"
{yyval.node=new_node(TRUEEXP,NIL,NIL);} break;
case 119:
# line 272 "grammar.y"
{
	          yyval.node = new_node(CASE,new_node(COLON,yypvt[-4].node,yypvt[-2].node),yypvt[-0].node);
	        } break;
case 122:
# line 281 "grammar.y"
{catch_err(check_spec(yypvt[-1].node))} break;
case 123:
# line 282 "grammar.y"
{catch_err(compute_bound(yypvt[-1].node))} break;
case 124:
# line 283 "grammar.y"
{catch_err(goto_state(yypvt[-1].node))} break;
case 125:
# line 284 "grammar.y"
{catch_err(assign_command(yypvt[-3].node,yypvt[-1].node))} break;
case 126:
# line 285 "grammar.y"
{catch_err(single_step())} break;
case 127:
# line 286 "grammar.y"
{catch_err(eval_command(yypvt[-1].node))} break;
case 128:
# line 287 "grammar.y"
{catch_err(init_command(yypvt[-1].node))} break;
case 129:
# line 288 "grammar.y"
{catch_err(fair_command(yypvt[-1].node))} break;
case 130:
# line 289 "grammar.y"
{catch_err(trans_command(yypvt[-1].node))} break;
case 131:
# line 290 "grammar.y"
{catch_err(reset_command())} break;
case 132:
# line 291 "grammar.y"
{yyerrok;} break;
case 133:
# line 294 "grammar.y"
{yyval.node = (node_ptr)find_atom(yypvt[-0].node);} break;
case 134:
# line 295 "grammar.y"
{yyval.node = find_node(DOT,yypvt[-2].node,find_atom(yypvt[-0].node));} break;
case 135:
# line 298 "grammar.y"
{yyval.node = find_node(DOT,yypvt[-2].node,find_atom(yypvt[-0].node));} break;
# line	532 "/afs/andrew.cmu.edu/system/gamma/sun4_55/os/usr/ccs/bin/yaccpar"
	}
	goto yystack;		/* reset registers in driver code */
}

