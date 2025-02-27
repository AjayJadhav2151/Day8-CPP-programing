//26.	Write a program to insert an element into an array.Accept position of element to be inserted from user.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	int arr[5], pos;
	for (int i = 0; i <= 2; i++) {
		printf("Enter the position\n");
		scanf("%d", &pos);
		for (int j = 0; j <= pos; j++) {
		if (j == pos) {
			printf("Enter the value\n");
			scanf("%d", &arr[j]);
		}
		}
	}
	for (int i = 0; i <= 2; i++) {
		printf("%d %d", pos, arr);
	}
}