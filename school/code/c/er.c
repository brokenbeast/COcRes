/*********************************************************************************
*     File Name           :     er.c
*     Created By          :     aerocn
*     Creation Date       :     [2020-11-19 18:25]
*     Last Modified       :     [2020-11-20 15:50]
*     Description         :      
**********************************************************************************/

#include<stdio.h>
int main(int argc,char *argv[])
{
	char diamond [5] [6] = {
		{' ',' ','*',' ',' '},
		{' ','*','*','*',' '},
		{'*','*','*','*','*'},
		{' ','*','*','*',' '},
		{' ',' ','*',' ',' '}
	};
	for(int n = 0; n < 5; n ++)
	{
		for(int s = 0;s < 5;s++)
		{
			printf("%c",diamond[n][s]);
		}
		printf("\n");
	}

	return 0;
}

