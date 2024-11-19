%{
#include "y.tab.h"  // Include the YACC header for token definitions
%}

%%

"int"            { return INT; }
"float"          { return FLOAT; }
[0-9]+           { yylval.intval = atoi(yytext); return NUMBER; }  // Use the correct type for NUMBER
[a-zA-Z_][a-zA-Z0-9_]* { yylval.id = strdup(yytext); return IDENTIFIER; }  // Use the correct type for IDENTIFIER
"="              { return ASSIGN; }
"+"              { return PLUS; }
"-"              { return MINUS; }
"*"              { return MULT; }
"/"              { return DIV; }
";"              { return SEMICOLON; }
\n               { /* ignore newlines */ }
[ \t]+           { /* ignore whitespace */ }

.                { printf("Unexpected character: %s\n", yytext); }

%%

int yywrap() { return 1; }