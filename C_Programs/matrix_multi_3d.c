#include <stdio.h>

void matrixMultiplication(int A[][3][3], int B[][3][3], int C[][3][3], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j][k] = 0;
                for (int l = 0; l < n; l++) {
                    C[i][j][k] += A[i][j][l] * B[l][j][k];
                }
            }
        }
    }
}

int main() {
    int A[2][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}
    };

    int B[2][3][3] = {
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}},
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
    };

    int C[2][3][3];

    int m = 2;  // Number of matrices
    int n = 3;  // Rows
    int p = 3;  // Columns

    matrixMultiplication(A, B, C, m, n, p);

    // Printing the result
    for (int i = 0; i < m; i++) {
        printf("Matrix %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                printf("%d ", C[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

