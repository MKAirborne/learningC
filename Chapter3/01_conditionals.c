#include<stdio.h>

int main(){
    int age;
    scanf("%d", &age);
    printf("My age is %d\n", age);

    if(age > 10) {
        printf("Now we are inside our if statement\n");
        printf("Your age is greater than 10");
    }
    return 0;
}