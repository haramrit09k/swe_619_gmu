#include "lost.h"
#include "node.h"

#include <stdio.h>
#include <stdlib.h>
# define U(x) x
# define NLSTATE yyprevious=YYNEWLINE
# define BEGIN yybgin = yysvec + 1 +
# define INITIAL 0
# define YYLERR yysvec
# define YYSTATE (yyestate-yysvec-1)
# define YYOPTIM 1
# define YYLMAX BUFSIZ
#ifndef __cplusplus
# define output(c) (void)putc(c,yyout)
#else
# define lex_output(c) (void)putc(c,yyout)
#endif

#if defined(__cplusplus) || defined(__STDC__)

#if defined(__cplusplus) && defined(__EXTERN_C__)
extern "C" {
#endif
	int yyback(int *, int);
	int yyinput(void);
	int yylook(void);
	void yyoutput(int);
	int yyracc(int);
	int yyreject(void);
	void yyunput(int);
	int yylex(void);
#ifdef YYLEX_E
	void yywoutput(wchar_t);
	wchar_t yywinput(void);
#endif
#ifndef yyless
	int yyless(int);
#endif
#ifndef yywrap
	int yywrap(void);
#endif
#ifdef LEXDEBUG
	void allprint(char);
	void sprint(char *);
#endif
#if defined(__cplusplus) && defined(__EXTERN_C__)
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
	void exit(int);
#ifdef __cplusplus
}
#endif

#endif
# define unput(c) {yytchar= (c);if(yytchar=='\n')yylineno--;*yysptr++=yytchar;}
# define yymore() (yymorfg=1)
#ifndef __cplusplus
# define input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
#else
# define lex_input() (((yytchar=yysptr>yysbuf?U(*--yysptr):getc(yyin))==10?(yylineno++,yytchar):yytchar)==EOF?0:yytchar)
#endif
#define ECHO fprintf(yyout, "%s",yytext)
# define REJECT { nstr = yyreject(); goto yyfussy;}
int yyleng;
char yytext[YYLMAX];
int yymorfg;
extern char *yysptr, yysbuf[];
int yytchar;
FILE *yyin = {stdin}, *yyout = {stdout};
extern int yylineno;
struct yysvf { 
	struct yywork *yystoff;
	struct yysvf *yyother;
	int *yystops;};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;
#include "node.h"
#include "y.tab.h"
# define YYNEWLINE 10
yylex(){
int nstr; extern int yyprevious;
#ifdef __cplusplus
/* to avoid CC and lint complaining yyfussy not being used ...*/
static int __lex_hack = 0;
if (__lex_hack) goto yyfussy;
#endif
while((nstr = yylook()) >= 0)
yyfussy: switch(nstr){
case 0:
if(yywrap()) return(0); break;
case 1:

# line 9 "input.lex"
                ;
break;
case 2:

# line 10 "input.lex"
               ;
break;
case 3:

# line 11 "input.lex"
                sscanf(yytext,"# %d",&yylineno);
break;
case 4:

# line 12 "input.lex"
                return(ASYNC);
break;
case 5:

# line 13 "input.lex"
               return(MODULE);
break;
case 6:

# line 14 "input.lex"
              return(PROCESS);
break;
case 7:

# line 15 "input.lex"
               return(DEFINE);
break;
case 8:

# line 16 "input.lex"
                  return(VAR);
break;
case 9:

# line 17 "input.lex"
             return(CONSTANT);
break;
case 10:

# line 18 "input.lex"
                 return(INIT);
break;
case 11:

# line 19 "input.lex"
                return(TRANS);
break;
case 12:

# line 20 "input.lex"
                return(INVAR);
break;
case 13:

# line 21 "input.lex"
               return(FORMAT);
break;
case 14:

# line 22 "input.lex"
                 return(SPEC);
break;
case 15:

# line 23 "input.lex"
              return(COMPUTE);
break;
case 16:

# line 24 "input.lex"
             return(FAIRNESS);
break;
case 17:

# line 25 "input.lex"
                  return(ISA);
break;
case 18:

# line 26 "input.lex"
               return(ASSIGN);
break;
case 19:

# line 27 "input.lex"
                return(INPUT);
break;
case 20:

# line 28 "input.lex"
               return(OUTPUT);
break;
case 21:

# line 29 "input.lex"
           return(IMPLEMENTS);
break;
case 22:

# line 30 "input.lex"
                 return(GOTO);
break;
case 23:

# line 31 "input.lex"
                  return(LET);
break;
case 24:

# line 32 "input.lex"
                 return(STEP);
break;
case 25:

# line 33 "input.lex"
                 return(EVAL);
break;
case 26:

# line 34 "input.lex"
                return(RESET);
break;
case 27:

# line 35 "input.lex"
                return(ARRAY);
break;
case 28:

# line 36 "input.lex"
                   return(OF);
break;
case 29:

# line 37 "input.lex"
              return(BOOLEAN);
break;
case 30:

# line 38 "input.lex"
                   return(EX);
break;
case 31:

# line 39 "input.lex"
                   return(AX);
break;
case 32:

# line 40 "input.lex"
                   return(EF);
break;
case 33:

# line 41 "input.lex"
                   return(AF);
break;
case 34:

# line 42 "input.lex"
                   return(EG);
break;
case 35:

# line 43 "input.lex"
                   return(AG);
break;
case 36:

# line 44 "input.lex"
                    return(E);
break;
case 37:

# line 45 "input.lex"
                    return(A);
break;
case 38:

# line 46 "input.lex"
                    return(UNTIL);
break;
case 39:

# line 47 "input.lex"
                   return(BUNTIL);
break;
case 40:

# line 48 "input.lex"
                  return(EBF);
break;
case 41:

# line 49 "input.lex"
                  return(ABF);
break;
case 42:

# line 50 "input.lex"
                  return(EBG);
break;
case 43:

# line 51 "input.lex"
                  return(ABG);
break;
case 44:

# line 52 "input.lex"
                  return(MIN);
break;
case 45:

# line 53 "input.lex"
                  return(MAX);
break;
case 46:

# line 54 "input.lex"
                    return(LP);
break;
case 47:

# line 55 "input.lex"
                    return(RP);
break;
case 48:

# line 56 "input.lex"
                    return(LB);
break;
case 49:

# line 57 "input.lex"
                    return(RB);
break;
case 50:

# line 58 "input.lex"
                    return(LCB);
break;
case 51:

# line 59 "input.lex"
                    return(RCB);
break;
case 52:

# line 60 "input.lex"
                {
				yylval.node = new_node(FALSEEXP,NIL,NIL);
				return(FALSEEXP);
			}
break;
case 53:

# line 64 "input.lex"
                 {
				yylval.node = new_node(TRUEEXP,NIL,NIL);
				return(TRUEEXP);
			}
break;
case 54:

# line 68 "input.lex"
              return(APROPOS);
break;
case 55:

# line 69 "input.lex"
                 return(CASE);
break;
case 56:

# line 70 "input.lex"
                 return(ESAC);
break;
case 57:

# line 71 "input.lex"
                   return(EQDEF);
break;
case 58:

# line 72 "input.lex"
                    return(PLUS);
break;
case 59:

# line 73 "input.lex"
                    return(MINUS);
break;
case 60:

# line 74 "input.lex"
                    return(TIMES);
break;
case 61:

# line 75 "input.lex"
                    return(DIVIDE);
break;
case 62:

# line 76 "input.lex"
                  return(MOD);
break;
case 63:

# line 77 "input.lex"
                    return(EQUAL);
break;
case 64:

# line 78 "input.lex"
                   return(LE);
break;
case 65:

# line 79 "input.lex"
                   return(GE);
break;
case 66:

# line 80 "input.lex"
                    return(LT);
break;
case 67:

# line 81 "input.lex"
                    return(GT);
break;
case 68:

# line 82 "input.lex"
                 return(NEXT);
break;
case 69:

# line 83 "input.lex"
                 return(SMALLINIT);
break;
case 70:

# line 84 "input.lex"
                return(SIGMA);
break;
case 71:

# line 85 "input.lex"
                 return(SELF);
break;
case 72:

# line 86 "input.lex"
                return(UNION);
break;
case 73:

# line 87 "input.lex"
                   return(SETIN);
break;
case 74:

# line 88 "input.lex"
                   return(TWODOTS);
break;
case 75:

# line 89 "input.lex"
                    return(DOT);
break;
case 76:

# line 90 "input.lex"
                   return(IMPLIES);
break;
case 77:

# line 91 "input.lex"
                  return(IFF);
break;
case 78:

# line 92 "input.lex"
                    return(OR);
break;
case 79:

# line 93 "input.lex"
                    return(AND);
break;
case 80:

# line 94 "input.lex"
                    return(NOT);
break;
case 81:

# line 95 "input.lex"
 { 
                             yylval.node = new_node(ATOM,
                                                     find_string(yytext),NIL);
                             return(ATOM);
                           }
break;
case 82:

# line 100 "input.lex"
                 {
                          int i;
                          sscanf(yytext,"%d",&i);
                          yylval.node = new_node(NUMBER,i,NIL);
                          return(NUMBER);
                        }
break;
case 83:

# line 106 "input.lex"
             {
                          yylval.node = new_node(QUOTE,
                                                  find_string(yytext),NIL);
                             return(QUOTE);
                        }
break;
case 84:

# line 111 "input.lex"
                    return(COMMA);
break;
case 85:

# line 112 "input.lex"
                    return(COLON);
break;
case 86:

# line 113 "input.lex"
                    return(SEMI);
break;
case 87:

# line 114 "input.lex"
		rpterr("illegal character");
break;
case -1:
break;
default:
(void)fprintf(yyout,"bad switch yylook %d",nstr);
} return(0); }
/* end of yylex */

