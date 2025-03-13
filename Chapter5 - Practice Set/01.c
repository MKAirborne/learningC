#include<stdio.h>

float average(float, float, float);

float average(float a, float b, float c){
    return (a+b+c)/3;
}

int main(){
    float a = 3, b = 6, c = 5;
    printf("The average of a, b and c is %f", average(a ,b ,c));
    return 0;
}