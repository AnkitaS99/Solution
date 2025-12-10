#include <stdio.h>
#include <stdlib.h>   

int main() 
{
    double a, b;
    char op;

    printf("Welcome to Calculator\n");

    while (1) 
    {
        printf("\nEnter value of a: ");
        scanf("%lf", &a);

        printf("Enter value of b: ");
        scanf("%lf", &b);

        printf("Enter operation (+, -, *, /) or enter ! to exit: ");
        scanf(" %c", &op);

        switch (op)
        {
            case '+':
                printf("Result = %.2lf\n", a + b);
                break;

            case '-':
                printf("Result = %.2lf\n", a - b);
                break;

            case '*':
                printf("Result = %.2lf\n", a * b);
                break;

            case '/':
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result = %.2lf\n", a / b);
                break;

            case '!':
                exit(0);

            default:
                printf("Invalid operation!\n");
        }
    }

    return 0;
}

