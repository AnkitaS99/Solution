#include <stdio.h>

int main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a * 2; i += 2) 
   {
         printf("%d ", i);
   }   

    return 0;
}
