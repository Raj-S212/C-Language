#include<stdio.h>

int main(){

   // float b = a + 8.9;  this code is not executed because a is not declared
   // float a = 1.1; this line is declare before upper line 

   float a = 1.1;
   float b = a + 8.9;

    printf("The value of b is %f\n",b);
    

    return 0;
}