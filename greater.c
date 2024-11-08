#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("%d", a);
        printf(" is greater than ");
        printf("%d\n", b);
    }

    else if(a<b)
    {
        printf("%d", b);
        printf(" is greater than ");
        printf("%d\n", a);
    }

    else if(a==b)
    {
        printf("The numbers are equal.\n");
    }

    else
    {
        printf("ERROR\n");
    }

    printf("Thank you\n");

    return(0);
}	
