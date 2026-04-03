// //Write a program to decrypt  characters.
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "!Sbk!Tibsnb";
    for (int  i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    
    return 0;
}