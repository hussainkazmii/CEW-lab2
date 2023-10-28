#include <stdio.h>

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Strings are not equal
        }

        str1++;
        str2++;
    }

    // Check if both strings have reached the end
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; // Strings are equal
    } else {
        return 0; // Strings are not equal
    }
}

int main() {
    // Declare variables
    char str1[100], str2[100];

    // Prompt user for input
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the function to compare strings
    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

