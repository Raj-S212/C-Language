// Explain step by step evaluation of 3*x/y-z+k where x=2, y=3, z=3, k=1
#include<stdio.h>

int main(){
    
    int x=2, y=3, z=3, k=1;
    int result = 3*x/y-z+k;
    
    // Solve the expression step by step  3*x/y-z+k;
    // 6/3-3+1
    // 2-3+1
    // 0

    printf("The value of 3*x/y-z+k is %d\n", result);
    return 0;
}