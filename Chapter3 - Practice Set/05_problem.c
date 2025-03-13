// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);

    if(ch >= 97 && ch <= 122){
        printf("This character is lowercase\n");
    }
    if(ch >=65 && ch<=90){
        printf("This character is uppercase\n");
    }
    else{
        printf("This character is not lowercase\n");
    }
    return 0;
}