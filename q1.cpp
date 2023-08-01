#include <stdio.h>

#define N 3 // Change this value to the desired matrix size

int main() {
    int mat1[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[N][N] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[N][N] = {0};

    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matrix 1:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

