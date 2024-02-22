#include <stdio.h>

int main()
{
	int num1, num2;
    float a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum and difference of integers: %d %d\n", num1 + num2, num1 - num2);
    printf("Sum and difference of floating-point numbers: %.1f %.1f", a + b, a - b);

    return 0;
}