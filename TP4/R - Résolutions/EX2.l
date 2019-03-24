%{
#include <stdio.h>
#include <stdlib.h>
int cpt;
%}
%%
cad {printf("c'est a dire");}
ssi {printf("si et seulement si");}
afd {printf("automate a états finis déterministe");}
\n {exit(0);}
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