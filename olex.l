%{
    #include<stdio.h>
    int line_number = 1;
%}
identifier [A-Za-z_][A-Za-z0-9_]*


%%
.*\/\/.*    {;}
.*"/*"([^*]|\*+[^*/])*+\*"/" {;}
\n  {;}
.* {fprintf(yyout, "\n%d %s", line_number++, yytext);}
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