/*
 * main.c
 *
 *  Created on: 06-Oct-2026
 *      Author: JOYAL
 */

#include<stdio.h>


int main(void)
{
	float num1, num2, num3;
	float avg;

	printf("Enter num1: \n");
	fflush(stdout);
	scanf("%f", &num1);

	printf("Enter num2: \n");
	fflush(stdout);
	scanf("%f", &num2);

	printf("Enter num3: \n");
	fflush(stdout);
	scanf("%f", &num3);

	avg = (num1 + num2 + num3)/3;
	printf("\nAverage = %f\n\n", avg);

	printf("\"press ENTER to exit the application\"\n");
	while(getchar() != '\n')
	{

	}

	getchar();


}
