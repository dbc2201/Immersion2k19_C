#include <stdio.h>

/*	Question 1
 *	What will be the output of the following C code?
 * */

/*const int a = 1, b = 2;

int main(void) {
	int x = 1;
	switch (x) {
		case a:
			printf("yes\n");
		case b:
			printf("no\n");
			break;
	}
	return 0;
}*/

/*	Answer 1: D*/

/*	Question 2
 * 	Read the code and select the correct replacement for switch
 * */

/*int main(void) {
	char ch = 'a';
	switch (ch) {
		case 'a':
		case 'A':
			printf("true");
	}
	return 0;
}*/

/*Answer 2: C*/

/*	Question 3
 *	Which of the following can’t be checked with a switch-case statement?
 * */

/*	Answer 3: C*/

/*	Question 4
 *	Which of the following can be checked with a switch-case statement?
 * */

/*	Answer 4: D*/

/*	Question 5
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int a = 5;
	a = a >= 4;
	switch (2) {
		case 0:
			int a = 8;
		case 1:
			int a = 10;
		case 2:
			++a;
		case 3:
			printf("%d", a);
	}
	return 0;
}*/

/*	Answer 5: D*/

/*	Question 6
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int a = 3, b = 2;
	a = a == b == 0;
	switch (1) {
		a = a + 10;
	}
	sizeof(a++);
	printf("%d", a);
	return 0;
}*/

/*	Answer 6: OUTPUT 1*/

/*	Question 7
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int a = 1;
	switch (a)
		case 1:
			printf("%d", a);
	case 2:
		printf("%d", a);
	case 3:
		printf("%d", a);
	default:
		printf("%d", a);
	return 0;
}*/

/*	Answer 7: D*/

/*	Question 8
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	switch (printf("Do")) {
		case 1:
			printf("First\n");
			break;
		case 2:
			printf("Second\n");
			break;
		default:
			printf("Default\n");
			break;
	}
	return 0;
}*/

/*	Answer 8: C*/

/*	Question 9
 *	What would be the output of the following C code?
 * */

/*#define I 10
int main(void) {
	auto money = 10;
	switch (money, money * 2) {
		case I:
			printf("Willian");
			break;
		case I * 2:
			printf("Warren");
			break;
		case I * 3:
			printf("Carlos");
			break;
		default:
			printf("Lawrence");
		case I * 4:
			printf("Inqvar");
			break;
	}
	return 0;
}*/

/*	Answer 9: B*/

/*	Question 10
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	unsigned char c = 280;
	switch (c) {
		printf("Start\t");
		case 280:
			printf("David Beckham\t");
		case 24:
			printf("Ronaldinho\t");
		default:
			printf("Ronaldo\t");
			printf("End");
	}
	return 0;
}*/

/*	Answer 10: D*/

/*	Question 11
 *	What would be the output of the following C code?
 * */

/*
#define max(a) a
int main() {
	int x = 1;
	switch (x) {
		case max(2):
			printf("yes\n");
		case max(1):
			printf("no\n");
			break;
	}
}*/

/*	Answer 11: C (N0)*/