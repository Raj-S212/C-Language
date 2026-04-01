#include<stdio.h>

int sum(int a, int b){
    int s = a + b;
    printf("The sum is %d\n", s);
    return s;
}

float average(int a, int b){
    float avg = (a + b) / 2.0;
    printf("The average is %f\n", avg);
    return avg;
}

int main(){
    
    int x = 4;
    int y = 6;

    int result1 = sum(x, y);
    float result2 = average(x, y);

    printf("Sum = %d, Average = %f\n", result1, result2);

    printf("Address of sum = %p and average = %p\n", sum, average);

    return 0;
}