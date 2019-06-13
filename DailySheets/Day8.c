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