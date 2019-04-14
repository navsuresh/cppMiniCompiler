%{
#include "y.tab.h"
%}
%%
[0-9]+ { return NUMBER;}
[\t\n] ;
"+" return(PLUS);
"-" return(MINUS);
"*" return(TIMES);
"/" return(DIVIDE);
"^" return(POWER);
"(" return(LEFT_PARENTHESIS);
")" return(RIGHT_PARENTHESIS);
";" return(END);
%%
int yywrap (void)
{return 1;} 