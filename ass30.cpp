//30.	Write a program that calculates the average marks of all the subjects.
// The number of subjects ‘n’ is accepted from the user.
// Allocate memory dynamically for ‘n’ integers.
// Free the memory when not in use.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//include<stdlib.h>

int main() {
	int n;
	int* p, sum = 0, avg;
	printf("Enter the number of subject\n");
	scanf("%d", &n);
	p = (int*)malloc(sizeof(int)*n);
	printf("Enter the Marks for subject\n");
	for (int i = 1; i <= n; i++) {
		scanf("%d", &p[i]);
		sum = sum + p[i];
	}
	avg = sum / n;
	printf("Average of marks is %d :\n", avg);
	free(p);
	return 0;
}