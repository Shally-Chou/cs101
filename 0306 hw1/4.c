/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void anti_string(char str[]) {
    int start = 0;
    int end = strlen(str) -1 ;
    for ( ; start <= end ; start += 1, end -= 1) {
        char letter = str[start];
        str[start] = str[end];
        str[end] = letter ;
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    anti_string(str);
    printf("%s\n", str);

    return 0;
}
