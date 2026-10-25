/*
 * math.c
 *
 *  Created on: 06-Sept-2026
 *      Author: JOYAL
 */

int math_add(int N1, int N2);
int math_sub(int N1, int N2);
long long int math_mux(int N1, int N2);
float math_div(int N1, int N2);


int math_add(int N1, int N2)
{
	return N1+N2;         // returns integer
}


int math_sub(int N1, int N2)
{
	return N1-N2;         // returns integer
}


long long int math_mux(int N1, int N2)
{
//	return N1*N2;                        // returns integer as N1 and N2 both are integers
	return (long long int)N1*N2;         // returns 'long long int' as N1 typecasted -explicit- to long long int

}


float math_div(int N1, int N2)
{
// 	return N1/N2;                // returns integer as N1 and N2 both are integers
	return (float)N1/N2;         // returns float as N1 typecasted -explicit- to float
}