int yyvstop[] = {
0,

87,
0,

1,
87,
0,

1,
0,

80,
87,
0,

87,
0,

87,
0,

79,
87,
0,

46,
87,
0,

47,
87,
0,

60,
87,
0,

58,
87,
0,

84,
87,
0,

59,
87,
0,

75,
87,
0,

61,
87,
0,

82,
87,
0,

85,
87,
0,

86,
87,
0,

66,
87,
0,

63,
87,
0,

67,
87,
0,

37,
81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

36,
81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

38,
81,
87,
0,

81,
87,
0,

48,
87,
0,

49,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

81,
87,
0,

50,
87,
0,

78,
87,
0,

51,
87,
0,

83,
0,

3,
0,

76,
0,

74,
0,

82,
0,

57,
0,

64,
0,

65,
0,

81,
0,

81,
0,

33,
81,
0,

35,
81,
0,

81,
0,

31,
81,
0,

39,
81,
0,

81,
0,

81,
0,

81,
0,

32,
81,
0,

34,
81,
0,

81,
0,

30,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

73,
81,
0,

81,
0,

81,
0,

28,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

2,
0,

77,
0,

41,
81,
0,

43,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

40,
81,
0,

42,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

17,
81,
0,

23,
81,
0,

45,
81,
0,

44,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

8,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

62,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

25,
81,
0,

81,
0,

81,
0,

81,
0,

22,
81,
0,

81,
0,

10,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

14,
81,
0,

24,
81,
0,

81,
0,

53,
81,
0,

81,
0,

81,
0,

81,
0,

55,
81,
0,

56,
81,
0,

69,
81,
0,

68,
81,
0,

81,
0,

71,
81,
0,

81,
0,

81,
0,

81,
0,

4,
81,
0,

81,
0,

81,
0,

81,
0,

81,
0,

52,
81,
0,

81,
0,

81,
0,

19,
81,
0,

12,
81,
0,

81,
0,

81,
0,

26,
81,
0,

11,
81,
0,

81,
0,

27,
81,
0,

81,
0,

81,
0,

70,
81,
0,

72,
81,
0,

18,
81,
0,

81,
0,

81,
0,

7,
81,
0,

81,
0,

13,
81,
0,

81,
0,

5,
81,
0,

20,
81,
0,

81,
0,

81,
0,

81,
0,

15,
81,
0,

81,
0,

81,
0,

81,
0,

54,
81,
0,

29,
81,
0,

6,
81,
0,

9,
81,
0,

16,
81,
0,

81,
0,

81,
0,

21,
81,
0,
0};
# define YYTYPE unsigned char
struct yywork { YYTYPE verify, advance; } yycrank[] = {
0,0,	0,0,	1,3,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	1,4,	1,5,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	1,6,	1,7,	
1,8,	1,3,	0,0,	1,9,	
0,0,	1,10,	1,11,	1,12,	
1,13,	1,14,	1,15,	1,16,	
1,17,	1,18,	16,63,	0,0,	
0,0,	0,0,	0,0,	0,0,	
0,0,	0,0,	0,0,	1,19,	
1,20,	1,21,	1,22,	1,23,	
19,65,	23,68,	1,24,	1,25,	
1,26,	1,27,	1,28,	1,29,	
1,30,	1,31,	1,32,	1,31,	
1,31,	1,33,	1,34,	1,31,	
1,35,	1,31,	1,31,	1,36,	
1,37,	1,38,	1,39,	1,40,	
1,31,	1,31,	1,31,	1,31,	
1,41,	66,113,	1,42,	0,0,	
1,31,	0,0,	1,43,	1,44,	
1,45,	1,31,	1,46,	1,31,	
1,31,	1,31,	1,47,	1,31,	
1,31,	1,31,	1,48,	1,49,	
1,50,	1,51,	1,31,	1,31,	
1,52,	1,31,	1,53,	1,31,	
1,31,	1,31,	1,31,	1,31,	
1,54,	1,55,	1,56,	2,6,	
15,61,	0,0,	2,3,	21,66,	
2,9,	0,0,	2,10,	2,11,	
2,12,	2,13,	2,14,	2,15,	
2,16,	2,17,	0,0,	0,0,	
0,0,	15,62,	0,0,	21,67,	
0,0,	0,0,	0,0,	0,0,	
2,19,	2,20,	2,21,	2,22,	
2,23,	0,0,	0,0,	0,0,	
2,25,	2,26,	2,27,	2,28,	
2,29,	2,30,	2,31,	2,32,	
2,31,	2,31,	2,33,	2,34,	
2,31,	2,35,	2,31,	2,31,	
2,36,	2,37,	2,38,	2,39,	
2,40,	2,31,	2,31,	2,31,	
2,31,	2,41,	0,0,	2,42,	
0,0,	2,31,	0,0,	2,43,	
2,44,	2,45,	2,31,	2,46,	
2,31,	2,31,	2,31,	2,47,	
2,31,	2,31,	2,31,	2,48,	
2,49,	2,50,	2,51,	2,31,	
2,31,	2,52,	2,31,	2,53,	
2,31,	2,31,	2,31,	2,31,	
2,31,	2,54,	2,55,	2,56,	
7,57,	0,0,	8,59,	0,0,	
0,0,	0,0,	0,0,	0,0,	
7,57,	7,57,	8,59,	8,60,	
18,64,	18,64,	18,64,	18,64,	
18,64,	18,64,	18,64,	18,64,	
18,64,	18,64,	0,0,	25,69,	
0,0,	0,0,	0,0,	25,69,	
25,69,	0,0,	0,0,	0,0,	
0,0,	7,58,	7,57,	8,59,	
8,59,	0,0,	24,69,	24,69,	
25,69,	0,0,	25,75,	0,0,	
0,0,	25,69,	0,0,	7,57,	
24,69,	8,59,	0,0,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	0,0,	0,0,	0,0,	
7,57,	0,0,	8,59,	0,0,	
24,69,	24,70,	24,69,	24,69,	
24,69,	24,71,	24,72,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,73,	24,69,	
24,69,	24,69,	24,69,	24,74,	
24,69,	24,69,	0,0,	0,0,	
0,0,	0,0,	24,69,	0,0,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	24,69,	24,69,	
24,69,	24,69,	26,69,	0,0,	
0,0,	27,69,	26,69,	26,69,	
27,77,	27,69,	27,69,	0,0,	
28,78,	0,0,	0,0,	26,76,	
28,79,	28,80,	0,0,	26,69,	
0,0,	0,0,	27,69,	0,0,	
26,69,	29,83,	29,69,	27,69,	
0,0,	28,69,	29,69,	29,69,	
28,81,	30,69,	28,82,	0,0,	
31,69,	30,69,	30,69,	29,84,	
31,69,	31,69,	0,0,	29,69,	
0,0,	0,0,	30,85,	0,0,	
29,69,	0,0,	30,69,	0,0,	
32,69,	31,69,	0,0,	30,69,	
32,69,	32,69,	31,69,	0,0,	
0,0,	0,0,	33,69,	32,86,	
32,87,	33,89,	33,69,	33,69,	
0,0,	32,88,	0,0,	0,0,	
34,90,	34,69,	32,69,	0,0,	
0,0,	34,69,	34,69,	33,69,	
34,91,	0,0,	0,0,	35,69,	
33,69,	0,0,	34,92,	35,69,	
35,69,	36,69,	34,69,	0,0,	
36,94,	36,69,	36,69,	34,69,	
0,0,	0,0,	0,0,	37,69,	
35,69,	0,0,	35,93,	37,69,	
37,69,	35,69,	36,69,	0,0,	
0,0,	0,0,	38,69,	36,69,	
0,0,	37,95,	38,69,	38,69,	
37,69,	37,96,	39,69,	40,98,	
40,69,	37,69,	39,69,	39,69,	
40,69,	40,69,	38,97,	38,69,	
0,0,	43,69,	0,0,	0,0,	
38,69,	43,69,	43,69,	39,69,	
0,0,	40,69,	0,0,	44,69,	
39,69,	0,0,	40,69,	44,69,	
44,69,	45,69,	43,69,	0,0,	
46,69,	45,69,	45,69,	43,69,	
46,69,	46,69,	0,0,	0,0,	
44,69,	0,0,	0,0,	0,0,	
0,0,	44,69,	45,69,	0,0,	
47,69,	46,69,	0,0,	45,69,	
47,69,	47,69,	46,69,	0,0,	
0,0,	0,0,	48,69,	43,99,	
45,102,	43,100,	48,69,	48,69,	
0,0,	47,69,	0,0,	49,69,	
44,101,	50,69,	47,69,	49,69,	
49,69,	50,69,	50,69,	48,69,	
0,0,	0,0,	51,69,	0,0,	
48,69,	46,103,	51,69,	51,69,	
49,69,	0,0,	50,69,	0,0,	
0,0,	49,69,	0,0,	50,69,	
47,104,	52,69,	0,0,	51,69,	
0,0,	52,69,	52,69,	0,0,	
51,69,	0,0,	49,106,	48,105,	
0,0,	50,107,	0,0,	53,69,	
61,61,	0,0,	52,69,	53,69,	
53,69,	0,0,	69,69,	52,69,	
61,61,	61,112,	69,69,	69,69,	
0,0,	0,0,	0,0,	0,0,	
53,69,	0,0,	51,108,	0,0,	
52,109,	53,69,	70,69,	69,69,	
52,110,	0,0,	70,114,	70,115,	
69,69,	0,0,	0,0,	71,69,	
0,0,	61,61,	61,61,	71,69,	
71,69,	72,69,	0,0,	70,69,	
0,0,	72,69,	72,69,	53,111,	
70,69,	73,69,	0,0,	61,61,	
71,69,	73,69,	73,69,	0,0,	
74,69,	71,69,	72,69,	0,0,	
74,69,	74,69,	0,0,	72,69,	
0,0,	75,69,	73,116,	0,0,	
61,61,	75,69,	75,69,	73,69,	
73,117,	74,69,	0,0,	0,0,	
77,69,	0,0,	74,69,	76,69,	
77,120,	77,69,	75,69,	76,69,	
76,69,	0,0,	0,0,	75,69,	
0,0,	0,0,	76,118,	76,119,	
0,0,	77,69,	0,0,	78,69,	
76,69,	0,0,	77,69,	78,121,	
78,122,	76,69,	79,69,	0,0,	
80,69,	0,0,	79,69,	79,69,	
80,69,	80,69,	81,123,	81,69,	
78,69,	0,0,	0,0,	81,69,	
81,69,	78,69,	82,69,	79,69,	
0,0,	80,69,	82,69,	82,69,	
79,69,	84,69,	80,69,	83,69,	
81,69,	84,69,	84,69,	83,69,	
83,69,	81,69,	83,124,	82,69,	
0,0,	83,125,	0,0,	0,0,	
82,69,	84,126,	84,69,	0,0,	
83,69,	0,0,	85,69,	84,69,	
86,69,	83,69,	85,69,	85,69,	
86,69,	86,69,	0,0,	88,132,	
88,69,	0,0,	0,0,	0,0,	
88,69,	88,69,	86,128,	85,69,	
85,127,	86,69,	0,0,	87,69,	
85,69,	0,0,	86,69,	87,69,	
87,69,	88,69,	87,129,	89,69,	
0,0,	0,0,	88,69,	89,69,	
89,69,	87,130,	0,0,	0,0,	
87,69,	0,0,	90,69,	87,131,	
0,0,	87,69,	90,69,	90,69,	
89,69,	89,133,	91,69,	0,0,	
0,0,	89,69,	91,69,	91,69,	
92,69,	0,0,	92,136,	90,69,	
92,69,	92,69,	91,135,	0,0,	
90,134,	93,69,	0,0,	91,69,	
0,0,	93,69,	93,69,	94,69,	
91,69,	92,69,	0,0,	94,69,	
94,69,	0,0,	92,69,	0,0,	
0,0,	95,69,	93,69,	93,137,	
95,139,	95,69,	95,69,	93,69,	
94,138,	0,0,	0,0,	96,69,	
0,0,	94,69,	96,140,	96,69,	
96,69,	0,0,	95,69,	97,141,	
97,69,	0,0,	0,0,	95,69,	
97,69,	97,69,	0,0,	98,69,	
96,69,	0,0,	99,69,	98,69,	
98,69,	96,69,	99,69,	99,69,	
100,69,	97,69,	0,0,	97,142,	
100,69,	100,69,	97,69,	98,143,	
98,69,	0,0,	101,69,	99,69,	
0,0,	98,69,	101,69,	101,69,	
99,69,	100,69,	0,0,	102,69,	
0,0,	103,69,	100,69,	102,69,	
102,69,	103,69,	103,69,	101,69,	
0,0,	105,69,	0,0,	0,0,	
101,69,	105,69,	105,69,	0,0,	
102,69,	0,0,	103,69,	0,0,	
104,69,	102,69,	99,144,	103,69,	
104,69,	104,69,	105,69,	0,0,	
100,145,	106,69,	0,0,	105,69,	
103,148,	106,69,	106,69,	101,146,	
107,69,	104,69,	0,0,	0,0,	
107,69,	107,69,	104,69,	105,150,	
0,0,	108,69,	106,69,	0,0,	
102,147,	108,69,	108,69,	106,69,	
109,69,	107,69,	0,0,	0,0,	
109,69,	109,69,	107,69,	104,149,	
110,69,	0,0,	108,69,	0,0,	
110,69,	110,69,	0,0,	108,69,	
0,0,	109,69,	0,0,	111,69,	
0,0,	0,0,	109,69,	111,69,	
111,69,	110,69,	0,0,	0,0,	
0,0,	114,69,	110,69,	106,151,	
0,0,	114,69,	114,69,	115,69,	
111,69,	0,0,	108,152,	115,69,	
115,69,	111,69,	109,153,	116,69,	
0,0,	110,154,	114,69,	116,69,	
116,69,	117,69,	116,156,	114,69,	
115,69,	117,69,	117,69,	0,0,	
0,0,	115,69,	111,155,	118,69,	
116,69,	117,157,	0,0,	118,69,	
118,69,	116,69,	117,69,	0,0,	
0,0,	0,0,	119,69,	117,69,	
0,0,	118,158,	119,69,	119,69,	
118,69,	0,0,	120,69,	0,0,	
0,0,	118,69,	120,69,	120,69,	
121,69,	120,160,	122,69,	119,159,	
121,69,	121,69,	122,69,	122,69,	
119,69,	0,0,	123,69,	120,69,	
0,0,	0,0,	123,69,	123,69,	
120,69,	121,69,	0,0,	122,69,	
123,161,	124,69,	121,69,	0,0,	
122,69,	124,69,	124,69,	123,69,	
0,0,	125,69,	0,0,	126,69,	
123,69,	125,69,	125,69,	126,69,	
126,69,	124,162,	124,69,	0,0,	
0,0,	0,0,	126,164,	124,69,	
0,0,	127,69,	125,163,	0,0,	
126,69,	127,69,	127,69,	125,69,	
129,69,	126,69,	0,0,	128,69,	
129,69,	129,69,	127,165,	128,69,	
128,69,	0,0,	127,69,	0,0,	
0,0,	128,166,	0,0,	127,69,	
0,0,	129,69,	129,167,	130,69,	
128,69,	0,0,	129,69,	130,69,	
130,69,	128,69,	131,169,	131,69,	
0,0,	132,69,	0,0,	131,69,	
131,69,	132,69,	132,69,	133,69,	
130,69,	0,0,	130,168,	133,69,	
133,69,	130,69,	0,0,	134,69,	
131,69,	0,0,	132,69,	134,69,	
134,69,	131,69,	135,69,	132,69,	
133,69,	0,0,	135,69,	135,69,	
0,0,	133,69,	136,69,	0,0,	
134,69,	0,0,	136,69,	136,69,	
137,69,	134,69,	0,0,	135,69,	
137,69,	137,69,	0,0,	0,0,	
135,69,	0,0,	0,0,	136,69,	
0,0,	136,170,	137,171,	138,69,	
136,69,	137,69,	138,172,	138,69,	
138,69,	140,69,	137,69,	139,69,	
139,173,	140,69,	140,69,	139,69,	
139,69,	141,69,	0,0,	0,0,	
138,69,	141,69,	141,69,	140,174,	
0,0,	138,69,	140,69,	0,0,	
139,69,	141,175,	0,0,	140,69,	
142,69,	139,69,	141,69,	142,176,	
142,69,	142,69,	143,69,	141,69,	
144,69,	0,0,	143,69,	143,69,	
144,69,	144,69,	145,69,	0,0,	
146,69,	142,69,	145,69,	145,69,	
146,69,	146,69,	142,69,	143,69,	
0,0,	144,69,	0,0,	0,0,	
143,69,	0,0,	144,69,	145,69,	
0,0,	146,69,	0,0,	147,69,	
145,69,	0,0,	146,69,	147,69,	
147,69,	0,0,	148,69,	0,0,	
149,69,	145,178,	148,69,	148,69,	
149,69,	149,69,	150,69,	0,0,	
147,69,	144,177,	150,69,	150,69,	
0,0,	147,69,	146,179,	148,69,	
0,0,	149,69,	0,0,	0,0,	
148,69,	0,0,	149,69,	150,69,	
0,0,	151,69,	147,180,	0,0,	
150,69,	151,69,	151,69,	148,181,	
152,69,	0,0,	153,69,	0,0,	
152,69,	152,69,	153,69,	153,69,	
154,69,	0,0,	151,69,	0,0,	
154,69,	154,69,	0,0,	151,69,	
0,0,	152,69,	149,182,	153,69,	
0,0,	0,0,	152,69,	155,69,	
153,69,	154,69,	0,0,	155,69,	
155,69,	0,0,	154,69,	156,69,	
0,0,	152,184,	0,0,	156,69,	
156,188,	0,0,	153,185,	0,0,	
155,69,	0,0,	0,0,	151,183,	
0,0,	155,69,	0,0,	0,0,	
156,69,	0,0,	0,0,	154,186,	
0,0,	156,69,	157,69,	157,189,	
158,69,	0,0,	157,69,	157,69,	
158,69,	158,69,	159,69,	0,0,	
0,0,	160,69,	159,69,	159,69,	
155,187,	160,69,	160,69,	157,69,	
0,0,	158,69,	0,0,	158,190,	
157,69,	160,192,	158,69,	159,69,	
159,191,	161,69,	160,69,	0,0,	
159,69,	161,69,	161,69,	160,69,	
162,69,	0,0,	0,0,	163,69,	
162,69,	162,69,	163,194,	163,69,	
163,69,	0,0,	161,69,	0,0,	
162,193,	164,195,	164,69,	161,69,	
0,0,	162,69,	164,69,	164,69,	
163,69,	0,0,	162,69,	165,69,	
0,0,	163,69,	0,0,	165,69,	
165,69,	166,69,	0,0,	164,69,	
166,196,	166,69,	166,69,	0,0,	
164,69,	167,69,	0,0,	168,69,	
165,69,	167,69,	167,69,	168,69,	
168,69,	165,69,	166,69,	0,0,	
169,69,	0,0,	0,0,	166,69,	
169,69,	169,69,	167,69,	0,0,	
168,69,	168,197,	170,69,	167,69,	
0,0,	168,69,	170,69,	170,69,	
169,198,	169,69,	0,0,	171,69,	
170,199,	0,0,	169,69,	171,69,	
171,69,	172,69,	0,0,	170,69,	
0,0,	172,69,	172,69,	0,0,	
170,69,	0,0,	0,0,	173,69,	
171,69,	0,0,	171,200,	173,69,	
173,69,	171,69,	172,69,	172,201,	
174,69,	0,0,	175,69,	172,69,	
174,69,	174,69,	175,69,	175,69,	
173,69,	0,0,	176,69,	0,0,	
0,0,	173,69,	176,69,	176,69,	
177,69,	174,69,	0,0,	175,202,	
177,69,	177,69,	174,69,	0,0,	
175,69,	178,69,	0,0,	176,69,	
0,0,	178,69,	178,69,	179,69,	
176,69,	177,69,	0,0,	179,69,	
179,69,	0,0,	177,69,	180,69,	
0,0,	181,69,	178,69,	180,69,	
180,69,	181,69,	181,69,	178,69,	
179,69,	0,0,	182,69,	0,0,	
0,0,	179,69,	182,69,	182,69,	
180,69,	0,0,	181,69,	0,0,	
183,69,	180,69,	177,203,	181,69,	
183,69,	183,69,	179,205,	182,69,	
0,0,	184,69,	0,0,	185,69,	
182,69,	184,69,	184,69,	185,69,	
185,69,	183,69,	0,0,	186,69,	
178,204,	0,0,	183,69,	186,69,	
186,69,	187,69,	184,69,	0,0,	
185,69,	187,69,	187,69,	184,69,	
0,0,	185,69,	188,69,	0,0,	
186,69,	0,0,	188,69,	188,69,	
0,0,	186,69,	187,69,	0,0,	
184,206,	0,0,	188,209,	187,69,	
189,69,	0,0,	186,207,	188,69,	
189,69,	189,69,	190,69,	0,0,	
188,69,	0,0,	190,69,	190,69,	
0,0,	191,211,	191,69,	0,0,	
0,0,	189,69,	191,69,	191,69,	
0,0,	187,208,	189,69,	190,69,	
190,210,	0,0,	0,0,	0,0,	
190,69,	192,69,	0,0,	191,69,	
192,212,	192,69,	192,69,	193,69,	
191,69,	194,69,	193,213,	193,69,	
193,69,	194,69,	194,69,	195,69,	
0,0,	196,69,	192,69,	195,69,	
195,69,	196,69,	196,69,	192,69,	
193,69,	0,0,	194,69,	0,0,	
196,215,	193,69,	0,0,	194,69,	
195,69,	195,214,	196,69,	0,0,	
197,69,	195,69,	198,69,	196,69,	
197,69,	197,69,	198,69,	198,69,	
199,69,	0,0,	200,69,	199,216,	
199,69,	199,69,	200,69,	200,69,	
201,69,	197,69,	0,0,	198,69,	
201,69,	201,69,	197,69,	0,0,	
198,69,	199,69,	0,0,	200,69,	
200,217,	0,0,	199,69,	202,69,	
200,69,	201,69,	0,0,	202,69,	
202,69,	203,69,	201,69,	204,69,	
0,0,	203,69,	203,69,	204,69,	
204,69,	205,69,	0,0,	206,69,	
202,69,	205,69,	205,69,	206,69,	
206,69,	202,69,	203,69,	0,0,	
204,69,	0,0,	0,0,	203,69,	
0,0,	204,69,	205,69,	0,0,	
206,69,	0,0,	207,69,	205,69,	
208,69,	206,69,	207,69,	207,69,	
208,69,	208,69,	0,0,	209,69,	
205,219,	0,0,	0,0,	209,69,	
209,69,	0,0,	203,218,	207,69,	
0,0,	208,69,	0,0,	0,0,	
207,69,	211,69,	208,69,	0,0,	
209,69,	211,69,	211,69,	210,69,	
206,220,	209,69,	210,221,	210,69,	
210,69,	211,222,	0,0,	212,69,	
0,0,	213,69,	211,69,	212,69,	
212,69,	213,69,	213,69,	211,69,	
210,69,	0,0,	214,69,	0,0,	
0,0,	210,69,	214,69,	214,69,	
212,69,	0,0,	213,223,	0,0,	
0,0,	212,69,	0,0,	213,69,	
0,0,	215,69,	0,0,	214,69,	
215,224,	215,69,	215,69,	216,69,	
214,69,	217,69,	0,0,	216,69,	
216,69,	217,69,	217,69,	218,69,	
0,0,	219,69,	215,69,	218,69,	
218,69,	219,69,	219,69,	215,69,	
216,69,	0,0,	217,69,	0,0,	
0,0,	216,69,	0,0,	217,69,	
218,69,	0,0,	219,69,	0,0,	
220,69,	218,69,	221,69,	219,69,	
220,69,	220,69,	221,69,	221,69,	
0,0,	222,69,	0,0,	0,0,	
0,0,	222,69,	222,69,	0,0,	
223,69,	220,69,	0,0,	221,69,	
223,69,	223,69,	220,69,	0,0,	
221,69,	219,226,	222,69,	222,228,	
218,225,	0,0,	224,69,	222,69,	
0,0,	223,229,	224,69,	224,69,	
225,69,	0,0,	223,69,	226,69,	
225,69,	225,69,	224,230,	226,69,	
226,69,	0,0,	227,69,	224,69,	
0,0,	220,227,	227,69,	227,69,	
224,69,	225,69,	0,0,	228,69,	
226,69,	0,0,	225,69,	228,69,	
228,69,	226,69,	229,69,	227,69,	
0,0,	230,69,	229,69,	229,69,	
227,69,	230,69,	230,69,	231,69,	
228,69,	0,0,	0,0,	231,69,	
231,69,	228,69,	0,0,	229,69,	
0,0,	232,69,	230,69,	230,231,	
229,69,	232,69,	232,69,	230,69,	
231,232,	0,0,	0,0,	0,0,	
0,0,	231,69,	0,0,	0,0,	
0,0,	0,0,	232,69,	0,0,	
0,0,	0,0,	0,0,	232,69,	
0,0};
struct yysvf yysvec[] = {
0,	0,	0,
yycrank+-1,	0,		0,	
yycrank+-94,	yysvec+1,	0,	
yycrank+0,	0,		yyvstop+1,
yycrank+0,	0,		yyvstop+3,
yycrank+0,	0,		yyvstop+6,
yycrank+0,	0,		yyvstop+8,
yycrank+-219,	0,		yyvstop+11,
yycrank+-221,	0,		yyvstop+13,
yycrank+0,	0,		yyvstop+15,
yycrank+0,	0,		yyvstop+18,
yycrank+0,	0,		yyvstop+21,
yycrank+0,	0,		yyvstop+24,
yycrank+0,	0,		yyvstop+27,
yycrank+0,	0,		yyvstop+30,
yycrank+83,	0,		yyvstop+33,
yycrank+4,	0,		yyvstop+36,
yycrank+0,	0,		yyvstop+39,
yycrank+184,	0,		yyvstop+42,
yycrank+3,	0,		yyvstop+45,
yycrank+0,	0,		yyvstop+48,
yycrank+86,	0,		yyvstop+51,
yycrank+0,	0,		yyvstop+54,
yycrank+4,	0,		yyvstop+57,
yycrank+223,	0,		yyvstop+60,
yycrank+177,	yysvec+24,	yyvstop+64,
yycrank+280,	yysvec+24,	yyvstop+67,
yycrank+283,	yysvec+24,	yyvstop+70,
yycrank+290,	yysvec+24,	yyvstop+73,
yycrank+304,	yysvec+24,	yyvstop+77,
yycrank+311,	yysvec+24,	yyvstop+80,
yycrank+314,	yysvec+24,	yyvstop+83,
yycrank+330,	yysvec+24,	yyvstop+86,
yycrank+340,	yysvec+24,	yyvstop+89,
yycrank+351,	yysvec+24,	yyvstop+92,
yycrank+361,	yysvec+24,	yyvstop+95,
yycrank+367,	yysvec+24,	yyvstop+98,
yycrank+377,	yysvec+24,	yyvstop+101,
yycrank+388,	yysvec+24,	yyvstop+104,
yycrank+396,	yysvec+24,	yyvstop+107,
yycrank+398,	yysvec+24,	yyvstop+111,
yycrank+0,	0,		yyvstop+114,
yycrank+0,	0,		yyvstop+117,
yycrank+407,	yysvec+24,	yyvstop+120,
yycrank+417,	yysvec+24,	yyvstop+123,
yycrank+423,	yysvec+24,	yyvstop+126,
yycrank+426,	yysvec+24,	yyvstop+129,
yycrank+442,	yysvec+24,	yyvstop+132,
yycrank+452,	yysvec+24,	yyvstop+135,
yycrank+461,	yysvec+24,	yyvstop+138,
yycrank+463,	yysvec+24,	yyvstop+141,
yycrank+472,	yysvec+24,	yyvstop+144,
yycrank+487,	yysvec+24,	yyvstop+147,
yycrank+501,	yysvec+24,	yyvstop+150,
yycrank+0,	0,		yyvstop+153,
yycrank+0,	0,		yyvstop+156,
yycrank+0,	0,		yyvstop+159,
yycrank+0,	yysvec+7,	0,	
yycrank+0,	0,		yyvstop+162,
yycrank+0,	yysvec+8,	0,	
yycrank+0,	0,		yyvstop+164,
yycrank+-567,	0,		0,	
yycrank+0,	0,		yyvstop+166,
yycrank+0,	0,		yyvstop+168,
yycrank+0,	yysvec+18,	yyvstop+170,
yycrank+0,	0,		yyvstop+172,
yycrank+31,	0,		0,	
yycrank+0,	0,		yyvstop+174,
yycrank+0,	0,		yyvstop+176,
yycrank+508,	yysvec+24,	yyvstop+178,
yycrank+524,	yysvec+24,	yyvstop+180,
yycrank+533,	yysvec+24,	yyvstop+182,
yycrank+539,	yysvec+24,	yyvstop+185,
yycrank+547,	yysvec+24,	yyvstop+188,
yycrank+554,	yysvec+24,	yyvstop+190,
yycrank+563,	yysvec+24,	yyvstop+193,
yycrank+577,	yysvec+24,	yyvstop+196,
yycrank+574,	yysvec+24,	yyvstop+198,
yycrank+593,	yysvec+24,	yyvstop+200,
yycrank+600,	yysvec+24,	yyvstop+202,
yycrank+602,	yysvec+24,	yyvstop+205,
yycrank+609,	yysvec+24,	yyvstop+208,
yycrank+616,	yysvec+24,	yyvstop+210,
yycrank+625,	yysvec+24,	yyvstop+213,
yycrank+623,	yysvec+24,	yyvstop+215,
yycrank+644,	yysvec+24,	yyvstop+217,
yycrank+646,	yysvec+24,	yyvstop+219,
yycrank+665,	yysvec+24,	yyvstop+221,
yycrank+654,	yysvec+24,	yyvstop+223,
yycrank+673,	yysvec+24,	yyvstop+225,
yycrank+684,	yysvec+24,	yyvstop+227,
yycrank+692,	yysvec+24,	yyvstop+229,
yycrank+698,	yysvec+24,	yyvstop+231,
yycrank+707,	yysvec+24,	yyvstop+233,
yycrank+713,	yysvec+24,	yyvstop+235,
yycrank+723,	yysvec+24,	yyvstop+237,
yycrank+733,	yysvec+24,	yyvstop+239,
yycrank+742,	yysvec+24,	yyvstop+241,
yycrank+749,	yysvec+24,	yyvstop+243,
yycrank+752,	yysvec+24,	yyvstop+245,
yycrank+758,	yysvec+24,	yyvstop+247,
yycrank+768,	yysvec+24,	yyvstop+249,
yycrank+777,	yysvec+24,	yyvstop+251,
yycrank+779,	yysvec+24,	yyvstop+253,
yycrank+798,	yysvec+24,	yyvstop+255,
yycrank+787,	yysvec+24,	yyvstop+258,
yycrank+807,	yysvec+24,	yyvstop+260,
yycrank+814,	yysvec+24,	yyvstop+262,
yycrank+823,	yysvec+24,	yyvstop+265,
yycrank+830,	yysvec+24,	yyvstop+267,
yycrank+838,	yysvec+24,	yyvstop+269,
yycrank+849,	yysvec+24,	yyvstop+271,
yycrank+0,	0,		yyvstop+273,
yycrank+0,	0,		yyvstop+275,
yycrank+859,	yysvec+24,	yyvstop+277,
yycrank+865,	yysvec+24,	yyvstop+280,
yycrank+873,	yysvec+24,	yyvstop+283,
yycrank+879,	yysvec+24,	yyvstop+285,
yycrank+889,	yysvec+24,	yyvstop+287,
yycrank+900,	yysvec+24,	yyvstop+289,
yycrank+908,	yysvec+24,	yyvstop+291,
yycrank+914,	yysvec+24,	yyvstop+293,
yycrank+916,	yysvec+24,	yyvstop+296,
yycrank+924,	yysvec+24,	yyvstop+299,
yycrank+935,	yysvec+24,	yyvstop+301,
yycrank+943,	yysvec+24,	yyvstop+303,
yycrank+945,	yysvec+24,	yyvstop+305,
yycrank+959,	yysvec+24,	yyvstop+307,
yycrank+969,	yysvec+24,	yyvstop+309,
yycrank+966,	yysvec+24,	yyvstop+311,
yycrank+985,	yysvec+24,	yyvstop+313,
yycrank+993,	yysvec+24,	yyvstop+315,
yycrank+995,	yysvec+24,	yyvstop+317,
yycrank+1001,	yysvec+24,	yyvstop+320,
yycrank+1009,	yysvec+24,	yyvstop+323,
yycrank+1016,	yysvec+24,	yyvstop+326,
yycrank+1024,	yysvec+24,	yyvstop+329,
yycrank+1030,	yysvec+24,	yyvstop+331,
yycrank+1045,	yysvec+24,	yyvstop+333,
yycrank+1053,	yysvec+24,	yyvstop+335,
yycrank+1051,	yysvec+24,	yyvstop+337,
yycrank+1059,	yysvec+24,	yyvstop+339,
yycrank+1074,	yysvec+24,	yyvstop+341,
yycrank+1080,	yysvec+24,	yyvstop+343,
yycrank+1082,	yysvec+24,	yyvstop+346,
yycrank+1088,	yysvec+24,	yyvstop+348,
yycrank+1090,	yysvec+24,	yyvstop+350,
yycrank+1109,	yysvec+24,	yyvstop+352,
yycrank+1116,	yysvec+24,	yyvstop+354,
yycrank+1118,	yysvec+24,	yyvstop+356,
yycrank+1124,	yysvec+24,	yyvstop+358,
yycrank+1143,	yysvec+24,	yyvstop+361,
yycrank+1150,	yysvec+24,	yyvstop+363,
yycrank+1152,	yysvec+24,	yyvstop+365,
yycrank+1158,	yysvec+24,	yyvstop+367,
yycrank+1173,	yysvec+24,	yyvstop+369,
yycrank+1181,	yysvec+24,	yyvstop+371,
yycrank+1204,	yysvec+24,	yyvstop+373,
yycrank+1206,	yysvec+24,	yyvstop+375,
yycrank+1212,	yysvec+24,	yyvstop+377,
yycrank+1215,	yysvec+24,	yyvstop+379,
yycrank+1231,	yysvec+24,	yyvstop+381,
yycrank+1238,	yysvec+24,	yyvstop+384,
yycrank+1241,	yysvec+24,	yyvstop+386,
yycrank+1252,	yysvec+24,	yyvstop+388,
yycrank+1261,	yysvec+24,	yyvstop+390,
yycrank+1267,	yysvec+24,	yyvstop+393,
yycrank+1275,	yysvec+24,	yyvstop+395,
yycrank+1277,	yysvec+24,	yyvstop+398,
yycrank+1286,	yysvec+24,	yyvstop+400,
yycrank+1296,	yysvec+24,	yyvstop+402,
yycrank+1305,	yysvec+24,	yyvstop+404,
yycrank+1311,	yysvec+24,	yyvstop+406,
yycrank+1321,	yysvec+24,	yyvstop+408,
yycrank+1330,	yysvec+24,	yyvstop+411,
yycrank+1332,	yysvec+24,	yyvstop+414,
yycrank+1340,	yysvec+24,	yyvstop+416,
yycrank+1346,	yysvec+24,	yyvstop+419,
yycrank+1355,	yysvec+24,	yyvstop+421,
yycrank+1361,	yysvec+24,	yyvstop+423,
yycrank+1369,	yysvec+24,	yyvstop+425,
yycrank+1371,	yysvec+24,	yyvstop+428,
yycrank+1380,	yysvec+24,	yyvstop+431,
yycrank+1390,	yysvec+24,	yyvstop+434,
yycrank+1399,	yysvec+24,	yyvstop+437,
yycrank+1401,	yysvec+24,	yyvstop+439,
yycrank+1409,	yysvec+24,	yyvstop+442,
yycrank+1415,	yysvec+24,	yyvstop+444,
yycrank+1424,	yysvec+24,	yyvstop+446,
yycrank+1438,	yysvec+24,	yyvstop+448,
yycrank+1444,	yysvec+24,	yyvstop+451,
yycrank+1452,	yysvec+24,	yyvstop+453,
yycrank+1467,	yysvec+24,	yyvstop+455,
yycrank+1473,	yysvec+24,	yyvstop+457,
yycrank+1475,	yysvec+24,	yyvstop+459,
yycrank+1481,	yysvec+24,	yyvstop+462,
yycrank+1483,	yysvec+24,	yyvstop+464,
yycrank+1502,	yysvec+24,	yyvstop+466,
yycrank+1504,	yysvec+24,	yyvstop+469,
yycrank+1510,	yysvec+24,	yyvstop+472,
yycrank+1512,	yysvec+24,	yyvstop+474,
yycrank+1518,	yysvec+24,	yyvstop+476,
yycrank+1533,	yysvec+24,	yyvstop+479,
yycrank+1539,	yysvec+24,	yyvstop+482,
yycrank+1541,	yysvec+24,	yyvstop+484,
yycrank+1547,	yysvec+24,	yyvstop+487,
yycrank+1549,	yysvec+24,	yyvstop+489,
yycrank+1568,	yysvec+24,	yyvstop+491,
yycrank+1570,	yysvec+24,	yyvstop+494,
yycrank+1577,	yysvec+24,	yyvstop+497,
yycrank+1597,	yysvec+24,	yyvstop+500,
yycrank+1591,	yysvec+24,	yyvstop+502,
yycrank+1605,	yysvec+24,	yyvstop+504,
yycrank+1607,	yysvec+24,	yyvstop+507,
yycrank+1616,	yysvec+24,	yyvstop+509,
yycrank+1631,	yysvec+24,	yyvstop+512,
yycrank+1637,	yysvec+24,	yyvstop+514,
yycrank+1639,	yysvec+24,	yyvstop+517,
yycrank+1645,	yysvec+24,	yyvstop+520,
yycrank+1647,	yysvec+24,	yyvstop+522,
yycrank+1666,	yysvec+24,	yyvstop+524,
yycrank+1668,	yysvec+24,	yyvstop+526,
yycrank+1675,	yysvec+24,	yyvstop+529,
yycrank+1682,	yysvec+24,	yyvstop+531,
yycrank+1696,	yysvec+24,	yyvstop+533,
yycrank+1702,	yysvec+24,	yyvstop+535,
yycrank+1705,	yysvec+24,	yyvstop+538,
yycrank+1712,	yysvec+24,	yyvstop+541,
yycrank+1721,	yysvec+24,	yyvstop+544,
yycrank+1728,	yysvec+24,	yyvstop+547,
yycrank+1731,	yysvec+24,	yyvstop+550,
yycrank+1737,	yysvec+24,	yyvstop+552,
yycrank+1747,	yysvec+24,	yyvstop+554,
0,	0,	0};
struct yywork *yytop = yycrank+1835;
struct yysvf *yybgin = yysvec+1;
char yymatch[] = {
  0,   1,   1,   1,   1,   1,   1,   1, 
  1,   9,  10,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  9,   1,  34,  35,  35,   1,   1,   1, 
  1,   1,   1,   1,   1,  35,   1,   1, 
 48,  48,  48,  48,  48,  48,  48,  48, 
 48,  48,   1,   1,   1,   1,   1,   1, 
  1,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,   1,   1,   1,   1,  65, 
  1,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,  65,  65,  65,  65,  65, 
 65,  65,  65,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
  1,   1,   1,   1,   1,   1,   1,   1, 
0};
char yyextra[] = {
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,
0};
/*	Copyright (c) 1989 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/

#pragma ident	"@(#)ncform	6.8	95/02/11 SMI"

int yylineno =1;
# define YYU(x) x
# define NLSTATE yyprevious=YYNEWLINE
struct yysvf *yylstate [YYLMAX], **yylsp, **yyolsp;
char yysbuf[YYLMAX];
char *yysptr = yysbuf;
int *yyfnd;
extern struct yysvf *yyestate;
int yyprevious = YYNEWLINE;
#if defined(__cplusplus) || defined(__STDC__)
int yylook(void)
#else
yylook()
#endif
{
	register struct yysvf *yystate, **lsp;
	register struct yywork *yyt;
	struct yysvf *yyz;
	int yych, yyfirst;
	struct yywork *yyr;
# ifdef LEXDEBUG
	int debug;
# endif
	char *yylastch;
	/* start off machines */
