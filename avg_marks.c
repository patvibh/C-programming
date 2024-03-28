#include <stdio.h>

int main() {
    int i;
    double marks[5];
    printf("Enter marks:\n");
    
    for (i= 0; i<5; ++i) {
        scanf("%lf", &marks[i]);
        
    }
    
    double sum;
    for (i= 0; i<5; ++i) {
        sum = marks[i]+ sum; 
    }
    double avg_marks = sum/5;
    printf("The average marks of a student: %.2lf", avg_marks);
    
    return 0;
}