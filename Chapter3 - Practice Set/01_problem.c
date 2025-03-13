#include<stdio.h>

int main(){
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    
    return 0;
}
// answer is "I am 11" because in if we just assigned 11  
// and 11 is a nonzero value so inside if is true but if we did a == 11 then the result will be different

/*
    Explanation:
Mistake: if (a = 11) is an assignment, not a comparison.

The correct way to check equality is if (a == 11).
But here, a = 11 assigns the value 11 to a, making a now equal to 11.
What does if (a = 11) evaluate to?

In C, an assignment (=) returns the assigned value.
Since a = 11, this expression evaluates to 11, which is a nonzero (true) value.
What does the if condition check?

Any nonzero value is considered true in C.
Since 11 is nonzero, the condition is true, so the first printf executes.
Else block does not execute

Since the if condition is true, the else block is skipped.
*/