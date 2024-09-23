#include <stdio.h>

void copyString(char *source, char *destination) {
    int i = 0;
    
    // Copying each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add null terminator at the end of the destination string
    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    // Input the source string from the user
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Call the function to copy the string
    copyString(source, destination);

    // Output the destination string
    printf("Copied string: %s", destination);

    return 0;
}

