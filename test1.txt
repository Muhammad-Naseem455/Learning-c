 #include<stdio.h>
 #include<stdlib.h>
//CALL BY REFERENCE//
// void update(int *x){
//     *x=10;
// }
// int main()
// {
//     int a=5;
//     update(&a);
//     printf("%d",a);
// }
//SWAPPING OF TWO NUMBERS USING CALL BY REFERENCE//
// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int x=5,y=10 ;
//     swap(&x,&y);
//     printf("a=%d\nb=%d",x,y);
// }
//PRINTING EACH ELEMENT OF ARRAY USING POINTERS//
// int main(){
// int a[4]={1,2,3,4};
// int *p=a;
// printf("%d\n",*p);
// printf("%d\n",*(p+1));
// printf("%d\n",*(p+2));
// printf("%d",*(p+3));+
// }
//DOUBLE POINTERS//
// int main()
// {
//     int a=5;
//     int *p=&a;
//     int **pp=&p;
//     printf("%d",**pp);
// }
//PRINTING ARRAY ELEMENTS USING FOR LOOP//
// int main()
// {
//     int arr[7]={1,2,3,4,5,6,7};
//     int *p=arr;
//     for(int i=0;i<7;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
// }
//ARRAY OF POINTERS//
// int main()
// {
//     int a=5,b=10,c=15;
//     int *arr[3]={&a,&b,&c};
//     for(int i=0;i<3;i++)
//     {
//         printf("%d\n",*arr[i]);
//     }
//  }
//types of memory segments
//1.Text/code segment:
//Part of memory that stores compiled machine instructions and function definitions.
//2.Initialised data segemnt:
//Stores global and static variables initialised explicitly.example: int y=20; static int =20;
//3.Uninitialised data segment(BSS):
//Stores global and static variable not initialised. Automatically set to 0.example: int count;
//4.Stack:
//5.Heap
//DYNAMIC MEMORY ALLOCATIION:
//MALLOC() FUNCTION Eg PROGRAM:
// int main(){
// int *ptr;
// int n;   //ṇsize 5
// scanf("%d",&n);
// ptr = (int*)malloc(n*sizeof(int));
// if(ptr == NULL){
//  printf("Memory not allocated");
// return 0;
// }
// for(int i=0;i<n;i++){
// scanf("%d",&ptr[i]);
// }
// for(int i=0;i<n;i++){
//  printf("%d ",ptr[i]);
// }
// free(ptr);
// return 0;}

//CALLOC
// #include<stdlib.h>
// int main() {
//     int *ptr;
//     int n;
//     scanf("%d",&n);
//     ptr = (int *)calloc(n,sizeof(int));
//     if(ptr == NULL){
//         printf("Memory not allocated");
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }

//REDUCING ELEMENTS USING REALLOC//
// int main()
// {
//     int *ptr;
//     ptr=malloc(5*sizeof(int));
//     ptr[0]=10;
//     ptr[1]=20;
//     ptr[2]=30;
//     ptr[3]=40;
//     ptr[4]=50;
//     ptr=realloc(ptr,3*sizeof(int));
//     printf("values after reallocation\n");
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);
//     return 0;
    
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     int n;
//     printf("Enter size:");
//     scanf("%d",&n);
//     ptr = (int *) calloc(n,sizeof(int));
    
//     if(ptr == NULL){
//         printf("Memory not allocated");
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         scanf("%d",&ptr[i]);
//     }   
//     printf("Enter new size:");
//     scanf("%d",&n);
//     ptr = (int *) realloc(ptr, n * sizeof(int));
//     for(int i=3;i<n;i++){
//         scanf("%d",ptr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }
//STRUCTURES//
//Arrays stores variables of same data type//
//But structures are used to store variables of different datatype//
//for example for a students mark sheet we use name(string) roll no(int) marks(float)
//syntax:
//struct structur_name
//{
//data_type member1;
//data_type member2;
//...data_type member3;
//};
//
//example 
// int main()

// {
//    struct recipe
//    {
    
//    char ingredients[50];
//    int steps;
//    float quantity;

//    }b1; 
//    scanf("%s%d%f",&b1.ingredients,&b1.steps,&b1.quantity);
//    printf("%s\n%d\n%f",b1.ingredients,b1.steps,b1.quantity);
// }
//structure for pointers:
// int main()
// {
//     struct pointer
//     {
//         int x,y;
//     };
//     struct pointer a1={1,2};
//     struct pointer*ptr=&a1;
//     printf("%d\n%d",ptr->x,ptr->y);
// }
//we can access any element in the array by using pointers
//SELF REFERENTIAL STRUCTURE
// int main()
// {
//     struct item
//     {
//         int a;
//         struct item *p;


//     };
//     struct item a1;
//     struct item a2;
//     a1.a=10;
//     a1.p=&a2;
//     a2.a=20;
//     a2.p= NULL;
   
    
//     printf("%d",a2.a );

// }
//LINKED LIST
int main()
{
    struct node{
        int data;
        struct node*next;
    };
}


