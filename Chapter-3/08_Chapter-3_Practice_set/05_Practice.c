#include<stdio.h>

int main(){
    char ch = 'a';
    printf("The value of ch is %c\n", ch);
    printf("The value of ch is %d\n", ch);

    if(ch>= 97 && ch<=122){
        printf("ch is an lowercase alphabet\n");
    }
    else{
        printf("ch is not an lowercase alphabet\n");
    }
    return 0;
}