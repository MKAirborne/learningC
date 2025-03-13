#include<stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        // This loop runs from 0 to 2
        // if i = 0 --> print 1 *
        // if i = 1 --> print 3 *
        // if i = 2 --> print 5 *
        // no_of_stars = (2*i+1)

        // This for loop prints (2*i+1) stars
        for(int j=0; j<2*i+1; j++){
            printf("*");
        }

        // This printf prints a new line
        printf("\n");
    }
    
    return 0;
}

/*
#include<stdio.h>

// Function to print the star pattern
void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* "); // Print star followed by a space
        }
        printf("\n"); // Move to the next line
    }
}

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Function call to print pattern
    printPattern(n);

    return 0;
}

*/