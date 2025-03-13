#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    // i++ prints value first and then increment (Post increment operator)
    // ++i increment value first and then prints (Pre increment operator)


    return 0;
}