/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 17645 ;
    while(i>0){
        if(i > 0 && i < 10){
            printf("%d000",i);
        }
        else if(i >= 10 && i <100){
            int all = (i % 10)*1000 + i - (i%10) ;
            printf("%d", all);
        }
        else if (i >= 100 && i < 1000){
            int all_1 = ((i%100)%10)*1000 + i - (i%100)%10 ;
            printf("%d",all_1);
        }
        else if(i >= 1000){
            int all_2 = ((i%1000)%100)%10*1000 + (i/10)%100*10 + i%10000/1000 + i/10000*10000 ;
            printf("%d",all_2);
        }
        break ;
    }

    return 0;
}
