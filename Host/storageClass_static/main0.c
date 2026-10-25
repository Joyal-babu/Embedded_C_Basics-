/*
 * main0.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

void myfun1 (void);  // function prototype

// int count = 0;  // global variable, lifetime is  until the termination of the program
                // now the variable can be modified by any function the the program
                // completely public to all the functions in the program


int main()
{
	myfun1();
	myfun1();
	myfun1();
	myfun1();
	myfun1();
	myfun1();
	myfun1();
	myfun1();

	return 0;
}

void myfun1 (void)
{
	// int count = 0;       // local variable, dies after the function execution
                            // we want this variable to hold its value across multiple function calls

    static int count = 0;   // now 'count' is a global variable but private to the function 'myfun1'
                            // 'count' variable is accessible only from the function 'myfun1' not from other functions
                            // this variable will not die even when the execution control goes out of the function
                            // scope of this variable is now global but visibility is only for this function
	count = count + 1;

	printf("This function executed %d times\n", count);
}

