#include<stdio.h>
#include<math.h>

int main()
{
    int odd[10], even[10];
    int o, e, n;
    int osum = 0;
    int esum = 0;
    int count = 0;
    
    for(count = 0; count < 10; count++)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        
        if(n % 2 != 0)
        {
            osum += n;
            odd[count] = n;
        }
        
        else if(n % 2 == 0)
        {
            esum += n;
            even[count] = n;
        }
        
        else
        {
            printf("ERROR\n");
            break;
        }
    }
    
    printf("\nThe Odd numbers are: ");    
    for(count = 0; count < 10; count++)
    {
        printf("%d ", odd[count]);
    }

    printf("\nThe Even numbers are: ");
    for(count = 0; count < 10; count++)
    {
        printf("%d ", even[count]);
    }
    
    printf("\nThe sum of Odd numbers is: %d", osum);
    printf("\nThe sum of Even numbers is : %d\n", esum);
}
