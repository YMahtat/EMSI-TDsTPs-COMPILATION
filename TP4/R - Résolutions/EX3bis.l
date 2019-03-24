%{
#include <stdio.h>
#include <stdlib.h>
int cpt;
%}
%%
[^\t\n ]+ {cpt++;}

%%
int main() 
{
	FILE *fichier;
	char nomfichier[100];
	printf("Nom du fichier a analyser : ");
	gets(nomfichier);
	fichier = fopen(nomfichier,"r+");
	yyin=fichier;
	yylex();
	fclose(fichier);
	printf("\nNombre de Mots : %d\n",cpt);
	return 0;
}
int yywrap() 
{ // le delimiteur de la lecture
return 1;
}