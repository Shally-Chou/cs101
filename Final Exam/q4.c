#include <stdio.h>
#include <string.h>

int my_strlen(char* s){
    int len = strlen(s);
    return len;
}

int main(){
    char s[] = "IU is a girl!";
    printf("(%s) len = %d\n" , s , my_strlen(s));
    return 0;
}