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
void addatpos(struct node**head,int pos,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(pos==1)
    {
       temp->next=*head;
       *head=temp;
       return;
    }
    struct node*ptr=*head;
    for(int i=1;i<pos-1;i++)
    {
        if(ptr==NULL)
        {
            printf("positon out of range");
        }
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("position out of range");
    }
    temp->next=ptr->next;
    ptr->next=temp;
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
    int n,val,pos,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        addatend(&head,val);

    }
    scanf("%d",&pos);
    scanf("%d",&m);
    addatpos(&head,pos,m);
    print(head);
}