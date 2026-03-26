#include<stdio.h>
// Function prototype
int sum(int , int );

// Function definition
int sum(int x, int y){

    printf("The sum is %d\n", x+y);
    return x+y;
}
int main()
{
    int a =1;
    int b=2;
    //int c = a + b;
    // printf("The sum of a and b is %d", c);

    sum(a,b);

    int a1 =4;
    int b1=5;

    //int c1 = a1 + b1;
    // printf("The sum of a1 and b1 is %d", c);

    sum(a1, b1);

    int a2 =7;
    int b2=8;

    //int c2 = a2 + b2;
    //printf("The sum of a2 and b2 is %d", c);

    sum(a2, b2);
    return 0;
}
