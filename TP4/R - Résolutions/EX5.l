%{
#include <stdio.h>
#include <stdlib.h>
%}
%%
[\t ]+ {printf(" ");}
[^\t\n ]+ {printf("%s",yytext);}
[\t ]+\n {printf("*\n");}
^[\t ]+\n {printf("");}

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
	return 0;
}
int yywrap() 
{ // le delimiteur de la lecture
return 1;
}