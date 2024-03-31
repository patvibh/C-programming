#include <stdio.h>

int main() {
    double salary;
    
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    
    double* ptr = &salary;
    
    printf("Your Salary: %.2lf\n", *ptr);
    
    double new_salary = *ptr * 2;
    
    printf("Your double salary: %.2lf", new_salary);
}
