/*
 * main1.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */
#include <stdio.h>

int main()
{
	char a1 = 'A';

	/*
	char a2 = 'p';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = 'e';
	char a6 = ':';
	char a7 = '(';
	*/

	unsigned   int addr4a1 = (unsigned  int)&a1;   // type casting pointer to varaible data type, may use long/ long long depending upon compiler and target


	//printf("Address of variable \'a1\' = %d\n", &a1);    // gives error

	printf("Address of variable \'a1\' = %x\n", addr4a1);


	/*
	printf("Address of variable \'a2\' = %p\n", &a2);
	printf("Address of variable \'a3\' = %p\n", &a3);
	printf("Address of variable \'a4\' = %p\n", &a4);
	printf("Address of variable \'a5\' = %p\n", &a5);
	printf("Address of variable \'a6\' = %p\n", &a6);
	printf("Address of variable \'a7\' = %p\n\v", &a7);
	*/


	return 0;
}

