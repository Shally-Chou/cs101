/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 7 ;
    int spa = 7 ;
    int i = 0 ;
    int space = 8 ;
    for (int k = spa ; k >= 0 ; k--) {
        if (k == 0 && i <= n) {
            i++ ;
            if (i == 8){
                break ;
            }
            space -= 1 ;
            for (int j = 1 ; j <= i ; j++) {
            k = space ;
            printf("%d ", i ) ;
            }
            printf("\n") ;
        }
        else if ( k >= 1){
            printf(" ") ;
            spa-- ;
        }
    }
    return 0;
}
