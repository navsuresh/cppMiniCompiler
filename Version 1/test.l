%option yylineno

%{
    extern "C"
    {
        int yylex(void);
    }

#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);
int scope_count = 0;
%}

alpha [a-zA-z_]
num [0-9]
digit [0-9]+
id [a-zA-Z_]([a-zA-Z_]|[0-9])*
%%
"main" {printf("main function\n"); return MAIN;}
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

"#include"[ ]*"<".*">"\n {printf("#include\n");}
"#include"[ ]*"\"".*"\"" {printf("#include\n");}

"int" {yylval.str = strdup(yytext);printf("int\n");
		return (INT);}

"float" {yylval.str = strdup(yytext);return (FLOAT);}
"char" {yylval.str = strdup(yytext);return (CHAR);}

"++" {printf("++\n");return DP;}
"+" {printf("+\n");return '+';}
"-" {printf("-\n");return '-';}
"/" {printf("/\n");return '/';}
"*" {printf("*\n");return '*';}
"%" {printf("%s\n","%");return '%';}
"--" {printf("--\n");return DM;}
"&" {printf("&\n");return AMP;}
"double" {printf("double\n");yylval.str = strdup(yytext);return (DOUBLE);}
"void" {printf("void\n");yylval.str = strdup(yytext);return (VOID);}
"if" {printf("if\n"); return IF;}
"else"  { printf("else\n"); return ELSE;}

{digit}* {printf("DIGIT\n");yylval.str = strdup(yytext);return (NUM);}
"=" {printf("=\n");return ('=');}
";" {printf(";\n");return (';');}
"," {printf(",\n");return (',');}
"{" {printf("{\n");scope_count++;return ('{');}
"}" {printf("}\n");scope_count--;return ('}');}
"for" {printf("for\n");return FOR;}
"while" {printf("while\n"); return WHILE;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* {
		yylval.str = strdup(yytext);
		printf("ID\n");
        return (ID);
        }

"[" {printf("[\n");return ('[');}
"]" {printf("]\n");return (']');}
"(" { printf("(\n");return ('(');}
")" {printf(")\n");return (')');}
[ ]* {;}
\t* {;;}
\n* {;}
%%