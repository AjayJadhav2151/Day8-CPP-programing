//22.	Write a program to accept date, month, year from the user in a function called getDate(), 
// and print that date in main() in dd / mm / yy format.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int getDate(int *date,int *month,int *year) {
	printf("Enter the Date\n");
	scanf("%d", date);
	printf("Enter the Month\n");
	scanf("%d", month);
	printf("Enter the Year\n");
	scanf("%d", year);
	return 0;
}
int main() {
	int date, month, year;
	
	getDate(&date, &month, &year);
	printf("%d/%d/%d", date, month, year);

}