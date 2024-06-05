/******************************************************************************
使用 calloc 和 free 複製一個 string
輸出經過clone_string() 複製後的字元
intput : sc is freaking hard
output : The cloned string: sc is freaking hard
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *clone_string(char *str) {
    char *cloned_str = (char *)calloc(strlen(str) + 1, sizeof(char));
    if (cloned_str != NULL) {
        strcpy(cloned_str, str);
    }
    return cloned_str;
}

void free_string(char *str) {
    free(str);
}

int main() {
    char str[100];
    scanf("%99s", str);
    
    char *pstr = clone_string(str);
    
    if (pstr != NULL) {
        printf("The cloned string: %s\n", pstr);
        free_string(pstr);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}
