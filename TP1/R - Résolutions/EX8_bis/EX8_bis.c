/*
 * EX8_bis.c
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


#include <stdio.h>

int main(int argc, char **argv)
{
	
	char s[255];
	int etat = 0;
	gets(s);
	char* ps = s;
	int cptB = 0;
	while(1)
	{
		switch(etat)
		{
			case 0 :
					
					
					if(*ps == 'a')
					{
						etat = 1;
						ps++;
					}
					else {printf("error !!");return(1);}
					break;
					
			case 1 :
					
					if(*ps == 'b')
					{
						etat = 1;
						cptB++;
						ps++;
					}
					else if(*ps == 'a')
					{
						etat = 2;
						ps++;
					}
					else {printf("error !!");return(1);}
					break;
			case 2 :
					
					if(*ps == 0)
					{
						printf("correct !! Nbr de 'b' : %d .",cptB);
						return(0);
						
					}
					else {printf("error !!");return(1);}
					break;
		}
		
		
	}
	return 0;
}

