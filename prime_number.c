#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n, count = 0, i;
        scanf("%d", &n);

        // Check if the number is prime
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }

        // Output the result for this test case
        if (count == 2)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
