#include <stdio.h>

int main() {
    while (1) {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number <= 0) {
            break;
        }

        if ((number % 2) != 0) {
            continue;
        }

        printf("%d\n", number);
    }

    return 0;
}
