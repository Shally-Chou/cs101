#include <stdio.h>

int multi(int i, int j) {
    printf("%d*%d=%d", i, j, i * j);
    if (j < 9) {
        printf(" ");  //最後面不能有空格 很重要
        multi(i, j + 1);
    } 
    else {
        if (i < 9) {
            printf("\n");
            multi(i + 1, 1);
        }
    }
}

int main() {
    multi(1, 1);
    return 0;
}
