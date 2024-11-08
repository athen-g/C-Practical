#include <stdio.h>

int main()
{
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n==0) || (n==1))
    {
        printf("Nither Prime nor Composite.\n");
    }

    else if (n==2)
    {
        printf("Prime\n");
    }

    else if (n > 2)
    {    
        for (i=2; i<=n; i++) 
        {
            if (n%i==0)
            {
                printf("Not Prime\n");
                break;
            }
            else if (i+1==n)
            {
                printf("Prime\n");
                break;
            }
        }
    }

    else
    {
        printf("ERROR\n");
    }
}
