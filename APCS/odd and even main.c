/******************************************************************************
偶數和-奇數和 取絕對值
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[1000];
    int even=0 , odd=0 ;
    
    scanf("%s", str) ;
    
    int len = strlen(str) ;
    int num = atoi(str) ;
    
    for(int i = 0 ; i < len ; i++){
        
        if(i % 2 == 0){
            even += (num % 10) ;
        }
        else{
            odd += (num % 10) ;
        }
        num = num / 10 ;
        
    }
    
    if(even>odd){
        printf("%d", even-odd) ;
    }else{
        printf("%d", odd-even) ;
    }
    
    return 0;
}
