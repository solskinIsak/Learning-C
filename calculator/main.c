#include <stdio.h>
#include <math.h>

int main()
{
    // calc is short for caluclator for you guys who just turned in.

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operatr (+ - * /): ");
    scanf(" %c", &operator); // clear \n form the input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("You can't divide by zero!\n");
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        printf("not a valid operator\n");
        break;
    }
    printf("Result: %.4lf", result);

    return 0;
}