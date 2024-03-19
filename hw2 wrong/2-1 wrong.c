
#include <stdio.h>

int main()
{
    
    FILE* fp_in , *fp_out ;
    fp_in = fopen("main.c" , "r") ;  //改成main2.c就過了
    int a_w[3] = {0, 1, 2};
    int a_r[3];
    char line[1000];
    
    fp_out = fopen("main2.txt", "w+");
    for (; fgets(line, sizeof(line), fp_in); fputs(line, fp_out));
    
    fclose(fp_in) ;
    fclose(fp_out) ;

    return 0;
}
