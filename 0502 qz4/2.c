/******************************************************************************
使用遞迴的方式將字串反轉印出
intput : 123abc
output : cba321
*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str) ;
    
    if(len>0){
        printf("%c",str[len-1]);
        str[len-1] = '\0' ;
        reverse(str) ;
        str[len-1] = str[len] ;
    }
}

int main(){
    char str[100];
    scanf("%99s", str);
    reverse(str);
    return 0;
}
