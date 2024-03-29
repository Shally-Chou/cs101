#include <stdio.h>
#include <string.h>

void replace_all(char *str, char oldChar, char newChar) {
    int lenth = strlen(str) ;
    for(int i = 0 ; i < lenth ; i++){
        if (*(str + i) == oldChar) {
            *(str + i) = newChar;
        }
    }
}

int main()
{

    char str[100], oldChar = 'a', newChar = 'A';
    printf("Enter any string: %s", str);
    scanf("%s", str);
    printf("\nString before replacing:\n%s\n\n", str);

    replace_all(str, oldChar, newChar);

    printf("String after replacing a with A:\n%s", str);

    return 0;
}
