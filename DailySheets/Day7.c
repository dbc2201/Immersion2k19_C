//
// Created by Divyansh Bhardwaj, CEA, IET, GLAU
//
#include <stdio.h>

/*	Question 1
 * 	What is the output of this C code?
 * */

/*
int main() {
	while ()
		printf("In while loop");
	printf("After while loop");
}*/

//	Answer : C (ERROR)

/*	Question 2
 * 	What is the output of this C code?
 * */

/*
int main() {
	do
		printf("In do-while loop ");
	while (0);
	printf("After loop\n");
}*/

//	Answer : B (In do-while loop After loop)

/*	Question 3
 * 	What is the output of this C code?
 * */

/*
int main() {
	int i = 0;
	do {
		i++;
		printf("In while loop\n");
	} while (i < 3);
}*/

//	Answer : A (In do-while loop 3 times)

/*	Question 4
 * 	What is the output of this C code?
 * */

/*
void main() {
	int i = 2;
	do {
		printf("Hi");
	} while (i < 2)
}*/

//	Answer : A (Error)

/*	Question 5
 *	What is the output of this C code?
 * */

/*void main() {
	int i = 0;
	while (++i) {
		printf("H");
	}
}*/

//	Answer : B (H is printed infinite times)

/*	Question 6
 * 	The following code ‘for(;;)’ represents an infinite loop. It can be terminated by.
 * */

/*#include <stdlib.h>	//	for using abort() & exit()
int main(void) {
	for (;;) {
		//	break;
		//	abort();
		//	exit(0);
	}
	return 0;
}*/

//	Answer 6 : D (All of the above)

/*	Question 7
 * 	Which for loop has range of similar indexes of 'i' used in for (i = 0;i < n; i++)?
 * */

/*int main(void) {
	int i = 0;
	int n = 10;
	printf("\nQuestion --------\n");
	for (i = 0; i < n; i++) {
		printf("%d ", i);
	}
	printf("\nOption A --------\n");
	for (i = n; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\nOption B --------\n");
	for (i = n; i >= 0; i--) {
		printf("%d ", i);
	}
	printf("\nOption C --------\n");
	for (i = n - 1; i > 0; i--) {
		printf("%d ", i);
	}
	printf("\nOption D --------\n");
	for (i = n - 1; i > -1; i--) {
		printf("%d ", i);
	}
	return 0;
}*/

//	Answer 7 : D for (i = n - 1; i >= -1; i--)

/*	Question 8
 * 	What is the output of the C code/
 * */

/*int main() {
	short i;
	for (i = 1; i >= 0; i++)
		printf("%d\n", i);
}*/

//	Answer 8 : C (Numbers will be displayed until the signed limit of short and program will successfully terminate)

/*	Question 9
 * 	What is the output of this C code?
 * */

/*void main() {
	int k = 0;
	for (k)
		printf("Hello");
}*/

//	Answer 9 : A (Error)

/*	Question 10
 * 	What is the output of this C code?
 * */

/*
void main() {
	int k = 0;
	for (k < 3; k++)
		printf("Hello");
}*/

//	Answer 10 : A (Error)

/*	Question 11
 * 	What is the output of this C code?
 * */

/*void main() {
	double k = 0;
	for (k = 0.5; k < 3.0; k++)
		printf("Hello");
}*/

//	Answer 11 : B

/*	Question 12
 * 	What is the output of this C code?
 * */

/*extern int x;
int main() {
	do {
		do {
			printf("%o", x);
		} while (!-2);
	} while (0);
	return 0;
}
int x = 8;*/

//	Answer 12 : C (10 as an octal number)

/*	Question 13
 * 	What is the output of this C code?
 * */

/*int main() {
	int i = 2, j = 2;
	while (i + 1 ? --i : j++)
		printf("%d", i);
	return 0;
}*/

//	Answer 13 : A (1)

/*	Question 14
 * 	What is the output of this C code?
 * */

/*void main() {
	double k = 0;
	for (k = 0.0; k < 3.0; k++);
	printf("%lf", k);
}*/

//	Answer 14 : C (3.000000)

/*	Question 15
 * 	What is the output of this C code?
 * */

/*void main() {
	int k;
	for (k = -3; k < -5; k++)
		printf("Hello");
}*/

//	Answer 15 : D (No output)

/*	Question 16
 * 	What is the output of the C code?
 * */

/*
int main() {
	int i = 0;
	for (;; ;)
	printf("In for loop\n");
	printf("After loop\n");
}*/

//	Answer 16 : A (Error)

/*	Question 17
 * 	What is the output of this C code?
 * */

/*int main() {
	int i = 0;
	while (i = 0)
		printf("True\n");
	printf("False\n");
}*/

//	Answer 17 : C (False)

/*	Question 18
 * 	What is the output of this C code?
 * */

/*
int main() {
	int i = 0, j = 0;
	while (i < 5, j < 10) {
		i++;
		j++;
	}
	printf("%d, %d\n", i, j);
}*/

//	Answer 18 : C (10, 10)