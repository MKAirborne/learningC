#include<stdio.h>


int sum_natural(int);

int sum_natural(int n){
    // sum(n) = 1 + 2 + 3 + 4 + ... + n-1 + n
    // sum(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;
}

int main(){
    printf("The sum of first 5 natural number is %d", sum_natural(5));
    return 0;
}