#include <stdio.h>

int main() 
{
    int a,i;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i += 2) 
    {
        printf("%d ", i);
    }

    return 0;
}
