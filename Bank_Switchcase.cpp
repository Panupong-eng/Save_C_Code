#include <stdio.h>
int main() {
    int service;
    printf("Input service number(1-2): ");
    scanf("%d", &service);
    switch (service) {
        case 1:
            printf("---Create account---\n");
            break;
        case 2:
            printf("---Deposit and Withdraw---\n");
            break;
        default:
            printf("---Invalid service number---\n");
    }
}