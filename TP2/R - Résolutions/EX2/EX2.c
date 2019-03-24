/*
 * EX2.c
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

#include <ctype.h>

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
					
					
					if(s[i] == '0')
					{
						etat = 1;
						i++;
					}
					else if(s[i] == '1' || s[i] == '2')
					{
						etat = 2;
						i++;
					}
					else if(s[i] == '3')
					{
						etat = 3;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
					
			case 1 :
					
					if(s[i]>= '1' && s[i] <= '9')
					{
						etat = 4;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 2: 
					if(isdigit(s[i])) 
					{
						etat = 4;
						i++;
					}
					else { printf("error !!");return(1); }
					break;
			case 3: 
					if(s[i] == '0') 
					{
						etat = 4;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 4 :
					if(s[i] == '/') 
					{
						etat = 5;
						i++;
					}
					else { printf("error !!");return(1); }
					break;
			case 5 :
					if(s[i] == '0')
					{
						etat = 6;
						i++;
					}
					if(s[i] == '1')
					{
						etat = 7;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 6 :
					if(s[i]>= '1' && s[i] <= '9')
					{
						etat = 8;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 7 :
					if(s[i]>= '0' && s[i] <= '2')
					{
						etat = 8;
						i++;
					}
					else {printf("error !!");return(1);}
					break;
			case 8 :
					printf("correct !!");
					return(0);
		}
		
		//printf("c=%c, i=%d,%d\n",s[i-1],i-1,etat);
	}
	
	
	
	return 0;
}

