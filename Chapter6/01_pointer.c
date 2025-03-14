#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)
    int k = 67;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The address of k is %p\n", &k);
    
    printf("The value at address j is %d\n", *(&i));
    printf("The value at address j is %d\n", *j);
    return 0;
} 
// %p --> to know address of variable
// %u --> also used to know address of variable but in interger form(called as unsigned integer)