%{
#include <stdio.h>
#include <stdlib.h>
int cptM = 0;
int cptC = 0;
int cptL = 1;
%}
%%
\n {cptL++;}
[^\t\n ]+ {cptM++;cptC+=yyleng;}

%%
int main() 
{
	FILE *fichier;
	char nomfichier[100];
	printf("Nom du fichier a analyser : ");
	gets(nomfichier);
	fichier = fopen(nomfichier,"r+");
	yyin = fichier;
	yylex();
	fclose(fichier);
	printf("\nNombre de caracteres : %d\n",cptC);
	printf("\nNombre de mots : %d\n",cptM);
	printf("\nNombre de lignes : %d\n",cptL);
	return 0;
}
int yywrap() 
{ // le delimiteur de la lecture
return 1;
}