# ifdef LEXDEBUG
	debug = 0;
# endif
	yyfirst=1;
	if (!yymorfg)
		yylastch = yytext;
	else {
		yymorfg=0;
		yylastch = yytext+yyleng;
		}
	for(;;){
		lsp = yylstate;
		yyestate = yystate = yybgin;
		if (yyprevious==YYNEWLINE) yystate++;
		for (;;){
# ifdef LEXDEBUG
			if(debug)fprintf(yyout,"state %d\n",yystate-yysvec-1);
# endif
			yyt = yystate->yystoff;
			if(yyt == yycrank && !yyfirst){  /* may not be any transitions */
				yyz = yystate->yyother;
				if(yyz == 0)break;
				if(yyz->yystoff == yycrank)break;
				}
#ifndef __cplusplus
			*yylastch++ = yych = input();
#else
			*yylastch++ = yych = lex_input();
#endif
			if(yylastch > &yytext[YYLMAX]) {
				fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
				exit(1);
			}
			yyfirst=0;
		tryagain:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"char ");
				allprint(yych);
				putchar('\n');
				}
# endif
			yyr = yyt;
			if ( (int)yyt > (int)yycrank){
				yyt = yyr + yych;
				if (yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				}
# ifdef YYOPTIM
			else if((int)yyt < (int)yycrank) {		/* r < yycrank */
				yyt = yyr = yycrank+(yycrank-yyt);
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"compressed state\n");
# endif
				yyt = yyt + yych;
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transitions */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				yyt = yyr + YYU(yymatch[yych]);
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"try fall back character ");
					allprint(YYU(yymatch[yych]));
					putchar('\n');
					}
