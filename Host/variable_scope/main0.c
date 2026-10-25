/*
 * main0.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

void myfun1(void); // function prototype/signature of myfun1

    //extern int myscore;            // global variable - variable is visible from all the functions of the file main.c
    int myscore;

int main()
{
    //int myscore;         // variable local to main function, access anywhere inside this function body

    myscore = 100;
    printf("001value of the Variable \'myscore\' = %d\n", myscore);

    myfun1();               // function call

   // printf("001value of the Variable \'myscore\' = %d\n", myscore);

    return 0;
}


//function definition
void myfun1(void)           // this function doesn't return anything and it doesn't takes any arguments
{
    myscore = 150;

    printf("002value of the Variable \'myscore\' = %d\n", myscore);

}
