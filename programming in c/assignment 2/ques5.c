#include <stdio.h>
#include <ctype.h> // For toupper() function

void convertToUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char inputString[100]; // Adjust the size as needed

    printf("Enter a string: ");
    scanf("%[^\n]", inputString); // Read the entire line

    convertToUpperCase(inputString);

    printf("Uppercase version of the string: %s\n", inputString);

    return 0;
}