/*
 * math.h
 *
 *  Created on: 06-Sept-2026
 *      Author: JOYAL
 */

#ifndef MATH_H_
#define MATH_H_

/* This are also called as exposed function prototypes
 * because main.c can include math.h and it will come to know about math.c functions */

int math_add(int N1, int N2);
int math_sub(int N1, int N2);
long long int math_mux(int N1, int N2);
float math_div(int N1, int N2);


#endif /* MATH_H_ */
