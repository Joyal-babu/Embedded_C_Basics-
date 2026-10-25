/*
 * main.c
 *
 *  Created on: 25-Oct-2026
 *      Author: JOYAL
 */

#include <stdio.h>

int main()
{
    unsigned char distA2B = 160;   // compiler generates the code to reserve 1 byte of memory for these varible distA2B
    unsigned char distB2C = 40;
    unsigned char distA2C;

    distA2C = distA2B + distB2C;

    //printf("Total Distance from A to C is : %uKm \n", distA2C);

    printf("\n \n The sum of %d and %d is %d \n", distA2B, distB2C, distA2C);

    return 0;
}