# endif
				if(yyt <= yytop && yyt->verify+yysvec == yystate){
					if(yyt->advance+yysvec == YYLERR)	/* error transition */
						{unput(*--yylastch);break;}
					*lsp++ = yystate = yyt->advance+yysvec;
					if(lsp > &yylstate[YYLMAX]) {
						fprintf(yyout,"Input string too long, limit %d\n",YYLMAX);
						exit(1);
					}
					goto contin;
					}
				}
			if ((yystate = yystate->yyother) && (yyt= yystate->yystoff) != yycrank){
# ifdef LEXDEBUG
				if(debug)fprintf(yyout,"fall back to state %d\n",yystate-yysvec-1);
# endif
				goto tryagain;
				}
# endif
			else
				{unput(*--yylastch);break;}
		contin:
# ifdef LEXDEBUG
			if(debug){
				fprintf(yyout,"state %d char ",yystate-yysvec-1);
				allprint(yych);
				putchar('\n');
				}
# endif
			;
			}
# ifdef LEXDEBUG
		if(debug){
			fprintf(yyout,"stopped at %d with ",*(lsp-1)-yysvec-1);
			allprint(yych);
			putchar('\n');
			}
# endif
		while (lsp-- > yylstate){
			*yylastch-- = 0;
			if (*lsp != 0 && (yyfnd= (*lsp)->yystops) && *yyfnd > 0){
				yyolsp = lsp;
				if(yyextra[*yyfnd]){		/* must backup */
					while(yyback((*lsp)->yystops,-*yyfnd) != 1 && lsp > yylstate){
						lsp--;
						unput(*yylastch--);
						}
					}
				yyprevious = YYU(*yylastch);
				yylsp = lsp;
				yyleng = yylastch-yytext+1;
				yytext[yyleng] = 0;
# ifdef LEXDEBUG
				if(debug){
					fprintf(yyout,"\nmatch ");
					sprint(yytext);
					fprintf(yyout," action %d\n",*yyfnd);
					}
# endif
				return(*yyfnd++);
				}
			unput(*yylastch);
			}
		if (yytext[0] == 0  /* && feof(yyin) */)
			{
			yysptr=yysbuf;
			return(0);
			}
