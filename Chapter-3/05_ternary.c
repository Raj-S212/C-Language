#include<stdio.h>

int main(){
    int a;

    printf("Enter your number\n");
    scanf("%d", &a);
   
    // One liner if else statement
    (a<5)? printf("A is less than 5") : printf("A is not less than 5");

    return 0;
}