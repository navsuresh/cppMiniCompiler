%{
    #include<stdio.h>
    #include<y.tab.h>
    int line_number = 1;
%}
identifier [A-Za-z_][A-Za-z0-9_]*


%%
.*\/\/.*    {;}
.*"/*"([^*]|\*+[^*/])*+\*"/" {;}
\n  {;}
.* {fprintf(yyout, "\n%d %s", line_number++, yytext);}
'!=' return NE
[ \t]		;
int	return INT;
float return FLOAT;
char return CHAR;
void return VOID;
double return DOUBLE;
for 	return FOR;
while	return WHILE;
if	return IF;
else	return ELSE;
printf  return PRINTF;
struct 	return STRUCT;
{digit}+       return NUM;
{alpha}({alpha}|{digit})* return ID;

"#include"[ ]*"<iostream>" 	return LIBRARY;
"*"		return MUL;
"/"		return DIV;
"+"		return PLUS;
"-"		return MINUS;
")"		return CLOSE_PARENTHESIS;
"("		return OPEN_PARENTHESIS;
";"		return SEMICOLON;
"&"		return AMPERSAND;
">="    return GE;
"=="    return EQU;
"!="    return NE;
"<="    return LE;
">"		return GT;
"<"		return LT;
"."     return DOT;
"++"	return UNARY_DOUBLE_PLUS;
"--"	return UNARY_DOUBLE_MINUS;

%%

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        yyin = fopen(argv[1], "r");
        yyout = fopen("op.cpp", "w");
    }
    yylex();
}