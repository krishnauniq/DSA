#include <stdio.h>

// Function to add two matrices
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;  // Initialize the result matrix element to 0
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 2, cols = 2;
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int resultAdd[2][2], resultMul[2][2];

    // Adding the matrices
    addMatrices(rows, cols, mat1, mat2, resultAdd);
    printf("Sum of the matrices:\n");
    printMatrix(rows, cols, resultAdd);

    // Multiplying the matrices
    multiplyMatrices(rows, cols, mat1, rows, cols, mat2, resultMul);
    printf("Product of the matrices:\n");
    printMatrix(rows, cols, resultMul);

    return 0;
}
