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
void delatend(struct node**head)
{
    if(*head==NULL)
     return;
    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    struct node*ptr =*head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    free(ptr->next);
    ptr->next=NULL;


}
int main(){
    struct node*head=NULL;
    int n,val,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        addatend(&head,val);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        delatend(&head);
    }
    print(head);

}