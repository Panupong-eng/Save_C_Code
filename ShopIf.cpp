#include <stdio.h>
int main() {
    //nested-if statement
    int money;
    printf("Enter customer money: ");
    scanf("%d", &money);
    if (money >= 20000){
        printf("You have discount!\n");
        if (money >= 20000) {
            printf("You have 10%% discount.\n");
            int total_money = money - (money * 0.1);
            printf("Your total money is: %d\n", total_money);
        }
        else if (money >= 30000) {
            printf("You have 20%% discount.\n");
            int total_money = money - (money * 0.2);
            printf("Your total money is: %d\n", total_money);
        }
        else if (money >= 40000) {
            printf("You have 30%% discount.\n");
            int total_money = money - (money * 0.3);
            printf("Your total money is: %d\n", total_money);
        }
        else if (money >= 50000) {
            printf("You have 40%% discount.\n");
            int total_money = money - (money * 0.4);
            printf("Your total money is: %d\n", total_money);
        }
        else if (money >= 60000) {
            printf("You have 50%% discount.\n");
            int total_money = money - (money * 0.5);
            printf("Your total money is: %d\n", total_money);
        }
    }
    else {
        printf("You do not have discount.\n");
    }
}