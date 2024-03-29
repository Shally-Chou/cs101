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
    printf("Enter any string: %s", str);  //刪掉 操
    scanf("%s", str);
    printf("\nString before replacing:\n%s\n\n", str); //刪掉 你圖片input明明就有這些

    replace_all(str, oldChar, newChar);

    printf("String after replacing a with A:\n%s", str);  //內文刪掉留output 然後就會對 結果全部delet才算對 哭死欸真的

    return 0;
}
