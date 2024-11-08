#include <stdio.h>
#include <math.h>

int main()
{
    char fun;
    int a,b,ans;

    printf("This is a simple calculator.\n + = Addition\n - = Subtraction\n * = Multiplication\n / = Divsion\n m = Remainder\n s = square\n q = Square Root\n l = log\n p = power\n f = factorial\n");
    scanf("%s", &fun);

    printf("Enter you function.\n");

    printf("Enter the first number.\n");
    scanf("%d", &a);

    printf("Enter the second number.\n");
    scanf("%d", &b);

    switch (fun)
    {
        case '+' : ans = a + b;
        break;

        case '-' : ans = a - b;
        break;

        case '*' : ans = a * b;
        break;

        case '/' : ans = a / b;
        break;

        case 'm' : ans = a % b;
        break;

        case 's' : ans = a * a;
        break;

        case 'q' : ans = sqrt(a);
        break;

        case 'l' : ans = log(a);
        break;

        case 'p' : ans = pow(a,b);
        break;

        case 'f' : ans = 1;
                   for (int i = 1; i <= a; i++)
                   {
                       ans = ans * i;
                   }
        break;

        default : printf("Invalid function.\n");
    }

    printf("Your answer is: %d\n", ans);
}
