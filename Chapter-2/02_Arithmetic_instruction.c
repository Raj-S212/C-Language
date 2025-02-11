#include<stdio.h>
#include<math.h> // Include the math library for mathematical functions 

int main(){
    
    int a =4;
    int b =8;
    
    
    printf("The value of a+b is : %d\n", a + b);
    printf("The value of a-b is : %d\n", a - b);
    printf("The value of a*b is : %d\n", a * b);
    printf("The value of a/b is : %d\n", a / b);

    int z;
   
    z = b * a; // Legal
    // b * a = z;  Illegal

    printf("The value of z is : %d\n", z);
    
    printf("when 5 is divided by 2 leaves a remainder of %d\n",  5 % 2);
    printf("when 5 is divided by 2 leaves a remainder of %d\n",  -5 % 2);
    printf("when 5 is divided by 2 leaves a remainder of %d\n",  5 % -2);

    // No operator is assumed to be present
    // printf("The value of 4 * 5 is %d\n",(4)(5)); This line is not return 20 // Wrong
    
    printf("The value of 4 * 5 is %d\n",(4) * (5));

    // There is no operator to perform exponentiation  in c

    // printf("The value of 4 ^ 5 is %d\n"); // -> Will not produce 4 to the power 5 
    
    printf("The value of 4 to the power 5 is %f\n", pow( 2, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);            // int + int = int 
    printf("The value of 6 + 6.5 is %f\n", 6 + 6.5);       // int + float = float
    printf("The value of 6.1 + 6.5 is %f\n", 6.1 + 6.5);  // float + float = float
    printf("The value of 5/2 is %d \n", 5/2);            // int + int = int
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);      // int + float = float
    
    
    
    return 0;
}