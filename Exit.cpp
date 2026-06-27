#include <stdio.h>
int main() {
    char exit;
    printf("Do you want to exit? (y/n): ");
    scanf(" %c", &exit);
    switch (exit){
        case 'y':
        case 'Y':
            printf("Exiting the program...\n");
            break;
        case 'n':
        case 'N':
            printf("Continuing the program...\n");
            break;
        default:
            printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
}