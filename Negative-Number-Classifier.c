#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (1) {
        if (number > 0) {
            printf("Positive value\n");
            break;
        } else if ((number % 2) != 0 && number < 0) {
            printf("Negative odd number\n");
            break;  // Exit the loop after printing the message
        } else if ((number % 2) == 0 && number < 0) {
            printf("Negative even number\n");
            break;  // Exit the loop after printing the message
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            break;  // Exit the loop after printing the message
        }
    }

    return 0;
}
