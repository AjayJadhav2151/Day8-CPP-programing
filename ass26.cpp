//26.	Write a program to insert an element into an array.Accept position of element to be inserted
// from user.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	int arr[100], size, pos, element;
	printf("Enter the size of array\n");
	scanf("%d", &size);

	printf("Enter the element of array\n");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Array is\n");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("Enter the position and position between 0 and %d \n", size);
	scanf("%d", &pos);
	if (size >= 100 || size < 0) {
		printf("Invalid size!\n");
		return 1;
	}
	printf("Array before insertion:\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Enter the element to insert: ");
	scanf("%d", &element);
	for (int i = size-1; i >= pos; i--) {
		arr[i + 1] = arr[i];
	}
	arr[pos] = element;

	size++	;

	printf("\nAfter deletion of position\n");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}