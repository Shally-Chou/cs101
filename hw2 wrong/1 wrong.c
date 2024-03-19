#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N ;
    scanf("%d", &N) ;
    srand((unsigned)time(NULL)) ;
    int num ;
    int repeat , rewrite = 0 ;
    
    for(int i = 1 ; i <= N ; i++){
        printf("[%d]: " , i) ;
        for(int j = 0 ; j < 7 ; j++){
            num = (rand()%69) + 1 ;
            if(num < 10) {
            printf("0%d ", num);
            }
            else {
                printf("%d ", num);
            }
            repeat = num ;
            num = rewrite ;
        }
        printf("\n") ;
    }
    
    if(N != 5){
        for( ; N < 5 ; ){
            N += 1 ;
            printf("[%d]: " , N) ;
            for(int a = 0 ; a < 7 ; a++){
                printf("__ ") ;
            }
            printf("\n") ;
        }
    }

    return 0;
}
