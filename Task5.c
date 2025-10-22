#include <stdio.h>

int main() {
    char spaces[100];
    int count = 0;

    printf("Enter a string: ");

    scanf("%[^\n]", spaces);

    for (int i = 0; i < 100; i++)
    {
        if (spaces[i] == ' ') count++;
    }

    printf("\nNumber of whitespace characters are: %d\n", count);
    return 0;
}
