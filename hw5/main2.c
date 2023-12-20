/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    double x = 3 ;
    bool negative = 1 ;
    double pi = 4 ;
    while (1){
        if (negative){
            pi -= (4.0 / x);
        }
        else {
            pi += (4.0 / x) ;
        }
        
        if ((pi >= 3.141585) && (pi <= 3.141594)) {
            break ;
        }
        else {
            negative = !negative ;
            x += 2.0 ;
        }
    }
    printf("x = %0.0f\tPI = %.5f",x,pi) ;

    return 0;
}
