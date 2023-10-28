#include <stdio.h>

// Define the structure for distance
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches separately
    result.inches = d1.inches + d2.inches;
    result.feet = 0;

    // Carry over if inches exceed 12
    while (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    // Add the feet part
    result.feet += d1.feet + d2.feet;

    return result;
}

// Function to display a distance
void displayDistance(struct Distance d) {
    printf("%d feet %.2f inches\n", d.feet, d.inches);
}

int main() {
    // Declare variables
    struct Distance distance1, distance2, sum;

    // Prompt user for input
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    // Call the function to add distances
    sum = addDistances(distance1, distance2);

    // Display the result
    printf("\nSum of distances: ");
    displayDistance(sum);

    return 0;
}

