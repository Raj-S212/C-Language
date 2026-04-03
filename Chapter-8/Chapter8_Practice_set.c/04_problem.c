#include<stdio.h>

int mystrlen(char str[]){
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void mystrcpy(char target[], char source[]){
    int i = 0;

    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';   // add null character
}

int main()
{
    char source[] = "AmanS";
    char target[34];

    mystrcpy(target, source);

    printf("%s %s", target , source);

    return 0;
}