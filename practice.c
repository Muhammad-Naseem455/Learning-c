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
void delatpos(struct node**head,int pos)
{
    if(*head==NULL)
    {
        printf("Position out of range");
        return;
    }
    struct node*temp=*head;
    if(pos==1)
    {
        *head=(*head)->next;
        free(temp);
        return;
    }
    struct node*ptr=*head;
    for(int i=1;i<pos-1&&ptr!=NULL;i++)
    {
       ptr=ptr->next; 
    }
    if(ptr==NULL||ptr->next==NULL)
    {
        printf("Position out of range");
        return;
    }
    struct node*del=ptr->next;
    ptr->next=del->next;
    free(del);
    
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
    int n, val,pos,m;
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