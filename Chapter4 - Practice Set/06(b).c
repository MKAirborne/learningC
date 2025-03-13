#include<stdio.h>

int main(){
    int i, n, sum = 0;
    printf("Enter the value n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum += i;
    }
    printf("The value of sum of first n natural numbers is %d", sum);
    return 0;
}