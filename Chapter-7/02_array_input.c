#include<stdio.h>

int main(){
    int marks[90]; //Reverse space to store 90 integer values
 
    printf("Enter marks of 5 students\n");
    
    // scanf("%d", &marks[0]);
    //scanf("%d", &marks[1]);
    //scanf("%d", &marks[2]);
    //scanf("%d", &marks[3]);
    //scanf("%d", &marks[4]); 

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    
     printf("marks 0 and Marks 1 are %d and %d respectively\n", marks[0], marks[1]);
    
    return 0;
}