#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp_in , *fp_out ;
    fp_in = fopen("main.c" , "r") ;
    char line[1000] ;
    int found_main = 0 ;
    int line_number = 1 ;
    
    fp_out = fopen("main3.txt", "w+");
    for (;;) {
        if (fgets(line, sizeof(line), fp_in) == NULL)
            break;
        if (!found_main && strstr(line, "int main()")) {
            sprintf(line, "%d", line_number);
            fputs(line,fp_out) ;
            break;
        }
        line_number ++ ;
        
    }
    
    fclose(fp_in) ;
    fclose(fp_out) ;

    return 0;
}
