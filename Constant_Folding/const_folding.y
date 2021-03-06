%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "node.hpp"
#include <vector>
#include <stdlib.h>

// #define YYDEBUG 1
using namespace std;
ast test;
// ast test1;
unordered_map <string,int> size_map;
node* type;
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

void fun_int(node* temp){


	if(temp->get_type()=="int"){
			// cout<<"INTEGER1\n";
					int i = 0;
					char* temp_char = &(temp->get_value())[0];
					while(temp_char[i]!='\0'){
						if(temp_char[i]=='.'){
							temp_char[i]='\0';
							break;
						}
						// cout<<"temp_char is "<<temp_char[i]<<"\n";
						i++;
					}
			// cout<<"temp_char is "<<temp_char<<"\n";
			temp->set_value(temp_char);
		}
}
// int flag = 1;


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
%token <str> '+' '-' '*' '/' '%' '<' '>' '&' '^' '|' '=' '{' '}'

%token <str> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <str> STRUCT UNION ENUM ELLIPSIS

%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%nonassoc IFX
%nonassoc ELSE

%type <node> declaration init_declarator type_specifier declaration_specifiers
%type <node> declarator direct_declarator 
%type <str> initializer initializer_list assignment_expression
%type <str> conditional_expression logical_or_expression logical_and_expression 
%type <str> inclusive_or_expression exclusive_or_expression and_expression
%type <str> equality_expression relational_expression shift_expression additive_expression
%type <str> multiplicative_expression unary_expression postfix_expression primary_expression
%type <str> assignment_operator constant_expression
%type <node> init_declarator_list


%start translation_unit
%%

primary_expression
	: IDENTIFIER 
	{
		if(!test.declaration_exists($1,scope_count)){
		flag=0;
		cout<<"\n"<<$1<<" Identifier not declared previously\n";
	}
	else{
		// cout<<"Value of identifier is "<<test.identifier_value($1,scope_count);
	}
	$$=$1;
	}
	| CONSTANT {$$=$1;}
	| STRING_LITERAL {$$=$1;}
	| '(' expression ')'
	;

postfix_expression
	: primary_expression {$$ = $1;}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP
	 {
		 $$=$1;

		node* temp1 = test.get_identifier($1,scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) +1));
			fun_int(temp1);
		}

	}
	| postfix_expression DEC_OP {
		$$=$1;

		node* temp1 = test.get_identifier($1,scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) -1));
			fun_int(temp1);
		}
	}
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| INC_OP unary_expression {
		
		$$=$2;

		node* temp1 = test.get_identifier($2,scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) +1));
			fun_int(temp1);
		}

	}
	| DEC_OP unary_expression {
		$$=$2;

		node* temp1 = test.get_identifier($2,scope_count);
		if(!temp1){
			cout<<"error\n";
		}
		else{
			temp1->set_value(to_string(stof(temp1->get_value()) -1));
			fun_int(temp1);
		}
	}
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
	 {
		 if($1[0]>='0' && $1[0]<='9'){
			 $$ = $1;
		 }
		 else{
			 $$ = test.identifier_value($1,scope_count);
		 }
	}
	| multiplicative_expression '*' unary_expression 
	{

		 if($3[0]>='0' && $3[0]<='9'){
			 $3 = $3;
		 }
		 else{
			 $3 = test.identifier_value($3,scope_count);
		 }


		$$ = strdup(to_string(atof($1) * atof($3)).c_str());
	}
	| multiplicative_expression '/' unary_expression 
	{
		if($3[0]>='0' && $3[0]<='9'){
			 $3 = $3;
		 }
		 else{
			 $3 = test.identifier_value($3,scope_count);
		 }

		$$ = strdup(to_string(atof($1) / atof($3)).c_str());
	}
	| multiplicative_expression '%' unary_expression 
	{
		 if($3[0]>='0' && $3[0]<='9'){
			 $3 = $3;
		 }
		 else{
			 $3 = test.identifier_value($3,scope_count);
		 }

		$$ = strdup(to_string(atoi($1) % atoi($3)).c_str());
	}
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression {$$ = strdup(to_string(atof($1) + atof($3)).c_str());}
	| additive_expression '-' multiplicative_expression {$$ = strdup(to_string(atof($1) - atof($3)).c_str());}
	;

