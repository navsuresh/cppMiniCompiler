%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>

using namespace std;
ast test;
// ast test1;
unordered_map <string,int> size_map;
const char *s = "Hello, World!";   
int flag=1;
class test123{
	int a;
	public:
	test123(){
		a=5;
	}
	void print_func(){
		cout<<"A is "<<a<<"\n";
	}

};



void yyerror(const char *error_msg);

int counter = 0;
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
int scope_count;
extern "C"
{       
        int yyparse(void);
        int yylex(void);  
        int yywrap()
        {
                return 1;
        }

}

%}


%union {
	char* str;
	class node* node;
}

%token <str> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token <str> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <str> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <str> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <str> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token <str> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <str> STRUCT UNION ENUM ELLIPSIS

%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%nonassoc IFX
%nonassoc ELSE

%type <node> declaration init_declarator type_specifier declaration_specifiers
%type <node> declarator direct_declarator initializer initializer_list assignment_expression
%type <node> conditional_expression logical_or_expression logical_and_expression 
%type <node> inclusive_or_expression exclusive_or_expression and_expression
%type <node> equality_expression relational_expression shift_expression additive_expression
%type <node> multiplicative_expression unary_expression postfix_expression primary_expression
%type <node> init_declarator_list
%start translation_unit
%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator unary_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;



multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression
	| multiplicative_expression '/' unary_expression
	| multiplicative_expression '%' unary_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list {$2 = $1;}';'
	;

declaration_specifiers
	: type_specifier { 
					   $1->set_size(size_map[$1->get_type()]); 
					   cout<<"One\n";$1->disp_node(); 
				     }
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator {cout<<"Two\n";$<node>0->disp_node(); $1 = $<node>0;}
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator {
					string temp = $1->get_identifier();
					$1 = $<node>0; 
					$1->set_identifier(temp); 
					cout<<"New\n";$1->disp_node();
				 }
	| declarator '=' initializer {$1 = $<node>0; cout<<"New\n";$1->disp_node();}
	;

type_specifier
	: VOID
	| CHAR {$$ = new node(yylineno,"",$1,"",0,scope_count);}
	| SHORT
	| INT {$$ = new node(yylineno,"",$1,"",0,scope_count);}
	| LONG
	| FLOAT {$$ = new node(yylineno,"",$1,"",0,scope_count);}
	| DOUBLE {$$ = new node(yylineno,"",$1,"",0,scope_count);}
	| SIGNED
	| UNSIGNED
	| TYPE_NAME
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

declarator
	: direct_declarator {$$=$1;}
	;

direct_declarator
	: IDENTIFIER {$$ = new node(0,$1,"","",0,0);}
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	;


initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	;


compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement %prec IFX
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%

void yyerror(const char *error_msg) {
	printf("error_msg: %s\n", error_msg);
}

#include <stdio.h>
extern char yytext[];
extern int column;
int main(int argc, char *argv[]) {


	scope_count = 0;
    size_map["char"]=1;
	size_map["int"]=4;
	size_map["float"]=4;
	size_map["double"]=8;

	test.display();








	if (!yyparse()) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
	
//	fclose(yyout);
	return 0;
}