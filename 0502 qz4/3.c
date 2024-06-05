/******************************************************************************
使用遞迴的方式計算正整數的每一個數字和
intput : 12345
output : The sum of digits in 12345 is 15
*******************************************************************************/
#include <stdio.h>

int sum_of_digit(int n) {
    if (n < 10) {
        return n;
    }
    
    int last_digit = n % 10;
    int remaining_digits = n / 10;
    
    return last_digit + sum_of_digit(remaining_digits);
}

int main() {
    int num;
    scanf("%d", &num);
    int result = sum_of_digit(num);
    printf("The sum of digits in %d is %d\n", num, result);
    return 0;
}
