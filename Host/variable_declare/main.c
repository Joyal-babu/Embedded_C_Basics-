/*
 * main.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

//global  - common to all the funnctions of the program

// extern int myscore;  // This is  variable declaration
// extern keyword tells the compiler that this variable is
// defined outside the scope of this file

// when compiler sees this it will not allocate any storage
// space to the variable

// extern to main.c, but compiler couldn't find it
// hence error 'undefined reference'

int myscore; // this compiles fine - // This is  variable definition - memory allocation happens

int main()
{
	// local   - local to the main function

	// int myscore;  // this also compiles fine - This is  variable definition - memory allocation happens

	myscore = 130;

	printf("myscore=%d\n", myscore);

	return 0;
}
