#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");

    scanf("%[^0-9]", str);

    printf("String without digits: %s\n", str);

    return 0;
}

// SORRY BUT DISCARDING THE NUMERIC CHARACTERS AND KEEPING THE REST OF THE STRING BY ONLY USING SCANSET IS NOT POSSIBLE
