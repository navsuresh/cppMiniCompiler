%{
#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);
%}

alpha [a-zA-z_]
num [0-9]
digit [0-9]+


%%
"#include"[ ]*"<".*">"\n {;}
"#include"[ ]*"\"".*"\"" {;}
"int" {return (INT);}
"float" {return (FLOAT);}
"char" {return (CHAR);}
"double" {return (DOUBLE);}
"void" {return (VOID);}
{alpha}({alpha}|{num})* {
                    // printf("String is %s",yytext);
                    return (ID);
                    }
{digit}* {return (NUM);}
"=" {return ('=');}
";" {return (';');}
"," {return (',');}
"{" {return ('{');}
"}" {return ('}');}
"(" {return ('(');}
")" {return (')');}

[\t\n ]* {;}
%%