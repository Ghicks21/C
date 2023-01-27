#include <stdio.h>

int main ()
{
    double num1, num2;
    char operator;

    printf("Please input two numbers, one at a time pressing enter inbetween values: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Please enter a operator(+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+')
    {
        double result = num1 + num2;
        printf("%.1lf\n", result);
    }
    else if (operator == '-')
    {
        double result = num1 - num2;
        printf("%.1lf\n", result);
    }
    else if (operator == '*')
    {
        double result = num1 * num2;
        printf("%.1lf\n", result);
    }
    else
    {
        double result = num1 / num2;
        printf("%.1lf\n", result);
    }

    return 0;
}
