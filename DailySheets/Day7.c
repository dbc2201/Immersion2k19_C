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

/*
#include <stdlib.h>	//	for using abort() & exit()
int main(void) {
	for (;;) {
		//	break;
		//	abort();
		//	exit(0);
	}
	return 0;
}*/

//	Answer 6 : D (All of the above)