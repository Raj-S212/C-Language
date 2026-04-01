#include<stdio.h>

int main(){
    int marks[] = {13, 25, 36, 48};
    int* ptr = marks; // ptr points to the first element of the array

    for (int  i = 0; i < 4; i++)
    {
        //printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
        
    }
    
    return 0;
}