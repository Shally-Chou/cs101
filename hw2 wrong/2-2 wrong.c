#include <stdio.h>
#include <string.h>

int main(){
    FILE* fp_in , *fp_out ;
    fp_in = fopen("main.c" , "r") ;
    char line[1000] ;
    int found_main = 0 ;
    
    fp_out = fopen("main2.txt", "w+");
    for (;;) {
        if (fgets(line, sizeof(line), fp_in) == NULL)
            break;
        if (!found_main && strstr(line, "int main()")) {
            found_main = 1;
            continue;
        }
        if (found_main)
            fputs(line, fp_out);
    }
    
    fclose(fp_in) ;
    fclose(fp_out) ;

    return 0;
}
