//operation on strings 
// 1.to find length 
// 2.concatenate
// 3.revrse of a string
// 4.copy one string to another
#include <stdio.h>

// Function to find the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to concatenate two strings
void stringConcatenate(char *dest, const char *src) {
    int destLen = stringLength(dest);
    int i, j = 0;
    while (src[j] != '\0') {
        dest[destLen + j] = src[j];
        j++;
    }
    dest[destLen + j] = '\0';
}

// Function to reverse a string
void stringReverse(char *str) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to copy one string to another
void stringCopy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Find length of str1
    int len1 = stringLength(str1);
    printf("Length of the first string: %d\n", len1);

    // Concatenate str1 and str2
    stringCopy(result, str1);
    stringConcatenate(result, str2);
    printf("Concatenated string: %s\n", result);

    // Reverse str1
    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);

    // Copy str2 to a new string
    char copiedStr[100];
    stringCopy(copiedStr, str2);
    printf("Copied second string: %s\n", copiedStr);

    return 0;
}
