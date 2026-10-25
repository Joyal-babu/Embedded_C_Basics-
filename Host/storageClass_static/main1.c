/*
 * main1.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

void file1_fun1 (void);

//int mainPrivateData;    // global variable, accessile by all files

 static int mainPrivateData;    // if main.c wanted no one to change this variable outside the scope of this file, ie main.c wants to keep this variable private to this file
                               // it has to use static
                               // now this variable is only acessible inside the scope of main.c
                               // imposing privacy to the global variable
                               // static variables cannot be externed
int main()
{
    mainPrivateData = 100;

    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_fun1();

    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;
}
