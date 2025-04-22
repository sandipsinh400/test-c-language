#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input row and column size
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input array elements
    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input specific row number and show its elements and sum
    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for (j = 0; j < cols; j++) {
        printf("%d", arr[rowNum][j]);
        if (j < cols - 1) printf(", ");
        rowSum += arr[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, rowSum);

    // Input specific column number and show its elements and sum
    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for (i = 0; i < rows; i++) {
        printf("%d", arr[i][colNum]);
        if (i < rows - 1) printf(", ");
        colSum += arr[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
