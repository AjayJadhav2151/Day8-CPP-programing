//23.	Write a program which accepts two integers in main().
// Pass these as arguments to function max().
// In max(), find the maximum of these two numbers and using a return statement, 
// return the address of the maximum number and print it in main().
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int max(int *a, int *b) {
	if (*a > *b) {
		return *a;
	}
	else {
		return *b;
	}
}
int main() {
	int a, b, c;
	printf("Enter the first integer\n");
	scanf("%d", &a);
	printf("Enter the second integer\n");
	scanf("%d", &b);
	c = max(&a, &b);
	printf("Max number is: %d", c);
}