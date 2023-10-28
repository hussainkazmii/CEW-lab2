#include <stdio.h>

// Function to print unique elements in an array
void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array: ");

    for (int i = 0; i < size; i++) {
        int isUnique = 1; // Flag to check uniqueness

        // Check if arr[i] is unique
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        // If arr[i] is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() {
    // Declare variables
    int size;

    // Prompt user for input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Prompt user to enter array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to print unique elements
    printUniqueElements(arr, size);

    return 0;
}

