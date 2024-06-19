#include <stdio.h>

int reverse(int num) {
    static int rev = 0, i = 0;
    int digit;

    if (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        i++;
        reverse(num / 10);
    }
    
    return rev;
}

int main() {
    int num = 54321;
    printf("Reverse of %d = %d", num, reverse(num));
    return 0;
}
