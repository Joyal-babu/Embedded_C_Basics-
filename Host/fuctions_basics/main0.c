/*
 * main0.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

void fun_add_numbers (int a, int b, int c);

int main()
{
    fun_add_numbers(12,14,17);
    fun_add_numbers(12,14,-17);

    int valueA = 20, valueB = 89;
    fun_add_numbers(valueA, valueB, 100);

    return 0;
}


// This is function definition
// a,b,c are local scope variables of function fun_add_numbers
// they aree used to receive data from other parts of the program
// these variables are also called as 'formal' parameters
// whenever we want to add three numbers we can call this function
// we can call it from main or some other functions

void fun_add_numbers (int a, int b, int c)
{
    int sum = 0;
    sum = a+b+c;
    printf("Sum = %d\n", sum);
}
