#include <stdio.h>

// Function to check if a matrix is a binary matrix
int isBinaryMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] != 1) {
                return 0; 
            }
        }
    }
    return 1;
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

    if (isBinaryMatrix(matrix, rows, cols)) {
        printf("The entered matrix is a binary matrix.\n");
    } else {
        printf("The entered matrix is NOT a binary matrix.\n");
    }

    return 0;
}
