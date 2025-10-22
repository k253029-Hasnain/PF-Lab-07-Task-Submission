#include <stdio.h>

int main()
{
    int length;
    printf("Enter the number of elements: ");
    scanf("%d", &length);

    if (length < 1)
    {
        printf("\nWrong Input!");
        return 1;
    }

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        printf("\nEnter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}