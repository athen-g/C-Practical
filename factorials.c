#include <stdio.h>
#include <math.h>

int main ()
{
    int fact, i, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i=1, fact=1; i<=n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);
}