#include <stdio.h>

int main(){
    // Weight converter program
    double kilograms = 0.0;
    double pounds = 0.0;
    int choice = 0;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2lf kilograms is equal to %.2lf pounds", kilograms, pounds);
    }
    else if(choice == 2){
      printf("Enter the weight in pounds: ");
      scanf("%lf", &pounds);
      kilograms = pounds/2.20462;
      printf("%.2lf pounds is equal to %.2lf kilograms", pounds, kilograms);  
    }
    else{
        printf("Enter either 1 or 2");
    }


    return 0;
}