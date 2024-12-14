#include<stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    };
void traversal(struct node *ptr)
    {
        while(ptr!=NULL){
            printf("%d>",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");
    }
/*struct node *insertend(struct node*head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}*/
struct node* createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
int main(){
    
    struct node*head=NULL;
    struct node*temp=NULL;
    
    int n,data;
    printf("Kota nodes chai?? \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d node er value: ",i);
        scanf("%d",&data);
        struct node* newnode=createnode(data);
        
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
       
    }
    

 

    printf("Before Insertion: \n");
    traversal(head);
   
   
   
    return 0;
}