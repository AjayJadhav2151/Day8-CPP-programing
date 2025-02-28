//25.	Write a program to delete an element from a user entered array.
// Accept position of element to be deleted from user.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	int arr[100], size, pos;
	printf("Enter the size of array\n");
	scanf("%d", &size);

	printf("Enter the element of array\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter the position and position between 0 and %d \n", size - 1);
	scanf("%d", &pos);

	printf("before deletion of position\n");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);

	}
	for (int i = pos - 1; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}

	size--;

	printf("\nAfter deletion of position\n");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}