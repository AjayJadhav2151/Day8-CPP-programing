//21.	Write a menu driven program, which allows the user to select either a circle or rectangle.
//a.Write a single function areaCircum() that calculates the area and circumference of a circle.
// The values of area and circumference should be printed in main()
//b.Write a single function areaPeri() that calculates the area and perimeter of a rectangle.
// The values of area and perimeter should be printed in main()

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#define PI 3.14159265358979323846

int areaCircum(int ra, float *a, float *c) {
	*a = PI * (ra * ra);
	*c = 2 * PI * ra;
	return 0;
}
int areaPeri(int l, int b, int *a, int *p) {
	*a = l * b;
	*p = 2 * (l + b);
	return 0;
}
int main() {
	int choice;
	int r; 
	float area, circum;
	int len, bre, ar, peri;

	printf("\t\t Menu \t\t\t\n");
	printf("\t\t---------------\n");
	printf("\t\t Circle \n");
	printf("\t\t Reactangle \n");
	printf("\t\t---------------\n");
	printf("If you want to Calculate Area and Circumference of Circle then type 1\n");
	printf("If you want to Calculate Area and Circumference of Rectangle then type 2\n");
	printf("Enter your choice:\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1: 
		
		printf("Enter the Radius of Circle\n");
		scanf("%d", &r);
		areaCircum(r, &area, &circum);
	printf("Area of Circle is %f and circumference of a circle is %f", area, circum);
		break;
	
	case 2: 
		
		printf("Enter the Length of Rectangle\n");
		scanf("%d", &len);
		printf("Enter the Breadth of Rectangle\n");
		scanf("%d", &bre);
		areaPeri(len , bre, &ar, &peri);
		printf("Area of rectangle is %d and perimeter of a rectangle is %d", ar, peri);
		break;
	

	default:
		printf("Wrong choice\n");
		break;
	}
	return 0;
}
