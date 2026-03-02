#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data[100];
    struct node*next;
};
void addatend(struct node**head,char name[])
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    strcpy(temp->data,name);
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
struct node*rev(struct node*head)
{
    struct node*prev=NULL;
    struct node*current=head;
    struct node*next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
void print(struct node*head)
{
    while(head!=NULL)
    {
        printf("%s ",head->data);
        head=head->next;
    }
}
int main()
{
    struct node*head=NULL;
    int n;
    char name[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",name);   
        addatend(&head,name);
    }
    head=rev(head);
    print(head);
}