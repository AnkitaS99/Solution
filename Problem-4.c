#include <stdio.h>

int main() 
{
    int arr[20], n, i,k;

    printf("Enter how many numbers you want to input (max 20): ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int count[10] = {0};

    for (i = 0; i < n; i++) 
    {
        for ( k = 1; k <= 9; k++) 
        {
            if (arr[i] % k == 0)
                count[k]++;
        }
    }

    printf("{ ");
    for (int k = 1; k <= 9; k++) 
    {
        printf("%d: %d", k, count[k]);
        if (k != 9)
            printf(", ");
    }
    printf(" }\n");

    return 0;
}
