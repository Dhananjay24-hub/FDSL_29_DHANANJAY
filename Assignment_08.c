// program -> it check the well formedness of brackets and genrate the result whether it is valid or not 
#include<stdio.h>
#include<string.h>
#define max 10
int stack[max];
int top = -1;

// Push function to add character to the stack
void push(char c) {
    if (top == max - 1) {
        printf("Stack is full\n");
        return;
    }
    top++;
    stack[top] = c;
}

// Pop function to remove the top element from the stack
void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    top--;
}

// Function to check if the expression has balanced parentheses
void check(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        // Push opening brackets onto the stack
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(str[i]);
        }

        // Check for closing brackets
        if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            // If the stack is empty, or the top element does not match, it's invalid
            if (top == -1 || (str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{')) {
                printf("Invalid string\n");
                return;
            }
            // Pop the matching opening bracket from the stack
            pop();
        }
    }

    // If the stack is empty, the string is valid
    if (top == -1) {
        printf("Valid string\n");
    } else {
        printf("Invalid string\n");
    }
}

int main() {
    char str[10];
    printf("Enter the Expression: ");
    scanf("%9s", str);  // Limiting input to 9 characters to prevent overflow
    check(str);
    return 0;
}

