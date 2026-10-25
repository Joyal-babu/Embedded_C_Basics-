/*
 * main2.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

    int a;

int main()
{
    a = 25;   // initilaizing the global variable , all un uninitialized global variables will have '0' as initial value

    {
        int my_var;  //*
        my_var = 40;

        printf("001value of local variable \'my_var\' = %d\n", my_var);
        printf("002value of global variable \'a\' = %d\n", a);
    }       //* my_var dies here

    int my_var;    //**

    my_var = my_var + 100;        // the rhs executes first and  then assigns it to lhs,  ** my_var is uninitialized so it takes a junk value during computation
    printf("003value of local variable \'my_var\' = %d\n",my_var);


    return 0;
}

