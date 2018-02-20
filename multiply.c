#include <stdio.h>
int main()
{
    int a, y;

    printf("Enter the number:");
    scanf("%d",&a);

    for(y=1; y<=10; ++y)
    {
       printf("\n%d",a*y);
    }
}
