#include<stdio.h>

int main(){
    int i = 75;
    int* j = &i; // j is a pointer pointing to i
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    return 0;
} 