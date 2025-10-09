//WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility.
#include <stdio.h>
int main() {
    int m,n,p,q;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);
    if(n != p) {
        printf("Matrix multiplication not possible.\n");    //number of columns of A must be equal to number of rows of B
        return 0;
    }
    int A[m][n],B[p][q],C[m][q];
    printf("Enter elements of matrix A:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // multiplication
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            C[i][j] = 0;
            for(int k=0; k<n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("print elements of matrix A:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("print elements of matrix B:\n");
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Resultant matrix C (A x B):\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
