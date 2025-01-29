/**/
#include <stdio.h>
int main()
{
    int denominator = 1;
    float x, result = 1, numerator = 1;
    printf("Enter X:\n");
    scanf("%f", &x);
    for (int i = 1; i <= 10; i++)
    {
        denominator *= i;
        numerator *= x;
        printf("%d, %.2f\n", denominator, numerator);
        result += numerator/(float)denominator;
    }
    printf("Result = %.2f\n", result);
    return 0;
}