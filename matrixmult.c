#include <stdio.h>

#define SIZE 3

// Function to multiply two matrices and store the result in 'result'
void matrix_mult(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    int i, j, k;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a 3x3 matrix
void display_matrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[SIZE][SIZE];

    // Multiply matrices and store the result in 'result'
    matrix_mult(matrix1, matrix2, result);

    // Display the resultant matrix
    printf("Resultant Matrix:\n");
    display_matrix(result);

    return 0;
}