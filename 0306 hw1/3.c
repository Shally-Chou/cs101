/******************************************************************************
2進位轉16進位 最多8bits
input : 11111111 
output : FF
*******************************************************************************/
#include <stdio.h>
#include <string.h>  // 用strlen要加
#include <math.h>  // 要用pow就要記得加

int main() {
    char bin[8] ;
    scanf("%s" , bin) ;
    
    int len = strlen(bin) ;  // 算總共有幾個字元 bin[]="123abc" strlen=6
    int total = 0 ;
    int j = 0 ;
    for(int i = len - 1 ; i < len && i >= 0 ; i--) {
        if ( j < 8 ) {
            int num = bin[i] - '0' ;
            int ans = num* (pow(2,j)) ;   // pow用來算次方的 pow(底數,指數) 通常指數部分用迴圈
            total += ans ;
        }
        j++  ;
    }
    
    printf("%X", total ) ;  //X輸出字母是大寫 x輸出字母是小寫

    return 0;
}
