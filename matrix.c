#include<stdio.h>
int main() {
    int A[20][20], B[20][20], C[20][20];
    int m, n, p, q;
    int i, j, k;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter Matrix A (row-major order):\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);
    printf("Enter Matrix B (column-major order):");
    for(j = 0; j < q; j++)
        for(i = 0; i < p; i++)
            scanf("%d", &B[i][j]);
    if(n != p) {
        printf("Matrix multiplication not possible");
        return 0;
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }
    printf("\nResultant Matrix C = A x B:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }
    return 0;
}
