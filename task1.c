#include <stdio.h>

#define N 4  

int main() {
    double A[N][N] = {
        {1.2, 2.3, 3.4, 4.5},
        {5.6, 6.7, 7.8, 8.9},
        {9.1, 1.2, 2.3, 3.4},
        {4.5, 5.6, 6.7, 7.8}
    };

    double sum = 0.0;

    printf("Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", A[i][j]);
            if (j > i) {
                sum += A[i][j];  
            }
        }
        printf("\n");
    }

    printf("\nThe sum of the elements above the main diagonal: %.2f\n", sum);

    return 0;
}
