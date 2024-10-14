// #include <stdio.h>

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// } 



// #include <stdio.h>

// int main() {
//     int rows = 5; // Number of rows in the pattern

//     // Increasing part of the pattern
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     // Decreasing part of the pattern
//     for (int i = rows - 1; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n, i, *ptr,sum=0;
//     printf("enter no of elements");
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));

//     if (ptr==NULL){
//         printf("error");
//         exit(0);
//     }
// printf("enter elements");
// for(i=0;i<n;++i){
//     scanf("%d",ptr+i);
//     sum+=*(ptr+i);
// }    
// printf("sum=%d",sum);

// free(ptr);
// return 0;
// }




// #include <stdio.h>

// int main() {
//     FILE *sourceFile, *targetFile;
//     char ch;
//     int count = 0;

//     // Open source file in read mode
//     sourceFile = fopen("source.txt", "r");
//     if (sourceFile == NULL) {
//         printf("Error opening source file.\n");
//         return 1;
//     }

//     // Open target file in write mode
//     targetFile = fopen("target.txt", "w");
//     if (targetFile == NULL) {
//         fclose(sourceFile);
//         printf("Error creating target file.\n");
//         return 1;
//     }

//     // Copy characters and count
//     while ((ch = fgetc(sourceFile)) != EOF) {
//         fputc(ch, targetFile);
//         count++;
//     }

//     // Close files
//     fclose(sourceFile);
//     fclose(targetFile);

//     printf("File copied successfully. Number of characters copied: %d\n", count);

//     return 0;
// }




// #include <stdio.h>

// void multiplyMatrices(int row1, int col1, int A[row1][col1], int row2, int col2, int B[row2][col2], int result[row1][col2]) {
//     int i, j, k;

//     if (col1 != row2) {
//         printf("Matrices cannot be multiplied.\n");
//         return;
//     }

//     for (i = 0; i < row1; ++i) {
//         for (j = 0; j < col2; ++j) {
//             result[i][j] = 0;
//             for (k = 0; k < col1; ++k) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }

// void printMatrix(int row, int col, int matrix[row][col]) {
//     int i, j;
//     for (i = 0; i < row; ++i) {
//         for (j = 0; j < col; ++j) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int row1, col1, row2, col2;
//     printf("Enter the number of rows and columns of first matrix: ");
//     scanf("%d %d", &row1, &col1);

//     printf("Enter the number of rows and columns of second matrix: ");
//     scanf("%d %d", &row2, &col2);

//     if (col1 != row2) {
//         printf("Matrices cannot be multiplied.\n");
//         return 0;
//     }

//     int A[row1][col1], B[row2][col2], result[row1][col2];

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < row1; ++i) {
//         for (int j = 0; j < col1; ++j) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < row2; ++i) {
//         for (int j = 0; j < col2; ++j) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     multiplyMatrices(row1, col1, A, row2, col2, result);

//     printf("Resultant matrix:\n");
//     printMatrix(row1, col2, result);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// #define MAX_CUSTOMERS 200

// struct Customer {
//     int accountNumber;
//     char name[50];
//     float balance;
// };

// int main() {
//     struct Customer customers[MAX_CUSTOMERS];
//     int n, i;

//     printf("Enter the number of customers: ");
//     scanf("%d", &n);

//     if (n > MAX_CUSTOMERS) {
//         printf("Number of customers exceeds maximum limit.\n");
//         return 1;
//     }

//     printf("Enter customer details:\n");
//     for (i = 0; i < n; i++) {
//         printf("Customer %d:\n", i + 1);
//         printf("Account Number: ");
//         scanf("%d", &customers[i].accountNumber);
//         printf("Name: ");
//         scanf("%s", customers[i].name);
//         printf("Balance: ");
//         scanf("%f", &customers[i].balance);
//     }

//     printf("\nCustomers with balance less than Rs. 100:\n");
//     for (i = 0; i < n; i++) {
//         if (customers[i].balance < 100) {
//             printf("Account Number: %d\n", customers[i].accountNumber);
//             printf("Name: %s\n", customers[i].name);
//             printf("Balance: Rs. %.2f\n\n", customers[i].balance);
//         }
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char str[100];

//     // Writing to the file
//     fp = fopen("example.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file for writing!\n");
//         return 1;
//     }

//     fprintf(fp, "This is some text content to be written to the file.\n");
//     fclose(fp);

//     // Reading from the file
//     fp = fopen("example.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file for reading!\n");
//         return 1;
//     }

//     while (fgets(str, 100, fp) != NULL) {
//         printf("%s", str);
//     }

//     fclose(fp);

//     return 0;
// }




// #include <stdio.h>

// void multiplyMatrices(int a[][100], int b[][100], int result[][100], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < n; k++) {
//                 result[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
// }

// void printMatrix(int matrix[][100], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n;

//     printf("Enter the size of the matrices (n): ");
//     scanf("%d", &n);

//     int a[100][100], b[100][100], result[100][100];

//     printf("Enter the elements of the first matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter the elements of the second matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     multiplyMatrices(a, b, result, n); 

//     printf("Resultant matrix:\n");
//     printMatrix(result, n);

//     return 0;
// }











// #include <stdio.h>

// void transposeMatrix(int matrix[][100], int transpose[][100], int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
// }

// void printMatrix(int matrix[][100], int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);

//     int matrix[100][100], transpose[100][100];

//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             scanf("%d", &matrix[i][j]);
        }
//     }

//     transposeMatrix(matrix, transpose, rows, cols);

//     printf("Transpose of the matrix:\n");
//     printMatrix(transpose, cols, rows);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int num, reversed = 0, remainder;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Handle negative numbers
//     if (num < 0) {
//         num = -num;
//         printf("Reversed number: -");
//     }

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     printf("%d\n", reversed);

//     return 0;
// }