#include <stdio.h>

// Function to toggle the case of a character
char toggleCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A'; // Convert lowercase to uppercase
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a'; // Convert uppercase to lowercase
    } else {
        return ch; // Keep non-alphabetic characters unchanged
    }
}

int main() {
    // Declare variables
    char sentence[1000];

    // Prompt user for input
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Process each character in the sentence
    for (int i = 0; sentence[i] != '\0'; i++) {
        sentence[i] = toggleCase(sentence[i]);
    }

    // Display the modified sentence
    printf("Modified sentence: %s\n", sentence);

    return 0;
}

