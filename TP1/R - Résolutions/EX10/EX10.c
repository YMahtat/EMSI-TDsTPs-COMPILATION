/*
 * EX9.c
 * 
 * Copyright 2017 YMahtat <YMahtat@YBM-HIMOCRYPTO>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#define ENTREE '\n'

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char s[255];
	int etat = 0;
	fflush(stdin);
	gets(s);
	printf("%s\n",s);
	
	int i = 0;
	while(1)
	{
		switch(etat)
		{
			case 0 :
					
					
					if(s[i] == '/')
					{
						etat = 1;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
					
			case 1 :
					
					if(s[i] == '/')
					{
						etat = 2;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 2: 
					if(s[i] == '\0') 
					{
						etat = 3;
						//i++;
					}
					else 
					{
						etat = 2;
						i++;
					}
					break;
			case 3 :
					
					if(s[i] == '\0'  )
					{
						printf("correct !! Contenu : %s",s+2);
						return(0);
						
					}
					
					break;
		}
		//printf("%c , %d\n",s[i],etat);
		
	}
	return 0;
}

