#include <stdio.h>

// Function to find the maximum element in a matrix recursively
int findMax(int matrix[][10], int rows, int cols, int currentRow, int currentCol) {
    if (currentRow == rows - 1 && currentCol == cols - 1) {
        return matrix[currentRow][currentCol];
    } else {
        int maxInRest = findMax(matrix, rows, cols, currentRow, currentCol + 1);
        int maxInBelowRows = findMax(matrix, rows, cols, currentRow + 1, 0);
        return (matrix[currentRow][currentCol] > maxInRest) ? matrix[currentRow][currentCol] : maxInRest > maxInBelowRows ? maxInRest : maxInBelowRows;
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1;
    }

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");

    // Input elements into the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxElement = findMax(matrix, rows, cols, 0, 0);

    printf("The maximum element in the matrix is: %d\n", maxElement);

    return 0;
}
