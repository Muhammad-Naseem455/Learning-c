#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void addatend(struct node**head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    
    if(*head==NULL)
    {
        *head=temp;
        temp->next=*head;
        return;
    }
    struct node*ptr=*head;
    while(ptr->next!=*head)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=*head;
}
void print(struct node*head)
{
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node*ptr=head;
    do
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
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
    print(head);
}
