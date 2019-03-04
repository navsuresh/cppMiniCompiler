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
"int" {printf("int\n");
		return (INT);}
"float" {return (FLOAT);}
"char" {return (CHAR);}
"++" {return DP;}
"+" {return '+';}
"-" {return '-';}
"/" {return '/';}
"*" {return '*';}
"--" {return DM;}
"double" {return (DOUBLE);}
"void" {return (VOID);}


{digit}* {return (NUM);}
"=" {return ('=');}
";" {return (';');}
"," {return (',');}
"{" {printf("open_curly\n");return ('{');}
"}" {printf("close_curly\n");return ('}');}
"for" {printf("for\n");return FOR;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* {
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