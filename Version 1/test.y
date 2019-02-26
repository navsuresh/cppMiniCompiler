%{
#include <stdio.h>
void yyerror(const char *error_msg);
int yylex();
extern FILE* yyin;
%}

%token INT FLOAT CHAR DOUBLE VOID
%token NUM ID

%right '='
%left AND OR
%left '<' '>' LE GE EQ NE LT GT
%start init

%%
init
	: init declaration
	| init func_declaration 
	| 
	;

declaration
	: type assignment_st ';'
	| assignment_st ';'
	| type array_st';'
	;
 
array_st
	: ID '[' NUM ']'
	;

func_declaration
	: type ID '(' arg_list_optional ')' compound_st
	;

compound_st 
	: '{' statement_structure '}'
	;

statement_structure 
	: statement_structure statement
	| statement
	;

statement
	: declaration
	;

arg_list_optional
	: arg_list_actual 
	| 
	;

arg_list_actual 
	: arg_list_actual ',' arg_final 
	| arg_final
	;

arg_final
	:type ID
	;

assignment_st
	: ID '=' ID
	| ID '=' NUM
	| ID
	;

type
	: INT 
	| FLOAT 
	| CHAR 
	| DOUBLE 
	| VOID
	;
%%

void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

int main(int argc, char *argv[]) {

	yyin = fopen(argv[1], "r");
	if (!yyparse()) {
		printf("successful\n");
	} else {
		printf("unsuccessful\n");
	}
	fclose(yyin);
	return 0;
}
