/******************************************************************************
input : A2a1B2b1C4
output : AAaBBbCCCC
*******************************************************************************/
#include <stdio.h>
#include <string.h>

void total_string(char str[]) {
    int len = strlen(str) ;
    if (len == 0) return ;

    for (int i = 0; i < len; i += 2) {
        int count = str[i + 1] - '0';
        for (int j = 0; j < count; j++) {
            printf("%c", str[i]) ;
        }
    }
}

int main() {
    char str[100] ;
    scanf("%s", str) ;
    total_string(str) ;
    return 0;
}
