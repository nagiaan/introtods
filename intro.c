#include <stdio.h>

// Collaborator: YOURNAME
int main() {
    float num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculating summary of numbers
    sum = num1 + num2;

    // Printing the result
    printf("The sum of %f and %f is %f\n", num1, num2, sum);

    return 0;
}
