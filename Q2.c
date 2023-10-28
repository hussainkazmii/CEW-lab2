#include <stdio.h>

int pyramid() {
    // Declare variables
    int rows, i, j, space;

    // Prompt user for input
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Print the pyramid pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces before the asterisks
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

