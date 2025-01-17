#include <stdio.h>
#include <stdlib.h>
#define MAX 3 

int arr[MAX];
int top = -1;


void push(int data) {
    
    if (top == MAX - 1) { 
        printf("Stack is Full\n");
        exit;
    } 
    
    else {
        top++;
        arr[top] = data; 
        printf("Pushed %d into the stack.\n", data);
    }
    
}



void pop() {
    if (top == -1) { 
        printf("Stack is Empty\n");
    } else {
        printf("Popped element: %d\n", arr[top]); 
        top--;
    }
}


void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) { 
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}


void peek() {
    if (top == -1) { 
        printf("Stack is Empty\n");
    } else {
        printf("Top element: %d\n", arr[top]);
    }
}


int main() {
    int n;
    while (1) {
        printf("\n1. Push  2. Pop  3. Display  4. Peek  5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1: 
                printf("Enter value: ");
                int value;
                scanf("%d", &value);
                push(value); 
                break;
            
            case 2:
                pop(); 
                break;
            case 3:
                display(); 
                break;
            case 4:
                peek(); 
                break;
            case 5:
                printf("Exiting...\n");
                exit(0); 
            default:
                printf("Invalid choice... Please try again.\n");
        }
    }
    return 0;
}
