#include <stdio.h>

// User-defined function to return cube of a number using pointer
int cube(int *num) {
    return (*num) * (*num) * (*num);
}

int main() {
    int arr[10][10];
    int size;
    int i, j;

    printf("Enter array's size (e.g., 2 for 2x2 matrix): ");
    scanf("%d", &size);

    // Input elements
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output cubes of all elements using pointer and function
    printf("\nCubes of all elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", cube(&arr[i][j]));  // Pass address of element
        }
        printf("\n");
    }

    return 0;
}