#ifndef __cplusplus
		yyprevious = yytext[0] = input();
		if (yyprevious>0)
			output(yyprevious);
#else
		yyprevious = yytext[0] = lex_input();
		if (yyprevious>0)
			lex_output(yyprevious);
#endif
		yylastch=yytext;
# ifdef LEXDEBUG
		if(debug)putchar('\n');
# endif
		}
	}
#if defined(__cplusplus) || defined(__STDC__)
int yyback(int *p, int m)
#else
yyback(p, m)
	int *p;
#endif
{
	if (p==0) return(0);
	while (*p) {
		if (*p++ == m)
			return(1);
	}
	return(0);
}
	/* the following are only used in the lex library */
#if defined(__cplusplus) || defined(__STDC__)
int yyinput(void)
#else
yyinput()
#endif
{
#ifndef __cplusplus
	return(input());
#else
	return(lex_input());
#endif
	}
#if defined(__cplusplus) || defined(__STDC__)
void yyoutput(int c)
#else
void yyoutput(c)
  int c; 
#endif
{
#ifndef __cplusplus
	output(c);
#else
	lex_output(c);
#endif
	}
#if defined(__cplusplus) || defined(__STDC__)
void yyunput(int c)
#else
void yyunput(c)
   int c; 
#endif
{
	unput(c);
	}
