%{
#include <stdio.h>
#include <stdlib.h>
int cpt;
%}
%%
"(" {cpt++;}
")" {cpt--;}
\n {if(cpt ==0){printf("\nCorretct\n");}else if(cpt>0){printf("\nIl manque %d paparenthése(s) fermante(s) !!\n",cpt);}else{printf("\nIl manque %d paparenthése(s) ouvrante(s) !!\n",-cpt);}exit(0);}
%%
int main() 
{
	cpt = 0;
	printf("donner votre chaine :\n");
	yylex();
	return 0;
}
int yywrap() 
{ // le delimiteur de la lecture
return 1;
}