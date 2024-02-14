#include <stdio.h>
#include <stdlib.h>

// Function to perform matrix multiplication
int** MatrixMultiplication(int **matrix1, int **matrix2, int rows1, int cols1, int cols2) {
    int **result, sum;

    // Allocate memory for the result matrix
    result = (int **)malloc(rows1 * sizeof(int *));
    
    for (int i = 0; i < rows1; i++) {
        // Allocate memory for each row of the result matrix
        result[i] = (int *)malloc(cols2 * sizeof(int));
        for (int j = 0; j < cols2; j++) {
            sum = 0;
            // Perform matrix multiplication
            for (int k = 0; k < cols1; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            // Store the result in the result matrix
            result[i][j] = sum;
        }
    }
    // Return the result matrix
    return result;
}

int main() {
    int rows1, cols1, cols2;
    
    // Input for the first matrix
    printf("Enter the number of rows for matrix1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix1: ");
    scanf("%d", &cols1);

    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) {
            // Input for each element of the first matrix
            printf("Enter the element at position (%d, %d) for matrix1: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter the number of columns for matrix2: ");
    scanf("%d", &cols2);

    int **matrix2 = (int **)malloc(cols1 * sizeof(int *));
    for (int a = 0; a < cols1; a++) {
        matrix2[a] = (int *)malloc(cols2 * sizeof(int));
        for (int b = 0; b < cols2; b++) {
            // Input for each element of the second matrix
            printf("Enter the element at position (%d, %d) for matrix2: ", a+1, b+1);
            scanf("%d", &matrix2[a][b]);
        }
    }

    if (cols1 != cols2) {
        printf("Multiplication not possible due to incompatible matrix dimensions.\n");
    } else {
        // Perform matrix multiplication and store the result
        int **result = MatrixMultiplication(matrix1, matrix2, rows1, cols1, cols2);
        printf("Resultant Matrix:\n");
        // Display the result matrix
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

        // Free allocated memory for the result matrix
        for (int i = 0; i < rows1; i++) {
            free(result[i]);
        }
        free(result);
    }

    // Free allocated memory for input matrices
    for (int i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < cols1; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    return 0;
}