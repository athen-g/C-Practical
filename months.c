#include <stdio.h>

int main()
{
    int m,d,n;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    m = n / 30;
    d = n % 30;

    printf("Months: %d ", m);
    printf("Days: %d\n", d);

    return(0);
}
