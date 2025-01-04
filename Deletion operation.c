#include <stdio.h>

int main() {
    int arr[] = {5, 3, 2, 9, 8, 4};
    int i, pos, n = 6;

    printf("Enter which element you want to delete (1-%d): ", n);
    scanf("%d", &pos);

    if (pos <= 0 || pos > n) {
        printf("Invalid position\n");
        return 1; // Exit the program with error code
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce the array size
    }

    // Display the array after deletion
    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

