#include<stdio.h>

float CtoF(float C);

float CtoF(float C){
    return ((9*C)/5) + 32;
}

int main(){
    float C = 100;
    printf("Celsius to Fahrenheit for %f is %f", C, CtoF(C));
    return 0;
}