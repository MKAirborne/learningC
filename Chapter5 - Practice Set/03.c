#include<stdio.h>

float force(float);

float force(float mass){
    return mass*9.8;
}

int main(){
    float mass = 60;
    printf("The value of force is %f\n", force(mass));
    return 0;
}