#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int f=-1, r=-1;
int queue[MAX];
void enq(int data){
    if(f==(r+1)%MAX){
        printf("Queue full\n");
    }
    if(f==-1){
            f=0;
        }
        r=(r+1)%MAX;
        queue[r]=data;
        printf("value= %d\n",  queue[r]);

    
}

void dq(){
    if(f==-1){
        printf("Queue empty");
    }
    else{
        if (f == r) {
        f = -1;
        r = -1;
    }
        printf("popped: %d",queue[f]);
        f=(f+1)%MAX;
    }
}

void display(){
    int i = f;
    while (i != r) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX; 
    }
    printf("%d\n", queue[r]);
}



int main(){
    while(1){
        int value;
    printf("\n1.Enq  2.Dq  3.display  5.Exit\n");
    printf("Enter Choice: \n"); 
    int n;
    scanf("%d",&n);
    switch (n) {
            case 1: 
                
                printf("Enter value: ");
                scanf("%d", &value);
                enq(value); 
                break;
            
            case 2:
                dq(); 
                break;
            case 3:
                display(); 
                break;
            
            case 5:
                printf("Exiting...\n");
                exit(0); 
            default:
                printf("Invalid choice... Please try again.\n");
        }
    }
}