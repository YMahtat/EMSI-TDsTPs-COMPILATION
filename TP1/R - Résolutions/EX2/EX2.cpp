/*
 * EX2.cpp
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


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	string cycle[] = {"","4/4","(4+4)/4","4-(4/4)","4"};
	int x;
	scanf("%d",&x);
	if(x > 0)
	{
		string s = "";
		for(int i = 0;i<(x/4)%4;i++)
			s += (((x/4)%4 = 0) "4*4" ) ((s != "")? "+":"") + cycle[4];
			
		if(x%4)
			s += ((s != "")? "+":"") + cycle[x%4];
		
		cout << x << " => " << s << endl;
	}
	else
	{
		cout << "arg(" << x << ") est negatif ou null !!!" << endl;
	}
	return 0;
}

