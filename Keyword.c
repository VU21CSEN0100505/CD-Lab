#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char *word) {
    // List of C keywords
    char keywords[][20] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };

    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    int i;

    // Convert the word to lowercase for case-insensitive comparison
    for (i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }

    // Check if the word is a keyword
    for (i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // Keyword found
        }
    }

    return 0; // Not a keyword
}

int main() {
    char word[20];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word)) {
        printf("%s is a C keyword.\n", word);
    } else {
        printf("%s is not a C keyword.\n", word);
    }

    return 0;
}

