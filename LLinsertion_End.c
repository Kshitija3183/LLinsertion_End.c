#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data ;
    struct node* next;
};

struct node*  insertatEnd(struct node* s){
    struct node *q, *temp;
    q = (struct node*)malloc(sizeof(struct node));
    printf("Enter the number which u want to insert in linlklist  at end:");
    scanf("%d",&q->data);
     temp=s;

     while(s->next!=NULL){
      s=s->next;
     }

     s->next = q;
     q->next=NULL;
     s = temp;
}
int main(){
  struct node *s,*p,*q;
  char ch ;

    p = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for 1st node:");
    scanf("%d",&p->data);
   s = p ;
 do
 {
     q = (struct node*)malloc(sizeof(struct node));
     printf("Enter the data for next node:");
     scanf("%d",&q->data);

        p->next = q ;
        p = q ;

      printf("Enter 'y' to  add elements\n");
      ch = getch();

 } while (ch=='y' || ch=='Y');
    p->next = NULL;

     s = insertatEnd(s);

 while(s!=NULL){
            printf("%d\n",s->data);
            s = s->next ;
        }
 return 0 ;
}
