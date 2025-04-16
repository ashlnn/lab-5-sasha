#include <stdio.h>

#define M 3  
#define N 3  

int main() {
    double A[M][N] = {
        {2.0, 3.0, 4.0},
        {1.0, 5.0, 2.0},
        {6.0, 7.0, 3.0}
    };

    double Y[M];

    printf("Matrix A:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++) {
        double row_sum = 0.0;
        for (int j = 0; j < N; j++) {
            row_sum += A[i][j];
        }

        if (A[i][i] != 0) {
            Y[i] = row_sum / A[i][i];
        } else {
            Y[i] = 0;  
        }
    }

    printf("\nVector Y (row sum / diagonal element):\n");
    for (int i = 0; i < M; i++) {
        printf("Y[%d] = %.2f\n", i, Y[i]);
    }

    return 0;
}
