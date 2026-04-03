#include<stdio.h>

int main(){
//char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc";  // ✅ this is the correct way to declare a string in C
//for (int  i = 0; i < 3; i++)
// {
// printf("%c\n",st[i]);
// }
printf("%s",st);
   
    return 0;
}