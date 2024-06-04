/******************************************************************************
輸出一個數字到 main3.txt，該數字代表檔案main3.c 中，"int main()" 所在的行數
output = 8 , this code for example
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp_in , *fp_out ;
    fp_in = fopen("main.c" , "r") ; //改成main3.c就會過
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
