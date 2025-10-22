#include <stdio.h>

int main() {
    int array[10];
    int target;

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Number %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nEnter Target Number: ");
    scanf("%d", &target);
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == target)
        {
            printf("\nIndex of %d is %d", target, i);
            break;
        }
    }

    return 0;
}
