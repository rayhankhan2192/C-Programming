#include <stdio.h>
#define capacity 4
int stack[capacity];
int top = -1;
void push(int value){
    if (top < capacity - 1){
        top = top + 1;
        stack[top] = value;
        printf("Successfully added %d\n",value);
    }
    else{
        printf("Exception from push! No space for more value.\n");
    }
}

int pop(){
    if(top >= 0){
        int number = stack[top];
        top--;
        return number;
    }
    printf("Exception from pop! Empty stack.");
    return -1;
}

int peek(){
    if(top >= 0){
        return stack[top];
    }
    else{
        printf("Exception from peek! Empty stack.\n");
        return -1;
    }
}
int main(){
    printf("\nImplementing stack\n");
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Pop item %d\n",pop());
    push(50);
    printf("Top of stack %d",peek());
    
    return 0;
}