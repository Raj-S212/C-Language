#include<stdio.h>

float average(int a, int b, int c){
    float avg = (a+b+c)/3.0;
    return avg;
}
int main(){
    int a = 5, b = 10, c = 15;
    printf("The average is %f", average(a, b, c));
    return 0;
}