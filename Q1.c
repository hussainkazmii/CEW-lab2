#include <stdio.h>

int main() {
    int n,i, number, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = 0;
    for ( i = 1; i <= n; i++) {
        number = 2 * i - 1;
        printf("%d ", number);
        sum += number;
    }
    printf("\nSum: %d\n", sum);

    printf("\nUsing while loop:\n");
    i = 1; // Reset i
    sum = 0; // Reset sum
    while (i <= n) {
        number = 2 * i - 1;
        printf("%d ", number);
        sum += number;
        i++;
    }
    printf("\nSum: %d\n", sum);

    // Using do-while loop
    printf("\nUsing do-while loop:\n");
    i = 1; // Reset i
    sum = 0; // Reset sum
    do {
        number = 2 * i - 1;
        printf("%d ", number);
        sum += number;
        i++;
    } while (i <= n);
    printf("\nSum: %d\n", sum);

    return 0;
}
