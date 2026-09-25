#include <stdio.h>
#include <math.h>

int main(){
    float result =0.0, number1 = 0.0, number2 =0.0;
    char operator = '\0';

    printf("Enter the first number: ");
    scanf(" %f", &number1);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf(" %f", &number2);

    switch(operator){
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 -number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0){
                printf("You can't divide by zero!");
            }
            else{
                result = number1/number2;
            }
                break;
        default:
            printf("Enter a operator (+,-,*,/)");
            
    }
    printf("Result: %.4f", result);
    return 0;
}