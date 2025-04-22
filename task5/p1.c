#include <stdio.h>

int main() {
    int size, i;

    // Ask user for size of array
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Display negative elements
    printf("Negative elements from an Array: ");
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
