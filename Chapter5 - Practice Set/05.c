#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}
//6 6 4
//4 5 5
// both the answers are correct because when evaluation order is not defined then compiler decides by itself and then evaluate
// from any side whether it is 'left to right' or 'right to left' 