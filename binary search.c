#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculating the factorial using a loop
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Output the factorial
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
