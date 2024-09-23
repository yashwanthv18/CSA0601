#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors other than 1 and the number itself
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }
    }

    // Output the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

