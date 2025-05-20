#include <stdio.h>
#include <string.h>

struct Calculator
{
    double a;
    double b;
    char operation[10];
};

int main()
{
    struct Calculator calc;
    double result;

    printf("Enter first number (a): ");
    scanf("%lf", &calc.a);

    printf("Enter second number (b): ");
    scanf("%lf", &calc.b);

    printf("Enter operation (add, subtract, multiply, divide): ");
    scanf("%s", calc.operation);

    if (strcmp(calc.operation, "add") == 0)
    {
        result = calc.a + calc.b;
        printf("Result: %.2lf\n", result);
    }
    else if (strcmp(calc.operation, "subtract") == 0)
    {
        result = calc.a - calc.b;
        printf("Result: %.2lf\n", result);
    }
    else if (strcmp(calc.operation, "multiply") == 0)
    {
        result = calc.a * calc.b;
        printf("Result: %.2lf\n", result);
    }
    else if (strcmp(calc.operation, "divide") == 0)
    {
        if (calc.b != 0)
        {
            result = calc.a / calc.b;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Division by zero is not allowed\n");
        }
    }
    else
    {
        printf("Invalid operation\n");
    }

    return 0;
}