#include<stdio.h>

int change(int);

int change(int a) {
    a = 77; // Misnomer
    return 0;
}

int main(){
    int b = 22;
    change(b); // The value of b remains 22
    printf("b is %d", b);
    
    return 0;
}
/*
The output we got is 'b is 22'. The value of b didn't change because when we call function 
the copy of b(means the value assigned to b is passed to the function not b itself) is passed to the function
in this case 22 is passed to the function change and it will not change to 77
*/

/*
    Why Doesn’t b Change?
In C, function arguments are passed by value by default. This means:

When change(b); is called, the value of b (22) is copied into the parameter a in the change() function.
Any changes made to a inside the change() function affect only the local copy of a, not the original b.

Visual Representation

Main Function (b = 22)
     ↓
change(b); // Copy of 'b' is passed
     ↓
Function change(int a) // a = 22 (local copy)
     ↓
a = 77; // Only 'a' changes, not 'b'

Since the change() function alters only its local copy of a, the original value of b in main() remains unaffected.


Key Concept: Call by Value
In Call by Value, the actual parameter's value is copied into the function's parameter.
Any modifications made to the parameter inside the function do not affect the original value.
If you want to modify the original value of b, you would need to pass a pointer to b or use the & operator (pass by reference in C++).

Correcting the Code to Modify b Using Pointers
If you intend to modify b's value inside the function, you should use pointers:

#include<stdio.h>

void change(int *a) {
    *a = 77; // Modifies the actual value of 'b'
}

int main(){
    int b = 22;
    change(&b);  // Pass address of 'b'
    printf("b is %d", b); // Output: b is 77
    
    return 0;
}
In this pointer-based approach, the change made inside the function directly affects the original variable.

*/