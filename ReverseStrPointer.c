#include <stdio.h>

int main() {
    char str[100], *start, *end, temp;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str; // Pointer to the beginning of the string
    end = str;

    // Move `end` pointer to the last character
    while (*end != '\0') {
        end++;
    }
    end--; // Step back to the last character

    // Reverse the string in place
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}