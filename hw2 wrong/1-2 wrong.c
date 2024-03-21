#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N ;
    scanf("%d", &N) ;
    srand((unsigned)time(NULL)) ;
    int num ;
    int used[69] = { 0 };
    FILE* fp = fopen("lotto.txt" , "w+") ;
    fprintf(fp , "========= lotto649 =========\n") ;
    
    for(int i = 1 ; i <= N ; i++){
        fprintf(fp , "[%d]: " , i) ;
        for(int j = 0 ; j < 7 ; j++){
            for (;;){
                num = (rand() % 69) + 1;
                if (!used[num - 1]){
                    used[num - 1] = 1; 
                    break;
                }
            } 

            if(num < 10) {
                fprintf(fp , "0%d ", num);
            }
            else {
                fprintf(fp , "%d ", num);
            }
            num = 0 ;
        }
        
        fprintf(fp , "\n") ;
    }
    
    if(N != 5){
        for( ; N < 5 ; ){
            N += 1 ;
            fprintf(fp , "[%d]: " , N) ;
            for(int a = 0 ; a < 7 ; a++){
                fprintf(fp , "__ ") ;
            }
            fprintf(fp , "\n") ;
        }
    }
    fprintf(fp , "========= csie@CGU =========") ;
    
    fclose(fp) ;

    return 0;
}
