include <stdio.h>

int rec_Fibonacci(int n){
    if(n<1){
        return n;
    }
    
    return n+rec_Fibonacci(n-1);
}

int main(){
    int n = 10;
    int sum = rec_Fibonacci(n);
    printf("Fibonacci(%d) = %d", n , sum);
    return 0;
}
