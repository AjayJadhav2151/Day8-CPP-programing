//27.	Write a program to accept and display 3 by 3 matrix.Write Accept() and Display() functions to 
// perform the tasks.
//a.Find the transpose of a matrix and print the transpose using display() function.
//b.Accept another matrix of same dimensions.Find the addition of two matrices and print the resultant matrix.

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
	
void accept(int a[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter Data..");
			scanf("%d", &a[i][j]);
		}
	}
}
void display(int a[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void display1(int a[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}

void disadd(int a[3][3], int b[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a[3][3], b[3][3];
	accept(a);
	display(a);
	printf("Transpose of a matrix\n");
	display1(a);
	accept(b);
	printf("Addition of two matrix\n");
	disadd(a, b);
	return 0;
}