%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}

%union {
    int intval;  // Integer value for numbers
    char* id;    // String for identifiers
}

%token <intval> NUMBER
%token <id> IDENTIFIER
%token INT FLOAT ASSIGN PLUS MINUS MULT DIV SEMICOLON

%type <intval> expr

%%

program:
    /* Empty */
    | program statement
;

statement:
    declaration
    | assignment
;

declaration:
    INT IDENTIFIER SEMICOLON { printf("Declaration: int %s;\n", $2); }
    | FLOAT IDENTIFIER SEMICOLON { printf("Declaration: float %s;\n", $2); }
;

assignment:
    IDENTIFIER ASSIGN expr SEMICOLON { printf("Assignment: %s = %d\n", $1, $3); }
;

expr:
    NUMBER { $$ = $1; }
    | IDENTIFIER { /* look up variable value in symbol table if needed */ }
    | expr PLUS expr { $$ = $1 + $3; }
    | expr MINUS expr { $$ = $1 - $3; }
    | expr MULT expr { $$ = $1 * $3; }
    | expr DIV expr { $$ = $1 / $3; }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    printf("Enter C code:\n");
    yyparse();
    return 0;
}
