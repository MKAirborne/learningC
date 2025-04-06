#include<stdio.h>

int main(){
    
    if(0){
        printf("I am zero - so I am not executed!\n");
    }
    if(1){
        printf("This if is executed!\n");
    }
    if(234){
        printf("This if is also executed!\n");
    }
    if(2.14){
        printf("This if is also executed!\n");
    }
    if('a'){
        printf("This character inside if also executed!\n");
    }
    return 0;
}
// In C a nonzero value is considered as true and zero is considered as false

/*
    Key Points
✔ Only one block executes: Once a true condition is found, the rest of the else if and else blocks are skipped.
✔ Order matters: Conditions are checked from top to bottom. If a condition is met early, later conditions won’t be checked.
✔ else is optional: If not needed, you can omit it.

Key Differences from if-else if-else:
✅ Each if statement is independent – All conditions are checked, even if a previous condition is true.
✅ Multiple blocks can execute – Unlike if-else if-else, where only one block executes.
✅ Useful when multiple conditions can be true at the same time.
*/ 