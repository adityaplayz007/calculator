#include <stdio.h>
int main()
{

    int a, b;
    char op;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the seacond value: ");
    scanf("%d", &b);

    printf("Enter the Opreter +,-,*,/: ");
    scanf(" %c", &op);

    switch(op)
    {
    case '+':
        printf("Sum of a+b = %d", a + b);
        break;
    case '-':
        printf("Sub of a-b = %d", a - b);
        break;
    case '*':
        printf("Multi of a*b = %d", a * b);
        break;
    case '/':
        printf("Div of a/b = %d", a / b);
        break;
    default:
        printf("Invalied Op.");
        break;
    }
}