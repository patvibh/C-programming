// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int num;
    char res;
    printf("Enter: ");
    scanf("%d", &num);
    res = (num % 2==0) ? 'e' : 'o';
    if (res== 'e') {
        printf("even");
    }
    else {
        printf("odd");
    }

    return 0;
}