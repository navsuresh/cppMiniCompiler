D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*
%option yylineno

%{



#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);

void printcode();
%}

%%
.*\/\/.*    {;}
.*"/*"([^*]|\*+[^*/])*+\*"/" {;}
"#include"[ ]*"<".*">"\n {printf("%s\n", yytext);}
"#include"[ ]*"\"".*"\"" {printf("%s\n", yytext);}


"break"			{ printcode(); return(BREAK); }
"char"			{ printcode(); return(CHAR); }
"const"			{ printcode(); return(CONST); }
"continue"		{ printcode(); return(CONTINUE); }
"do"			{ printcode(); return(DO); }
"double"		{ printcode(); return(DOUBLE); }
"else"			{ printcode(); return(ELSE); }
"float"			{ printcode(); return(FLOAT); }
"for"			{ printcode(); return(FOR); }
"if"			{ printcode(); return(IF); }
"int"			{ printcode(); return(INT); }
"return"		{ printcode(); return(RETURN); }
"sizeof"		{ printcode(); return(SIZEOF); }
"void"			{ printcode(); return(VOID); }
"while"			{ printcode(); return(WHILE); }

{L}({L}|{D})*		{ printcode(); return(check_type()); }

0[xX]{H}+{IS}?		{ printcode(); return(CONSTANT); }
0{D}+{IS}?		{ printcode(); return(CONSTANT); }
{D}+{IS}?		{ printcode(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ printcode(); return(CONSTANT); }

{D}+{E}{FS}?		{ printcode(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ printcode(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ printcode(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ printcode(); return(STRING_LITERAL); }


"++"			{ printcode(); return(INC_OP); }
"--"			{ printcode(); return(DEC_OP); }
"->"			{ printcode(); return(PTR_OP); }
"&&"			{ printcode(); return(AND_OP); }
"||"			{ printcode(); return(OR_OP); }
"<="			{ printcode(); return(LE_OP); }
">="			{ printcode(); return(GE_OP); }
"=="			{ printcode(); return(EQ_OP); }
"!="			{ printcode(); return(NE_OP); }
";"			{ printcode(); return(';'); }
("{"|"<%")		{ printcode(); return('{'); }
("}"|"%>")		{ printcode(); return('}'); }
","			{ printcode(); return(','); }
":"			{ printcode(); return(':'); }
"="			{ printcode(); return('='); }
"("			{ printcode(); return('('); }
")"			{ printcode(); return(')'); }
("["|"<:")		{ printcode(); return('['); }
("]"|":>")		{ printcode(); return(']'); }
"."			{ printcode(); return('.'); }
"&"			{ printcode(); return('&'); }
"!"			{ printcode(); return('!'); }
"~"			{ printcode(); return('~'); }
"-"			{ printcode(); return('-'); }
"+"			{ printcode(); return('+'); }
"*"			{ printcode(); return('*'); }
"/"			{ printcode(); return('/'); }
"%"			{ printcode(); return('%'); }
"<"			{ printcode(); return('<'); }
">"			{ printcode(); return('>'); }
"^"			{ printcode(); return('^'); }
"|"			{ printcode(); return('|'); }
"?"			{ printcode(); return('?'); }

[ \t\v\n\f]		{ printcode(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}




int column = 0;

void printcode()
{
	ECHO;
}


int check_type()
{
	return(IDENTIFIER);
}