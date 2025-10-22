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

    int arr[length], sum = 0;
    for (int i = 0; i < length; i++)
    {
        printf("\nEnter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nTotal Sum:\t%d", sum);

    return 0;
}