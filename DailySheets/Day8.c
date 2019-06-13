//
// Created by Divyansh Bhardwaj
//

#include <stdio.h>

/*	Question 1
 * 	How many times is "*" printed?
 * */

/*
int main() {
	int x;
	for (x = -1; x <= 10; x++) {
		if (x < 5)
			continue;
		else
			break;
		printf("*");
	}
	return 0;
}*/

//	Answer 1 : B (0 times)

/*	Question 2
 * 	Point out the error, if any in the for loop.
 * */

/*
int main() {
	int i = 1;
	for (;;) {
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
	return 0;
}*/

//	Answer 2 : D (No error)

/*	Question 3
 *	Point out the error, if any in the while loop.
 * */

/*
int main() {
	int i = 1;
	while () {
		printf("%d\n", i++);
		if (i > 10)
			break;
	}
	return 0;
}*/

//	Answer 3 : A (There should be a condition in the while loop)

/*	Question 4
 * 	What is the output of this C code?
 * */

/*
void main() {
	int i = 0;
	if (i == 0) {
		printf("Hello");
		continue;
	}
}*/

//	Answer 4 : D (Error, continue is not is any loop)

/*	Question 5
 * 	What is the output of this C code?
 * */

/*
void main() {
	int i = 0;
	if (i == 0) {
		printf("Hello");
		break;
	}
}*/

//	Answer 5 : D (Error, break is not in any loop or switch statement)

/*	Question 6
 * 	What is the output of this C code?
 * */

/*
int main() {
	printf("before continue ");
	continue;
	printf("after continue\n");
}*/

//	Answer 6 : D (Error, continue is not in any loop statement)

/*	Question 7
 * 	The keyword ‘break’ cannot be simply used within:
 * */

//	Answer 7 : B (if-else)

/*	Question 8
 * 	What is the output of this C code?
 * */

/*
void main() {
	int i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (i > 1)
				break;
		}
		printf("Hi \n");
	}
}*/

//	Answer 8 : A (Hi is printed 5 times)

/*	Question 9
 *	What is the output of this C code?
 * */

/*
void main() {
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			if (i > 1)
				continue;
			printf("Hi \n");
		}
	}
}*/

//	Answer 9 : B (Hi is printed 8 times)

/*	Question 10
 * 	What is the output of this C code?
 * */

/*
int main() {
	int i = 0;
	do {
		i++;
		if (i == 2)
			continue;
		printf("In while loop ");
	} while (i < 2);
	printf("%d\n", i);
}*/

//	Answer 10 : A (In while loop 2)

/*	Question 11
 * What is the output of this C code?
 * */

/*
int main() {
	int i = 0, j = 0;
	for (i; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("1\n");
			break;
		}
		printf("2\n");
	}
	printf("after loop\n");
}*/

//	Answer 11 : C (1 \n 2 \n 1 \n 2 \n after loop )