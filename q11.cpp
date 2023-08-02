#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
bool isFull(struct Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to add an element to the stack (PUSH)
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot PUSH.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// Function to remove the top element from the stack (POP)
void pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot POP.\n");
        return;
    }

    stack->top--;
}

// Function to view the top element of the stack (PEEK)
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot PEEK.\n");
        return -1;
    }

    return stack->items[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack));

    pop(&stack);
    printf("Top element after POP: %d\n", peek(&stack));

    return 0;
}

