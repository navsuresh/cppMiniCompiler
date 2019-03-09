%option yylineno

%{
    extern "C"
    {
        int yylex(void);
    }

#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);
%}

alpha [a-zA-z_]
num [0-9]
digit [0-9]+
id [a-zA-Z_]([a-zA-Z_]|[0-9])*
%%
"<"  {printf("LT\n");return LT;}
">"	 {printf("GT\n");
		return GT;}
">=" 	{
	printf("GE\n");
	return GE;

	}
"<=" 	{
	printf("GT\n");
	return LE;
	}
"==" {return EQ;}
"!=" {return NE;}

"#include"[ ]*"<".*">"\n {printf("here\n");}
"#include"[ ]*"\"".*"\"" {printf("hello please\n");}

"int" {yylval.str = strdup(yytext);printf("int\n");
		return (INT);}

"float" {yylval.str = strdup(yytext);return (FLOAT);}
"char" {yylval.str = strdup(yytext);return (CHAR);}

"++" {return DP;}
"+" {return '+';}
"-" {return '-';}
"/" {return '/';}
"*" {return '*';}
"--" {return DM;}
"&" {return AMP;}
"double" {yylval.str = strdup(yytext);return (DOUBLE);}
"void" {yylval.str = strdup(yytext);return (VOID);}
"if" {printf("if\n"); return IF;}
"else"  { printf("else\n"); return ELSE;}

{digit}* {printf("DIGIT\n");yylval.str = strdup(yytext);return (NUM);}
"=" {return ('=');}
";" {return (';');}
"," {return (',');}
"{" {printf("open_curly\n");return ('{');}
"}" {printf("close_curly\n");return ('}');}
"for" {printf("for\n");return FOR;}
"while" {printf("while\n"); return WHILE;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* {
		yylval.str = strdup(yytext);
		printf("ID\n");
        return (ID);
        }

"[" {return ('[');}
"]" {return (']');}
"(" { printf("open\n");return ('(');}
")" {printf("close\n");return (')');}
[ ]* {printf("Space\n");}
\t* {printf("tab\n");;}
\n* {printf("newline\n");}
%%