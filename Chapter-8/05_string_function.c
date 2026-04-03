#include<stdio.h>
#include<string.h>

int main(){

    char st[] = "Harry";
    char st1[56] = " Harry";
    char st2[56] = " bhai";

    printf("%d\n", strlen(st));
    char target[30];
    strcpy(target, st);
    //printf("%s %s", st, target);
    
    strcat(st1, st2);
    //printf("%s %s", st1, st2);

    int a = strcmp("far","ajoke");
    printf("%d", a);
    return 0;
}