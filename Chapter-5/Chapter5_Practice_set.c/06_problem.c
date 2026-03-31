#include<stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
return sum_natural(n-1) + n;
}

int main(){
    printf("sum of 5 first five natural number is %d ",sum_natural(5));
return 0;
}