#include <stdio.h>
#include <math.h>
int main() {
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    double squareroot = sqrt(number);
    double result;
    result = pow(number, squareroot);
    printf("Result: %.2lf", result);
    return 0;
}