#include <stdio.h>

/*	Question 1
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
int main() {
	int x = 2, y = 0;
	int z = (y++) ? y == 1 && x : 0;
	printf("%d\n", z);
	return 0;
}*/

/*	Answer 1: A*/

/*	Question 2
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
int main() {
	int a = 2;
	int b = 0;
	int y = (b == 0) ? a :(a > b) ? (b = 1): a;
	printf("%d\n", y);
}*/

/*	Answer 2: B*/

/*	Question 3
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
void main() {
	int k = 8;
	int m = 7;
	int z = k < m ? k++ : m++;
	printf("%d", z);
}*/

/*	Answer 3: A*/

/*	Question 4
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
void main() {
	int k = 8;
	int m = 7;
	int z = k < m ? k = m : m++;
	printf("%d", z);
}*/

/*	Answer 4: OUTPUT - 7*/

/*	Question 5
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
int main() {
	int x = 1;
	int y =  x == 1 ? getchar(): 2;
	printf("%d\n", y);
}*/

/*	Answer 5: C*/

/*	Question 6
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
int main() {
	int y = 1, x = 0;
	int p = (y++, x++) ? y : x;
	printf("%d\n", p);
}*/

/*	Answer 6: A*/

/*	Question 7
 *	What would be the output of the following C code?
 * */

/*#include <stdio.h>
int main() {
	int x = 1;
	short int i = 2;
	float f = 3;
	if (sizeof((x == 2) ? f : i) == sizeof(float))
		printf("float\n");
	else if (sizeof((x == 2) ? f : i) == sizeof(short int))
		printf("short int\n");
}*/

/*	Answer 7: A*/

/*	Question 8
 *	For initialization a = 2, c = 1, the value of a and c after this code will be
 * */

/*int main(void) {
	int a = 2;
	int c = 1;
	c = (c) ? a = 0 : 2;
	printf("%d %d\n", a, c);
	return 0;
}*/

/*	Answer 8: A*/

/*	Question 9
 *	What will be the data type of the expression
 * */

/*int main(void) {
	int a = 50;
	double var1 = 3.14;
	float var2 = 7.52f;
	a = (a < 50) ? var1 : var2;
	printf("%d", a);
	return 0;
}*/

/*	Answer 9: C*/

/*	Question 10
 *	Which expression has to be present in the following?
 * */

/*	Answer 10: D */

/*	Question 11
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int a = 0, b = 1, c = 3;
	*((a) ? &b : &a ) = a ? b : c;
	printf("%d, %d, %d\n", a, b, c);
	return 0;
}*/

/*	Answer 11: C*/

/*	Question 12
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int k, num = 30;
	k = (num <10) ? 100 : 200;
	printf("%d\n", num);
	return 0;
}*/

/*	Answer 12: OUTPUT 30 */

/*	Question 13
 *	Value of C after the following expressions
 *	initializations a = 1, b = 2, c = 1
 * */

/*int main(void) {
	int a = 1, b = 2, c = 1;
	c += (-c) ? a : b;
	printf("%d", c);
	return 0;
}*/

/*	Answer 13: B*/

/*	Question 14
 *	What would be the output of the following C code?
 * */

/*int main(void) {
	int x, y, z;
	x = y = z = 1;
	z = ++x || ++y && ++z;
	printf("x = %d, y = %d, z = %d", x, y, z);
	return 0;
}*/

/*	Answer 14: A*/

/*	Question 15
 *	What would be the output of the following C code?
 * */

/*int main() {
	int a = 10, b;
	a >= 5 ? b = 100 : b = 200;
	printf("%d\n", b);
	return 0;
}*/

/*	Answer 15: D*/