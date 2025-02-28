//28.	Write a program which will calculate multiplication of two 3 by 3 matrices.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	//int i, j, k, l, p, q;
	//int matrice1[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//for ( i = 0; i < 3; i++) {
	//	for ( j = 0; j < 3; j++) {
	//		printf("%d\t", matrice1[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//int matrice2[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//for ( k = 0; k < 3; k++) {
	//	for ( l = 0; l < 3; l++) {
	//		printf("%d\t", matrice2[k][l]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//int matrice3[3][3];
	//for ( p = 0; p < 3; p++) {
	//	for ( q = 0; q < 3; q++) {
	//			matrice3[p][q] = matrice1[i][j] * matrice2[l][k];
	//			printf("%d\t", matrice3[p][q]);
	//	}
	//	printf("\n");
	//}
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int b[3][3] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]*b[j][i]);
		}
		printf("\n");
	}
}