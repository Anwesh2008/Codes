// Write a program to input two numbers and display their sum, difference, product and quotient.

#include <stdio.h>
int main(){
    int num1, num2, sum, difference, product, quotient;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    printf("The sum of %d and %d is = %d\n", num1, num2, sum);
    
    difference = num1 - num2;
    printf("The difference of %d and %d is = %d\n", num1, num2, difference);
    
    product = num1 * num2;
    printf("The product = %d\n", product);
    
    quotient = num1 / num2;
    printf("The quotient = %d\n", quotient);
    return 0;
}
