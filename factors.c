#include <stdio.h>

int main()
{
    int num, i = 2;

    // Ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    while (num != 1) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
            num /= i;
        } 
        else 
        {
            i++;
        }
    }
    printf("\n");

    return 0;
}
