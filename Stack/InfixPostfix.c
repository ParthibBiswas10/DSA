#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 100
char infix[20],postfix[20],stack[20];
void push(char);
void print();
int top=-1;
int isempty(){
    if(top==-1) return 1;
    else return 0;
}
void push(char data) {
    
    if (top == MAX - 1) { 
        printf("Stack is Full\n");
        exit(1);
    } 
    
    else {
        top++;
        stack[top] = data; 
        //printf("Pushed %d into the stack.\n", data);
    }
    
}
char pop() {
    if (top == -1) { 
        printf("Stack is Empty\n");
    } else {
        printf("Popped element: %c\n", stack[top]); 
        int temp=stack[top];
        top--;
        return temp;
    }
}


 
 int precendence(char a){
    switch(a){
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
 }
void intopost(){
    int i,j=0;
    char next;
    char symbol;
    for(i=0;i<strlen(infix);i++){
        symbol=infix[i];
        switch(symbol){
            case '(':
                push(symbol);
                break;
            case ')':
                while((next=pop())!='('){
                    postfix[j++]=next;
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while((!isempty())&& precendence(stack[top])>=precendence(symbol)){
                    postfix[j++]=pop();}
                push(symbol);
                break;
            default:
                postfix[j++]=symbol;
        }
    }
       while (!isempty()) {
        postfix[j++] = pop();
    }
    postfix[j]='\0';
}
void print(){
    for (int k=0;k<strlen(postfix);k++){
        printf("%c",postfix[k]);
    }
}
int main(){
   
    printf("Enter Infix expression: ");
    gets(infix);
     //fgets(infix, sizeof(infix), stdin);
    intopost();
    print();

}