**Matrix Multiplication Program Readme**

### Overview:
This C program performs matrix multiplication of two matrices entered by the user. It includes dynamic memory allocation for matrix storage and checks for compatibility before multiplication.

### Compilation:
Compile the program using a C compiler. For example, using gcc:
```bash
gcc matrix_multiplication.c -o matrix_multiplication
```

### Execution:
Run the compiled program:
```bash
./matrix_multiplication
```

### User Input:
1. Enter the number of rows for the first matrix.
2. Enter the number of columns for the first matrix.
3. Input each element of the first matrix.
4. Enter the number of columns for the second matrix.
5. Input each element of the second matrix.

### Output:
The program displays the resultant matrix if multiplication is possible. Otherwise, it notifies the user of incompatible matrix dimensions.

### Important Notes:
- Matrix dimensions must be compatible for multiplication (cols1 == cols2).
- Dynamic memory allocation is used for matrices; memory is freed after use to prevent memory leaks.

### Example Usage:
```
Enter the number of rows for matrix1: 2
Enter the number of columns for matrix1: 3
Enter the element at position (1, 1) for matrix1: 1
Enter the element at position (1, 2) for matrix1: 2
Enter the element at position (1, 3) for matrix1: 3
Enter the element at position (2, 1) for matrix1: 4
Enter the element at position (2, 2) for matrix1: 5
Enter the element at position (2, 3) for matrix1: 6

Enter the number of columns for matrix2: 3
Enter the element at position (1, 1) for matrix2: 7
Enter the element at position (1, 2) for matrix2: 8
Enter the element at position (1, 3) for matrix2: 9
Enter the element at position (2, 1) for matrix2: 10
Enter the element at position (2, 2) for matrix2: 11
Enter the element at position (2, 3) for matrix2: 12

Resultant Matrix:
58 64 70
139 154 169
```

### Memory Management:
The program carefully manages memory using dynamic allocation and frees memory after use to ensure efficient resource utilization.

### Compatibility Check:
The program checks whether matrix multiplication is possible based on the compatibility of matrix dimensions and provides a relevant message to the user.

### Author:
ChocoPastry
