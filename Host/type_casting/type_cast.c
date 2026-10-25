/*
 * type_cast.c
 *
 *  Created on: 08-Sept-2026
 *      Author: JOYAL
 */

#include <stdio.h>

int main(void)
{
	// unsigned char data = 0x84 + 0xFF00;      //  warning: unsigned conversion from 'int' to 'unsigned char' changes value from '65412' to '132'

	//unsigned char data = 0x01 + 0x0052;         // 0  warnings - since there is no data loss

	unsigned char data = (unsigned char)(0x84 + 0xFF00);  //'explicit casting' - data loss will still be there - there won't be any warning

	// float result = (float)80/3;

	float result = 80/(float)3;

	printf("data = %x\n", data);           // fraction part gets omitted

	printf("data = %f\n", result);

}
