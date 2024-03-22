#include <stdio.h>
int fact(int n);
int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        result = fact(number);
        printf("The factorial is: %d", result);
    }
    else {
        printf("Enter a positive value");
    }
    return 0;
}
int fact(int n) {
    if (n==1 || n==0){
        return 1;
    }
    else {
        return n* fact(n-1);
    }
}
