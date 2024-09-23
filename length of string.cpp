#include <stdio.h>
#include <string.h>  // For strlen function

// Function to calculate string length manually
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    // Taking input from the user
    printf("Enter a string: ");
    gets(str);  // For input

    // Using built-in function
    printf("Length of the string using strlen: %lu\n", strlen(str));

    // Using custom function
    printf("Length of the string without strlen: %d\n", stringLength(str));

    return 0;
}

