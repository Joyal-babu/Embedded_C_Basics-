/*
 * main.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

int main()
{
    char  char_var           = 'a';
    short short_var          = 10;
    int   int_var            = 100;
    long  long_var           = 1000;
    long  long long_long_var = 100000;

    char size = sizeof(long_long_var);

    printf("size of \'char\' data type is %d bytes\n", sizeof(char));
    printf("size of \'short\' data type is %d bytes\n", sizeof(short int));
    printf("size of \'int\' data type is %d bytes\n", sizeof(int));
    printf("size of \'long\' data type is %d bytes\n", sizeof(long int ));
    printf("size of \'long long\' data type is %d bytes\n\n\n\n", sizeof(long long int));

    printf("size of \'char\' variable is %d bytes\n", sizeof(char_var));
    printf("size of \'short\' variable is %d bytes\n", sizeof(short_var));
    printf("size of \'int\' variable is %d bytes\n", sizeof(int_var));
    printf("size of \'long\' variable is %d bytes\n", sizeof(long_var));
    printf("size of \'long long\' variable is %d bytes\n\v\v", sizeof(long_long_var));

    printf("size of \'long long\' variable is %d bytes\n", size);


    return 0;
}
