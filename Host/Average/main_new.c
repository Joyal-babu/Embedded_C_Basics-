/*
 * main_new.c
 *
 *  Created on: 07-Oct-2026
 *      Author: JOYAL
 */


/*
 * main.c
 *
 *  Created on: 06-Oct-2026
 *      Author: JOYAL
 */

#include<stdio.h>


int main(void)
{
	double num1, num2, num3;
	double avg;

/*	printf("Enter num1: \n");
	fflush(stdout);
	scanf("%lf", &num1);

	printf("Enter num2: \n");
	fflush(stdout);
	scanf("%lf", &num2);

	printf("Enter num3: \n");
	fflush(stdout);
	scanf("%lf", &num3);

*/

	printf("Enter 3 numbers: \n");
	fflush(stdout);
	scanf(" %lf %lf %lf", &num1, &num2, &num3);

	avg = (num1 + num2 + num3)/3;
	printf("\nAverage = %lf\n\n", avg);

	printf("\"press ENTER to exit the application\"\n");
	while(getchar() != '\n')
	{

	}

	getchar();


}
