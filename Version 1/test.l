%{
#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* error_msg);
%}

alpha [a-zA-z_]
num [0-9]
digit [0-9]+
id [a-zA-Z_]([a-zA-Z_]|[0-9])*
%%
"#include"[ ]*"<".*">"\n {;}
"#include"[ ]*"\"".*"\"" {;}

"int" {return (INT);}
"float" {return (FLOAT);}
"char" {return (CHAR);}
"double" {return (DOUBLE);}
"void" {return (VOID);}


{digit}* {return (NUM);}
"=" {return ('=');}
";" {return (';');}
"," {return (',');}
"{" {return ('{');}
"}" {return ('}');}

[a-zA-Z_]([a-zA-Z_]|[0-9])* {
        // printf("String is %s",yytext);
        return (ID);
        }

"[" {return ('[');}
"]" {return (']');}
"(" {return ('(');}
")" {return (')');}


[\t\n ]* {;}
%%