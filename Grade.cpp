#include <stdio.h>
int main() {
    int score;
    char name[100];
    printf("Hello, World!\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf	("Enter your score: ");
    scanf("%d", &score);
    printf("-------------------------------\n");
    char grade;
    if(score >= 80 && score <= 100){
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        grade = 'A';
        printf("Grade: %c\n", grade);
        printf("-------------------------------\n");
    }
    else if(score>=70 && score<79){
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        grade = 'B';
        printf("Grade: %c\n", grade);
        printf("-------------------------------\n");
    }
    else if(score>=60 && score<69){
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        grade = 'C';
        printf("Grade: %c\n", grade);
        printf("-------------------------------\n");
    }
    else if(score>=50 && score<59){
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        grade = 'D';
        printf("Grade: %c\n", grade);
        printf("-------------------------------\n");
    }
    else if(score>=0 && score<49){
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        grade = 'F';
        printf("Grade: %c\n", grade);
        printf("-------------------------------\n");
    }
    else {
        grade = 'N';
        printf("Hello %s\n", name);
        printf("Your score is: %d\n", score);
        printf("That score is invalid\n");
        printf("Grade: %c\n", grade);
        printf("Please enter a score between 0-100\n");
        printf("Try again\n");
        printf("-------------------------------\n");
    }
}	
