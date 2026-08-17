// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main(){
    int first, second, temporary;
    printf("Enter first number: ");
    scanf("%d", &first);
    
    printf("Enter second number: ");
    scanf("%d", &second);
    
    printf("\n Before swapping \n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);
    
    temporary = first;
    first = second;
    second = temporary;
    
    printf("\n After swapping \n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);
    return 0;
}
