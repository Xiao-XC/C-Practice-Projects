#include <stdio.h>
#include <windows.h>
void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance =0.0;

    printf("*** WELCOME TO UNRELIABLE BANKING ***\n");

    do{
        printf("Select an option:\n\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit");
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThanks for using UNRELIABLE BANKING!\n");
                break;
            default:
                printf("\nInvalid Choice PLease select 1-4\n");
        }


    } while (choice != 4);


}


void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
    if (balance == 0.0){
        printf("\nYOUR BROKE!\nGET YOUR MONEY UP NOT YOUR FUNNY UP\n");
    }
}

float deposit(){
    float amount = 0.0f;
    printf("\nEnter amount to deposit: $");
    scanf(" %f", &amount);

    if(amount <0){
        printf("Bruh\n");
        Sleep(500);
        printf("Did you just try to deposit negative money?\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }

    return 0.0f;

}
float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf(" %f", &amount);

    if(amount < 0){
        printf("Dawg you are taking money out\n");
        return 0.0f;
    }
    else if (amount > balance){
        printf("Dawg your broke...\n");
        Sleep(500);
        printf("Check your balance\n");
        return 0.0f;
    }
    else{
        printf("Successfully withdrew $%.2f", amount);
        return amount;
    }

}