/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 1 ;
    int b = 1 ;
    while (b <= 10 , a < 10){
        if (b < 10){
            printf("%d*%d=%d\t", a, b, a*b);
            b++ ;
        }
        else if(b == 10){
            printf("\n");
            a++ ;
            b = 1 ;
        }
    }
    return 0;
}




