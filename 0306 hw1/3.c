
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char bin[8] ;
    scanf("%s" , bin) ;
    
    int len = strlen(bin) ;
    int total = 0 ;
    int j = 0 ;
    for(int i = len - 1 ; i < len && i >= 0 ; i--) {
        if ( j < 8 ) {
            int num = bin[i] - '0' ;
            int ans = num* (pow(2,j)) ;
            total += ans ;
        }
        j++  ;
    }
    
    printf("%X", total ) ;  //X輸出字母是大寫 x輸出字母是小寫

    return 0;
}
