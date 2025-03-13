#include<stdio.h>

int main(){
    int i = 1, sum = 0, n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while(i <= n);

    printf("The value of sum of n natural number is %d\n", sum);
    return 0;
}