/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[10] ; 
    scanf("%s" , str ) ;
    int len = strlen(str) ;
    int j = len - 1 ;
    int total = 0 ;
    int ans ;
    
    for(int i = 0 ; i < len ; i++ ) {
        int num = str[i] - '0' ;
        if(j >= 0) {
            ans = num* (pow(10,j)) ;
            total += ans ;
        }
        j-- ;
    }

    printf("%d", total%7);
    

    return 0;
}
