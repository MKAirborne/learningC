#include<stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;
    
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    return 0;
}
/*
*(&j) is equal to 'the value at address of j' 
          equal to 'value stored in j'
          equal to 'address of i'

**(&j) = *(address of i)
       = value at address of i
       = value of i
*/