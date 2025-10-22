#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("\nWrong Input!");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nElements entered are:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("\nNumber %d in array has occurred more than once!", arr[i]);
                break;
            }
        }
    }


    return 0;
}