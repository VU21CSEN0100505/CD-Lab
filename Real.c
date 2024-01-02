#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isReal(char *input) {
    int i, len;
    int dotCount = 0;

    // Check for empty string
    if (strlen(input) == 0) {
        return 0;
    }

    // Check for each character in the string
    for (i = 0, len = strlen(input); i < len; i++) {
        if (i == 0 && (input[i] == '+' || input[i] == '-')) {
            // Allow the first character to be '+' or '-'
            continue;
        }
        if (input[i] == '.') {
            // Allow only one dot in the number
            dotCount++;
            if (dotCount > 1) {
                return 0; // More than one dot, not a real number
            }
            continue;
        }
        if (!isdigit(input[i])) {
            // If any character is not a digit or dot, it's not a real number
            return 0;
        }
    }

    // If all characters are digits or the input is just '+' or '-'
    return 1;
}

int main() {
    char input[100];

    printf("Enter a number: ");
    scanf("%s", input);

    if (isReal(input)) {
        printf("%s is a real number.\n", input);
    } else {
        printf("%s is not a real number.\n", input);
    }

    return 0;
}

