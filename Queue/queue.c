#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int f=-1, r=-1;
int queue[MAX];
void enq(int data){
    if(r==MAX-1){
        printf("Queue full\n");
    }
    else{
        f=0;
        r++;
        queue[r]=data;
        printf("r= %d\n",r);

    }
}

void dq(){
    if(r==-1){
        printf("Queue empty");
    }
    else{
        printf("popped");
        f++;
    }
}

void display(){
    for(int i=f;i<=r;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
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