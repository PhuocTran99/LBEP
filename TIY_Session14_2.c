#include <stdio.h>

int main() {
	// Input size of 2 matrix
	int x, y;
	do {
		printf(">> Input size of matrix A and matrix B (>0): ");
		scanf("%d%d", &x, &y);
	} while(x < 0 || y < 0);
	int A[x][y], B[x][y], *p1 = A[0], *p2 = B[0];

	// Input matrix A
	printf(">> Input matrix A:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("Enter A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	// Input matrix B
	printf(">> Input matrix B:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("Enter B[%d][%d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	// Print matrix A and matrix B
	printf("\nMatrix A is:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%3d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B is:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%3d ", B[i][j]);
		}
		printf("\n");
	}

	//Sum of 2 matrix
	printf("\n>> Sum of (A+B) is:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%3d ", *(p1++)+*(p2++));
		}
		printf("\n");
	}
}
