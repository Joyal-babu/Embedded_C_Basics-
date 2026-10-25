/*
 * main1.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

int fun_add_numbers (int a, int b, int c);

int main()                                   // caller function
{
    int Ret_sum;
    Ret_sum = fun_add_numbers(29,70,33);


    printf("\n\nsum = %d\n", Ret_sum);

    return 0;
}

int fun_add_numbers (int a, int b, int c)    // calling function
{
    int sum;
    sum = a+b+c;

    return sum;
}
