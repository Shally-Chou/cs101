#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* fp_in;
    char line[100];
    int num = 1;
    int found = 0;
    
    fp_in = fopen("main.c","r");
    for(;;){
        if(fgets(line,sizeof(line),fp_in)==NULL){
            return 0;
        }
        if(!found && strstr(line,"int main(){")){
            strcpy(line,"int main(){");
            printf("0%d %s",num,line);
            return 0;
        }
        num++;
    }
    
    fclose(fp_in);
    return 0;
}
