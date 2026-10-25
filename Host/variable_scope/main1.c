/*
 * main1.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */
#include <stdio.h>

int myscore = 44;

int main()
{
	// int myscore = 66;         // preference always for variable declared in local space, when variable names are same b/w local and global space

    {
        int myscore = 66;
    }	                        /* created a small execution body using curly brackets
                                   here 'myscore' is a local variable which is bound to the scope of these area
                                   the moment execution control goes out of these scope, 'myscore' variable is no longer valid, the variable dies

                                */

	printf("\n \n The value of variable \'myscore\' = %d\n", myscore); //by this time only one variable exists the global one

	return 0;
}
