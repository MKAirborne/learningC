#include<stdio.h>

int main(){
    int product = 1;
    int n = 5, i = 1;

    while(i<=n){
        product *= i;
        i++;
    }
    printf("The value of %d! is %d", n, product);
    return 0;
}