shift_expression
	: additive_expression {$$ = $1;}
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression {$$ = strdup(to_string(atof($1) < atof($3)).c_str());}
	| relational_expression '>' shift_expression {$$ = strdup(to_string(atof($1) > atof($3)).c_str());}
	| relational_expression LE_OP shift_expression {$$ = strdup(to_string(atof($1) <= atof($3)).c_str());}
	| relational_expression GE_OP shift_expression {$$ = strdup(to_string(atof($1) >= atof($3)).c_str());}
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression {$$ = strdup(to_string(atof($1) == atof($3)).c_str());}
	| equality_expression NE_OP relational_expression {$$ = strdup(to_string(atof($1) != atof($3)).c_str());}
	;

and_expression
	: equality_expression {$$ = $1;}
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression {$$ = strdup(to_string(atof($1) && atof($3)).c_str());}
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression {$$ = strdup(to_string(atof($1) || atof($3)).c_str());}
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression 
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression assignment_operator assignment_expression 
	{
		// cout<<"HERE!\n";
		// cout<<$1<<"\n"<<$3<<"\n";

		node* temp1 = test.get_identifier($1,scope_count);
		if(!temp1){
			cout<<"error\n";
		}

		else{
			temp1->set_value($3);
			// cout<<"HERE2\n";
			if(temp1){
				fun_int(temp1);
			}
		}
		
		
	}
	;

assignment_operator
	: '=' {$$ = $1;}
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
	: conditional_expression {$$=$1;}
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier { 
					   $1->set_size(size_map[$1->get_type()]); 
					//    cout<<"\nOne\n";
					//    $1->disp_node(); 
					   type = $1;
				     }
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: init_declarator 
	| init_declarator_list ',' init_declarator 
	;

init_declarator
	: declarator {
					string temp = $1->get_identifier();
					int temp_size = $1->get_size();

					$1 = new node(*type); 
					
					$1->set_identifier(temp); 
					if(temp_size!=0){
						$1->set_size($1->get_size()*temp_size);
					}
					// cout<<"New\n";$1->disp_node();
					test.insert(*$1);
				 }
	| declarator '=' initializer {
		string temp = $1->get_identifier();
		$1 = new node(*type);
		$1->set_identifier(temp); 
		$1->set_value($3);
		node* temp1 = $1;
		if(temp1->get_type()=="int"){
			fun_int(temp1);
		}
		// $1->disp_node();
		test.insert(*$1);
		}
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
	: IDENTIFIER 
		{
		if(test.declaration_exists($1,scope_count)){
		flag=0;
		cout<<"\n"<<$1<<" "<<"Identifier already declared previously\n";
		}
		$$ = new node(yylineno,$1,"","",0,scope_count);}
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']' {$$ = new node(yylineno,$1->get_identifier(),"","",atoi($3),scope_count);}
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')' {}
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
	| jump_statement

	;



compound_statement
	: '{' {
		// cout<<"OVER JERE\n";
		test.create_map(++scope_count);
		// cout<<"DSIPLY IS \n";
		// test.display();
		// cout<<"SCope count is "<<scope_count<<"\n";
		} 
		temp1
	;

temp1
	: '}' 
	{scope_count--;} 
	| statement_list '}' 
	{scope_count--;}
	| declaration_list '}'
	 {scope_count--;}
	| declaration_list statement_list '}'
	 {scope_count--;}
	| statement_list declaration_list '}'
	 {scope_count--;}
	| statement_list declaration_list statement_list  '}'
	 {scope_count--;}
	| declaration_list statement_list declaration_list  '}'
	 {scope_count--;}
	| declaration_list statement_list declaration_list statement_list'}'
	{scope_count--;}
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

for_expression_statement
	: ';'
	| expression ';'
	| declaration
	;

selection_statement
	: IF '(' expression ')' statement %prec IFX
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' for_expression_statement expression_statement ')' statement
	| FOR '(' for_expression_statement expression_statement expression ')' statement
	;

jump_statement
	: RETURN ';'
	| RETURN expression ';'
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



	// #if YYDEBUG
	// 	yydebug = 1;
	// #endif





	if (!yyparse() && flag) {
		printf("\n\n\nParsing is successful\n\n\n");
	} else {
		printf("unsuccessful\n");
	}
		cout<<"DISPLAY is \n";
	test.display();

//	fclose(yyout);
	return 0;
}