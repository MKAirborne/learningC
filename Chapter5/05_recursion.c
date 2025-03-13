#include<stdio.h>

int factorial(int);

    // Factorial(5) = 1 X 2 X 3 X 4 X 5 
    // Factorial(4) = 1 X 2 X 3 X 4  
    // Factorial(3) = 1 X 2 X 3  
    // Factorial(n) = 1 X 2 X 3 X ... X n-1 X n 
    // Factorial(n-1) = 1 X 2 X 3 X ... X n-1  

int factorial(int n){
    if(n == 1 || n == 0){   // Base Condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n 
    return factorial(n - 1) * n;

}


int main(){
    int a = 5;
    printf("The factorial of %d is %d", a, factorial(a));    
    return 0;
}

/*
    #include<stdio.h>

int factorial(int);

    // Factorial(5) = 1 X 2 X 3 X 4 X 5 
    // Factorial(4) = 1 X 2 X 3 X 4  
    // Factorial(3) = 1 X 2 X 3  
    // Factorial(n) = 1 X 2 X 3 X ... X n-1 X n 
    // Factorial(n-1) = 1 X 2 X 3 X ... X n-1  

int factorial(int n){
    // Factorial(n) = Factorial(n-1) X n 
    return factorial(n - 1) * n;

     

}


int main(){
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));    
    return 0;
}


ChatGPT said:
Your code attempts to calculate the factorial of a number using recursion, but it is incomplete and will result in a stack overflow error. Let's analyze the code step by step and understand why.

Step 1: #include<stdio.h>
This library is included to use the printf function for output.
Step 2: int factorial(int);
This is a function declaration for the factorial() function, which will calculate the factorial of a given number.
Step 3: int factorial(int n)
This is the function definition.
The logic inside this function is incorrect because there’s no base condition to stop the recursion.

return factorial(n - 1) * n;
This line recursively calls factorial(n - 1) without a termination condition.
As recursion continues indefinitely, it will eventually cause stack overflow (infinite recursion).
Step 4: int main()
The main() function starts here.
int a = 3; assigns the value 3 to the variable a.
The line:

printf("The factorial of %d is %d", a, factorial(a));
Calls factorial(3).
Since no base condition is set, the recursion will keep calling itself indefinitely, eventually crashing the program.
Correct Code with Base Condition
To fix the code, you must include a base condition to stop the recursion:


#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1)  // Base condition
        return 1;  
    return factorial(n - 1) * n;
}

int main(){
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));    
    return 0;
}
Step 5: Execution Flow (Correct Code)
factorial(3)
→ factorial(2) * 3
→ factorial(1) * 2 * 3
→ 1 * 2 * 3
Output: The factorial of 3 is 6

Key Mistake in Original Code
✅ Missing base condition in the factorial() function caused infinite recursion.
*/