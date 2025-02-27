//24.	Accept five integers in an array and use separate functions to :
//a.Find maximum and minimum of the integers.Do not sort the array.
//b.Multiply each element of the array by 5 and store it in another array and display it.

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int Max(int arr[], int n, int *max) {
	*max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
	return 0;
}
int Min(int arr[], int n, int *min) {
	*min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
	}
	return 0;
}
int main() {
	int arr[10], n, max, min;
	for (int i = 0; i < 5; i++) {
	printf("Enter the five numbers\n");
	scanf("%d", &arr[i]);
	}
	Max(arr, 5, &max);
	Min(arr, 5, &min);
		printf("Max number is :%d\n", max);
		printf("Min number is :%d", min);
}