#include <stdio.h>

int main()
{
    FILE* fp;
    fp = fopen("hello.txt","w");
    
    fprintf(fp,"hello, B1229046");
    fclose(fp);

    return 0;
}
