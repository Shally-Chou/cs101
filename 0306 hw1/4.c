/******************************************************************************
array中的字母數字前後互換
input : 123abc
output : cba321
*******************************************************************************/
#include <stdio.h>
#include <string.h>

void anti_string(char str[]) {
    int start = 0;
    int end = strlen(str) -1 ;  // -1是因為長度為6時=str[5] 中間差1
    for ( ; start <= end ; start += 1, end -= 1) {   //沒=的話偶數個字母不會換
        char letter = str[start];
        str[start] = str[end];
        str[end] = letter ;
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    anti_string(str);
    printf("%s\n", str);

    return 0;
}
