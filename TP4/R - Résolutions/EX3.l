%{
#include <stdio.h>
#include <stdlib.h>
int cpt;
%}
%%
[^\t \n]+ {cpt++;}
\n {printf("\nNombre de Mots : %d\n",cpt);exit(0);}
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