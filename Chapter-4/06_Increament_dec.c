#include<stdio.h>

int main(){
    int i = 5;
     printf("The value of i is %d\n", i);
    i= i+5;
    printf("The value of i is %d\n", i);
    i++;
    printf("The value of i is %d\n", i);
    i--;
    printf("The value of i is %d\n", ++i);

    i+=2; //Same as i =i +2
    printf("The value of i is %d\n", i);

    return 0;
}