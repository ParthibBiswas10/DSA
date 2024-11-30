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
            printf("elements: %d\n",ptr->data);
            ptr=ptr->next;
        }
    }
struct node *insert(struct node*head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;

}
int main(){
    //Node banailam
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    //memory allocate korilm
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=12;
    third->next=fourth;
    fourth->data=13;
    fourth->next=NULL;

    printf("Before Insertion: \n");
    traversal(head);
    int n;
    printf("Enter Number to add: ");
    scanf("%d",&n);
    printf("\nAfter Insertion: \n");
    head=insert(head,n);
    traversal(head);
    return 0;
}