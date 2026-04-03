#include<stdio.h>

int string_length(char str[]){
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(){
    char str[] = "Hello";

    int count = string_length(str);

    printf("%d", count);

    return 0;
}