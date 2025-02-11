//Which of the following variable is valid or invalid in C ?
#include<stdio.h>

int main(){
    
    int a; int b=a;    // valid
    int v = 3^3;       // valid
    char dt = '21';    // invalid
   
    printf("%d\n",v);
    
    return 0;
}