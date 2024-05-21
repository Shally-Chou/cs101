#include <stdio.h>
#include <string.h>

int main()
{
    int str[3], empty , a, b, c ;
    
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d", &str[i]) ;
    }
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = i+1 ; j < 3 ; j++){
            if(str[i]>str[j]){
                empty = str[i] ;
                str[i] = str[j] ;
                str[j] = empty ;
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("%d ",str[i]) ;
    }
    
    a = str[0];
    b = str[1];
    c = str[2];
    int cross = (a*a)+(b*b) ;
    if(a+b <= c){
        printf("\nNo");
    }
    else if(cross < (c*c)){
        printf("\nObtuse");
    }
    else if(cross == (c*c)){
        printf("\nRight");
    } else {
        printf("\nAcute");
    }
    

    return 0;
}
