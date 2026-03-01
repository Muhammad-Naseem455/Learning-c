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
void print(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
void delatpos(struct node**head,int pos)
{
    if(*head==NULL)
    {
        printf("position out of range");
        return;
    }
    if(pos==1)
    {
        *head=(*head)->next;
        free(*head);
        return;
    }
    struct node*temp=*head;
    for(int i=1;i<pos-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL)
    {
        printf("position out of range");
        return;
    }
    struct node*del=temp->next;
    temp->next=del->next;
    free(del);

}
int main()
{
    struct node*head=NULL;
    int n,val,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        addatend(&head,val);
    }
    scanf("%d",&pos);
    delatpos(&head,pos);
    print(head);

}