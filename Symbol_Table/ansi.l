D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%option yylineno

%{

    extern "C"
    {
        int yylex(void);
    }

#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);
void comment();
void count();
int check_type();
void printcode();
void printcode2();
void printcode3();
%}

%%
.*\/\/.*    {;}
.*"/*"([^*]|\*+[^*/])*+\*"/" {;}
"#include"[ ]*"<".*">"\n {printf("%s\n", yytext);}
"#include"[ ]*"\"".*"\"" {printf("%s\n", yytext);}


"break"			{ printcode(); return(BREAK); }
"char"			{ printcode(); yylval.str = strdup(yytext); return(CHAR); }
"const"			{ printcode(); return(CONST); }
"continue"		{ printcode(); return(CONTINUE); }
"do"			{ printcode(); return(DO); }
"double"		{ printcode(); yylval.str = strdup(yytext); return(DOUBLE); }
"else"			{ printcode(); return(ELSE); }
"float"			{ printcode(); yylval.str = strdup(yytext); return(FLOAT); }
"for"			{ printcode(); return(FOR); }
"if"			{ printcode(); return(IF); }
"int"			{ printcode(); yylval.str = strdup(yytext); return(INT); }
"return"		{ printcode(); return(RETURN); }
"sizeof"		{ printcode(); return(SIZEOF); }
"void"			{ printcode(); return(VOID); }
"while"			{ printcode(); return(WHILE); }

{L}({L}|{D})*		{ printcode(); yylval.str = strdup(yytext); return(check_type()); }

0[xX]{H}+{IS}?		{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
0{D}+{IS}?		{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}+{IS}?		{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }

{D}+{E}{FS}?		{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ printcode(); yylval.str = strdup(yytext); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ printcode(); yylval.str = strdup(yytext); return(STRING_LITERAL); }


"++"			{ printcode(); yylval.str = strdup(yytext); return(INC_OP); }
"--"			{ printcode(); yylval.str = strdup(yytext); return(DEC_OP); }
"->"			{ printcode(); yylval.str = strdup(yytext); return(PTR_OP); }
"&&"			{ printcode(); yylval.str = strdup(yytext); return(AND_OP); }
"||"			{ printcode(); yylval.str = strdup(yytext); return(OR_OP); }
"<="			{ printcode(); yylval.str = strdup(yytext); return(LE_OP); }
">="			{ printcode(); yylval.str = strdup(yytext); return(GE_OP); }
"=="			{ printcode(); yylval.str = strdup(yytext); return(EQ_OP); }
"!="			{ printcode(); yylval.str = strdup(yytext); return(NE_OP); }
";"			{ printcode(); yylval.str = strdup(yytext); return(';'); }
("{"|"<%")		{ printcode(); yylval.str = strdup(yytext); return('{'); }
("}"|"%>")		{ printcode(); yylval.str = strdup(yytext); return('}'); }
","			{ printcode(); yylval.str = strdup(yytext); return(','); }
":"			{ printcode(); yylval.str = strdup(yytext); return(':'); }
"="			{ printcode(); yylval.str = strdup(yytext); return('='); }
"("			{ printcode(); yylval.str = strdup(yytext); return('('); }
")"			{ printcode(); yylval.str = strdup(yytext); return(')'); }
("["|"<:")		{ printcode(); yylval.str = strdup(yytext); return('['); }
("]"|":>")		{ printcode(); yylval.str = strdup(yytext); return(']'); }
"."			{ printcode(); yylval.str = strdup(yytext); return('.'); }
"&"			{ printcode(); yylval.str = strdup(yytext); return('&'); }
"!"			{ printcode(); yylval.str = strdup(yytext); return('!'); }
"~"			{ printcode(); yylval.str = strdup(yytext); return('~'); }
"-"			{ printcode(); yylval.str = strdup(yytext); return('-'); }
"+"			{ printcode(); yylval.str = strdup(yytext); return('+'); }
"*"			{ printcode(); yylval.str = strdup(yytext); return('*'); }
"/"			{ printcode(); yylval.str = strdup(yytext); return('/'); }
"%"			{ printcode(); yylval.str = strdup(yytext); return('%'); }
"<"			{ printcode(); yylval.str = strdup(yytext); return('<'); }
">"			{ printcode(); yylval.str = strdup(yytext); return('>'); }
"^"			{ printcode(); yylval.str = strdup(yytext); return('^'); }
"|"			{ printcode(); yylval.str = strdup(yytext); return('|'); }
"?"			{ printcode(); yylval.str = strdup(yytext); return('?'); }
[\n]* {printcode3();}
[ \t\n\v\f]*		{ printcode2(); }

.			{ /* ignore bad characters */ }

%%



void printcode3(){
	printf("\n");
}

int column = 0;
void printcode2(){
	printf(" ");
}
void printcode()
{
	ECHO;
}


int check_type()
{
	return(IDENTIFIER);
}