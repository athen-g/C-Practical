#include <stdio.h>

int main()
{
    int y,b;

    printf("Enter current year: ");
    scanf("%d", &y);

    printf("Enter your birth year: ");
    scanf("%d", &b);

    int age = y - b;
    printf("Your age is: %d\n", age);

    return (0);
}
