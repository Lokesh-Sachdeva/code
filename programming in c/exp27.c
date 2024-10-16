// exp 26 with string function
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // (a) Find the length of the first string
    int len1 = strlen(str1);
    printf("Length of the first string: %d\n", len1);

    // (b) Concatenate the two strings
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);

    // (c) Reverse the first string
    strrev(str1);
    printf("Reversed first string: %s\n", str1);

    // (d) Copy the second string to a new string
    char copiedStr[100];
    strcpy(copiedStr, str2);
    printf("Copied second string: %s\n", copiedStr);

    return 0;
}
