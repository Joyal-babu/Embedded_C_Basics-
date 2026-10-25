/*
 * main.c
 *
 *  Created on: 06-Sept-2026
 *      Author: JOYAL
 */
#include<stdio.h>            // std library header files - < >
#include"math.h"             // user defined header files - " "


int main()
{

	printf("ADD : %X\n", math_add(0x000FA001, 0x000FA001));

	printf("SUB : %X\n", math_sub(0x000FA001, 0x000A001));

	printf("MUL : %I64X\n", math_mux(0x000FA001, 0x000FA001));

	printf("DIV : %f\n", math_div(100, 12));

	return 0;
}
