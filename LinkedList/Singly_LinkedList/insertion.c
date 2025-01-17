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

struct node* createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
struct node* insertbegin(struct node* head,int data){
    struct node* newnode=createnode(data);
    newnode->next=head;
    head=newnode;
    return head;

}
struct node* insertend(struct node* head,int data){
    struct node* newnode=createnode(data);
    struct node* temp;
        if(head==NULL){
            head=newnode;
            
        }
        else{
         temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        }
        return head;
        

}
int main(){
    
    struct node*head=NULL;
    struct node*temp=NULL;
    
    int n,data,choice,a;
    printf("Nodes chai na Nudes?? \n");
    printf("enter 1 for Nodes, enter 2 for Nudes: ");
    scanf("%d",&a);
    switch(a){
        case 1: 
        //cleanup(&head);
         printf("Kota nodes chai?? \n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
        printf("%d node er value: ",i);
        scanf("%d",&data);
        printf("1.Insert at end\n2.Insert at beginning\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                head= insertend(head,data);
                break;
            case 2:
                head= insertbegin(head,data);
                break;
        }
       
       
    }//for loop end

    printf("After Insertion: \n");
    traversal(head);
   
    break;
        case 2:
        printf("\nvisit : https://www.pornhub.org/categories\n\n");
        break;
    }
   
   
    return 0;
}