#include <stdio.h>

void transposeMatrix(int matrix[][10], int rows, int cols) {
    int transposedMatrix[10][10];

    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }

    printf("Transposed Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d\t", transposedMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Replace these values with your matrix dimensions and elements
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int rows = 2;
    int cols = 3;

    transposeMatrix(matrix, rows, cols);

    return 0;
}