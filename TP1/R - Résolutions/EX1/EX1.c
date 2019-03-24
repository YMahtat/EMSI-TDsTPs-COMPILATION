/*
 * EX1.c
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
	char* string[200];
	scanf("%s",string);
	char* pString = string;
	int cpt1 = 0;
	int cpt2 = 0;
	while(*pString)
	{
		if( *pString == '(')
		{
			cpt1++;
		}
		else if( *pString == ')')
		{
			cpt2++;
		}
		pString++;
	}
	
	if( cpt1 == cpt2 )
		printf("Les parenthese(s) sont equilibree(s)");
	else if( cpt1 > cpt2 )
		printf("Il manque %d parenthese(s) fermante(s)",cpt1-cpt2);
	else
		printf("Il manque %d parenthese(s) ouvrante(s)",cpt2-cpt1);
	return 0;
}

