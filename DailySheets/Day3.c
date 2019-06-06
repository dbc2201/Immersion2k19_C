//
// Created by divyanshbhardwaj
//

#include <stdio.h>

/*	Question 1
 * 	What would be the output of the following code statement?
	printf(“%d”, printf(“Jon Snow”));
 * 	Answer: A
 * */

/*int main() {
	printf("%d", printf("Jon Snow"));
	return 0;
}*/

/*	Question 2
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*#include <stdio.h>
int main() {
	float a = 0.5f, b = 0.7f;
	if ( b < 0.8 ) {
		if ( a < 0.5 ) {
			printf("ABCD");
		} else {
			printf("PQR");
		}
	} else {
		printf("JKLF");
	}
	return 0;
}*/


/*	Question 3
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*#include <stdio.h>
int main() {
	int var = 010;
	printf("%d", var);
	return 0;
}*/

/*	Question 4
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*#include <stdio.h>
int main() {
	signed char chr;
	chr = 128;
	printf("%d \n", chr);
	return 0;
}*/

/*	Question 5
 *	What would be the output of the following C code?
 * 	Answer: D
 * */

/*#include <stdio.h>
int main() {
	int max-val = 100;
	int min-val = 10;
	int avg-val;
	avg-val = max-val + min-val / 2;
	printf(“%d”, avg-val);
	return 0;
}*/

/*	Question 6
 *	Consider the following declaration statements,
 * 	Answer: C
 * */

/*#include <limits.h>
#include <float.h>
int main() {
	*//*short const register i = 10;		// 1
	// i = 11;
	static volatile const int i1 = 10;	// 2
	unsigned auto long register i2 = 10; // 3
	signed extern float i3 = 10.0;		// 4*//*
	printf("%d \n", INT_MAX);
	printf("%f\n", FLT_MAX);
	printf("%f\n", DBL_MAX);
	//	FLOATING POINT NUMBERS
	//	DOUBLE PRECISION FLOATING POINT NUMBERS
	return 0;
}*/

/*	Question 7
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*#include <stdio.h>
int x;
void main() {
	int x = 1;
	if (x) {
		printf("hi") ;
	} else {
		printf("how are you");
	}
}*/

/*	Question 8
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*int main() {
	long i = 30000;
	printf("%d", i);
}*/

/*	Question 9
 *	What would be the output of the following C code?
 * 	Answer: C
 * */

/*#include <stdio.h>
int main() {
	int class = 150;
	int public = 25;
	int private = 30;
	class = class >> private - public;
	printf("%d", class);
	return 0;
}*/

/*	Question 10
 *	What would be the output of the following C code?
 * 	Answer: B
 * */

/*#include <stdio.h>
int main() {
	int abcdefghijklmnopqrsstuvwxyz123456789 = 10;
	int abcdefghijklmnopqrstuvwxyz123456 = 40;
	printf("%d", abcdefghijklmnopqrstuvwxyz123456);
	return 0;
}*/

/*	Question 11
 *	What would be the output of the following C code?
 * 	Answer: A
 * */

/*#include <stdio.h>
int main() {
	printf("C Programming %s",
 "Class by \n %s Divyansh Bhardwaj", "Nice");
	return 0;
}*/

/*	Question 12
 *	What would be the output of the following C code?
 * 	Answer: A
 * */

/*#include <stdio.h>
int main() {
	int a = -5;
	unsigned int b = -5u;
	if ( a == b ) {

		printf("Avatar");
	} else {
		printf("Alien");
	}
	return 0;
}*/

/*	Question 13
 *	What would be the output of the following C code?
 * 	Answer: None of the above, 16
 * */

/*#include <stdio.h>
int main() {
	int a = sizeof(signed) + sizeof(unsigned);
	int b = sizeof(const) + sizeof(volatile);
	printf("%d", a++ + b);
	return 0;
}*/

/*	Question 14
 *	What would be the output of the following C code?
 * 	Answer: D
 * */

/*#include <stdio.h>
int main() {
	char a = 250;
	int expr;
	expr = a + !a + ~a + ++a;
	printf("%d", expr);
	return 0;
}*/

/*	Question 15
 *	What would be the output of the following C code?
 * 	Answer: C
 * */

/*#include <stdio.h>
int main() {
	register xyz_123 = 91;
	auto pqr_123 = 991;
	const _lal_ = pqr_123 + ~xyz_123;
	printf("%d", _lal_);
	return 0;
}*/

/*	Question 16
 *	What would be the output of the following C code?
 * 	Answer: C
 * */

/*#include <stdio.h>
int main() {
	int __SMALL__ = 11;
	int y;
	y = __SMALL__ < 5;
	printf("%d", y);
	return 0;
}*/

/*	Question 17
 *	What would be the output of the following C code?
 * 	Answer: C
 * */

/*#include <stdio.h>
int main() {
	int __BIG__ = 32;
	int y;
	y = __BIG__ && 8;
	printf("%d", y);
	return 0;
}*/

/*	Question 18
 *	What would be the output of the following C code?
 * 	Answer:
 * */

/*#include <stdio.h>
static num;
int main() {
	printf("%d", num);
	return 0;
}
int num = 25;*/

/*	Question 19
 *	Consider the following code, which of the following identifiers are incorrect?
 * 	Answer: D
 * */

/*#include <stdio.h>
int main() {
	int sum_1;			//  1
	int _temperature;	//  2
	int TABLE;			//  3
	int 4th;			//  4
	return 0;
}*/

/*	Question 20
 *	Consider the following code, which of the following initialization statement
 *	is correct to store 32767 as an integer?
 * 	Answer: B
 * */

/*#include <stdio.h>
int main() {
	int a = 32767;     //  1
	int b = 32,767;    //  2
	int c = 32.767;    //  3
	int d = 032767;   //  4
	return 0;
}*/
