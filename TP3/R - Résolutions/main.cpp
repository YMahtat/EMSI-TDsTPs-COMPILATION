#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

int delim(char *chaine, int i);
int identificateur(char *chaine, int i);
int reel(char *chaine, int i);

void analyse(char *chaine);



int main()
{
	char chaineATraiter[100];

    printf(" Donnez une chaine a analyser : \n");
    gets(chaineATraiter);
    analyse(chaineATraiter);
	return 0;
}

void analyse(char *chaine)
{
	int i = 0;
	string copy = "";
	while(chaine[i])
	{
		if(chaine[i] == ' ' || chaine[i] == '\t')
		{
			i = delim(chaine,i);
		}
		else if(isalpha(chaine[i]))
		{
			int j = i;
			i = identificateur(chaine,i);
		}
		else
		{
			
			i++;
		}
	}
	//cout << endl << ">>" << copy << endl;
}


int delim(char *chaine, int i)
{
	int etat = 0;
	while(true)
	{
		switch(etat)
		{
			case 0 :
				if(chaine[i] == ' ' || chaine[i] == '\t')
				{
					etat = 1;
					i++;
				}
				else
				{
					return i;
				}
				break;
			case 1 :
				if(chaine[i] == ' ' || chaine[i] == '\t')
				{
					etat = 1;
					i++;
				}
				else
				{
					etat = 2;
					i++;
				}
				break;
			case 2 :
				etat = 1;
				return --i;
				break;
		}
	}
	return 0;
}

int identificateur(char *chaine, int i)
{
	string copy = "";
	int etat = 0;
	while(true)
	{
		switch(etat)
		{
			case 0 :
				if(isalpha(chaine[i]))
				{
					etat = 1;
					copy = copy + chaine[i];
					i++;
				}
				else
				{
					return i;
				}
				break;
			case 1 :
				if(isalnum(chaine[i]))
				{
					etat = 1;
					copy = copy + chaine[i];
					i++;
				}
				else
				{
					etat = 2;
					i++;
				}
				break;
			case 2 :
				cout << "\t>> Identificateur : " << copy << endl;
				etat = 1;
				return --i;
				break;
		}
	}
	return 0;
}


int reel(char *chaine, int i)
{

}