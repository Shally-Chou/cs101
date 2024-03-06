#include <stdio.h>
#include <string.h>

void get_amount(char arr[] , int size) {
    int num = 1 ; 
    for(int i = 0 ; i < size  ; i++) {
        if(arr[i] == arr[i+1]) {
            num = num + 1 ;
        }
        else  {
            printf("%c%d", arr[i] ,num) ;
            num = 1 ;
        }
    }
}

int main()
{
    char a_input[101] ;
    scanf("%s", a_input) ;
    get_amount(a_input,strlen(a_input)) ;
    
    return 0;
}
