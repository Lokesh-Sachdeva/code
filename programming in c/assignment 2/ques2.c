#include <stdio.h>

void multiplyMatrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // Initialize elements of the result matrix to 0
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

int main() {
    // Replace these values with your matrix dimensions and elements
    int mat1[2][2] = { {1, 2}, {3, 4} };
    int mat2[2][2] = { {5, 6}, {7, 8} };
    int result[2][2];

    multiplyMatrices(mat1, mat2, result, 2, 2, 2, 2);

    // Display the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}