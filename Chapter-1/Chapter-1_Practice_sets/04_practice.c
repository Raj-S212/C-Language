// Write a programe to calculate simple intrest fra set of values representing principal, no of year and vote of intrest

#include<stdio.h>

int main(){

    int principal =100, rate =4 , years =1 ;
    int simpleInterest = (principal * rate * years)/100;

    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}