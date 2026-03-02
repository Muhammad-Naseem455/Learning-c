#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void addatend(struct node**head,int data){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
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
}
struct node*findmid(struct node*head)
{
    if(head==NULL)
      return NULL;
    struct node*slow=head;
    struct node*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }  
    return slow;
}
void print(struct node*head)
{
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
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
    struct node*mid=findmid(head);
    print(mid);
}