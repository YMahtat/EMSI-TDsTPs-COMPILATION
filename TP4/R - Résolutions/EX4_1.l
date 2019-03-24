%{
#include <stdio.h>
#include <stdlib.h>
int cptC = 0;
int cptL = 1;
%}
%%
\n {cptL++;}
[^\t ] {cptC++;}

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
	printf("\nNombre de lignes : %d\n",cptL);
	return 0;
}
int yywrap() 
{ // le delimiteur de la lecture
return 1;
}