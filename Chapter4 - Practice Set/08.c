#include<stdio.h>

int main(){
    int n = 10, product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    printf("The value of n! is %d", product);
    return 0;
}