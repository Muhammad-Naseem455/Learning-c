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
    struct node*ptr=head;
   
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int delatpos(struct node**head,int pos)
{
    if(*head==NULL)
    {
       
        return -1;
    }
    struct node*temp=*head;
    if(pos==1)
    {
        *head=(*head)->next;
        free(temp);
        return 1;
    }
    struct node*ptr=*head;
    for(int i=1;i<pos-1&&ptr!=NULL;i++)
    {
        

        ptr=ptr->next;
    }
    if(ptr==NULL||ptr->next==NULL)
    {
       
        return 0;
    }
    struct node*del=ptr->next;
    ptr->next=del->next;
    free(del);

    return 1;

}
int main()
{
    struct node*head=NULL;
    int n,val,pos,res;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        addatend(&head,val);
    }
    scanf("%d",&pos);
    res=delatpos(&head,pos);
    if(res==-1)
    {
        printf("List is empty");
    }
    else if(res==0)
    {
        printf("pos put");
    }
    else
     print(head);

}