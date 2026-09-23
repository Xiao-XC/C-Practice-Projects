#include <stdio.h>
#include <string.h>
int main(){
    // shopping cart program
    char item[50] = "";
    float price = 0.00f;
    int quantity = 0;
    char currency = '$';
    float total = 0.00f;

    printf("What item would you like to purchase?:");
    fgets(item, sizeof(item),stdin);
    item[strlen(item) -1] = '\0';

    printf("What is the price of the item/items?:");
    scanf("%f", &price);

    printf("How many of the item/items would you like to purchase?:");
    scanf("%d", &quantity);

    total = price*quantity;
    printf("\nYou have brought %d %s", quantity, item);
    printf("The total cost of %d %s is: %c%.2f\n", quantity, item, currency, total);
    printf("%c%.2f", currency, total);
    return 0;
}