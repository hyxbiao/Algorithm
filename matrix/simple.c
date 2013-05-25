#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n = 3;
	int A[n][n], B[n][n], C[n][n];

	srand(time(NULL));
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
			printf("%i:%i\t", A[i][j], B[i][j]);
		}
		printf("\n");
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			C[i][j] = 0;
			for(int k=0; k<n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("%i\t", C[i][j]);
		}
		printf("\n");
	}
	return 1;
}
