#include <stdio.h>

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    int count= 10;
    while (count >= 1) {
    int product = number * count;
    printf("%d\n", product);
    count = count -1;
}
    return 0;
}