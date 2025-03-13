#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a>b && a>c && a>d){
        printf("The greatest number out of all is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest number out of all is %d", b);    
    }
    else if(c>a && c>b && c>d){
        printf("The greatest number out of all is %d", c);
    }
    else if(d>a && d>b && d>b){
        printf("The greatest number out of all is %d", d);
    }
    return 0;
}