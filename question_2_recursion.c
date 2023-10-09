#include <stdio.h>

// Function to check if a matrix is a binary matrix recursively
int isBinaryMatrixRecursive(int matrix[][100], int rows, int cols, int i, int j) {
    if (i == rows)
        return 1;
    if (matrix[i][j] != 0 && matrix[i][j] != 1)
        return 0;
    if (j == cols - 1)
        return isBinaryMatrixRecursive(matrix, rows, cols, i + 1, 0);
    else
        return isBinaryMatrixRecursive(matrix, rows, cols, i, j + 1);
}

int main() {
    int matrix[100][100];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isBinaryMatrixRecursive(matrix, rows, cols, 0, 0)) {
        printf("The entered matrix is a binary matrix.\n");
    } else {
        printf("The entered matrix is NOT a binary matrix.\n");
    }

    return 0;
}
