#include <iostream>#include <cstdio>#include "y.tab.h"int yyparse();int main(int argc, char **argv) {	argc--, argv++;	if (argc > 0) 		yyin = fopen(argv[0], "r");	else		yyin = stdin;			yyparse();	return 0;}