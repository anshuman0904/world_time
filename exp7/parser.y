%{
#include <stdio.h>
#include <stdlib.h>
// Declare the lexer and error handling function
int yylex(void);
int yyerror(const char* s);
%}

// Union to define the type for semantic values (we're using integers here)
%union {
    int num; // Store integer values
}

// Token declarations and types
%token <num> NUMBER
%token PLUS MINUS MULTIPLY DIVIDE LPAREN RPAREN EOL
%type <num> expr term factor line
// Define operator precedence and associativity
%left PLUS MINUS
%left MULTIPLY DIVIDE
%%

// Grammar rules
input:
    /* empty */
    | input line
    ;

line:
    expr EOL { printf("Result: %d\n", $1); } // Print the result of the expression
    | EOL
    ;

expr:
    expr PLUS term { $$ = $1 + $3; } // Handle addition
    | expr MINUS term { $$ = $1 - $3; } // Handle subtraction
    | term
    ;

term:
    term MULTIPLY factor { $$ = $1 * $3; } // Handle multiplication
    | term DIVIDE factor { $$ = $1 / $3; } // Handle division
    | factor
    ;

factor:
    NUMBER { $$ = $1; } // Return the value of a number
    | LPAREN expr RPAREN { $$ = $2; } // Handle parentheses (expr)
    ;

%%

// Main function
int main() {
    printf("Enter expressions (Ctrl+D to exit):\n");
    return yyparse(); // Start parsing
}

// Error handling function
int yyerror(const char* s) {
    fprintf(stderr, "ERROR: %s\n", s);
    return 0;
}
