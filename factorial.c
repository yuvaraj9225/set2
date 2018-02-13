#include <stdio.h>
void main()
{
    int a, b;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&a);
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(b=1; b<=a; ++b)
        {
            factorial *= b;
        }
        printf("Factorial of %d", factorial);
    }
}
