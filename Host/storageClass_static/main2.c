/*
 * main2.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

void file1_fun1 (void);

static int mainPrivateData;

int main()
{

    mainPrivateData = 100;

    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_fun1();

    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;
}

/*
    -for main.c this funcion is very critical and should not be called from other files
    -only functions of main.c should call this function
    -we should use "static" for that - for making this function private to main.c
*/

static void change_system_clk (int system_clk)
{
    printf("System clock changed to = %d\n", system_clk);
}
