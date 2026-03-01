#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
};
void addatend(struct node**head,int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    if(*head==NULL)
    { 
        *head=temp;
        return; 
    }
    struct node*ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }  
    ptr->next=temp;
    temp->prev=ptr;
}
void delatend(struct node**head)
{
    if(*head==NULL)
         return;
    if((*head)->next==NULL){
        free(*head);
        *head=NULL;
        return;
    }
    struct node*ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node*ptr2=ptr->prev;
    ptr2->next=NULL;
    free(ptr);
    ptr=NULL;
}
void print(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    struct node*head=NULL;
    int n,val;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        addatend(&head,val);
    }
    delatend(&head);
    print(head);
}