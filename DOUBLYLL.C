#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
 struct node*prev;
}
*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void insert();
void delete1();
void display();
void create_node();
void main()
{
 int ch,i;
 clrscr();
 while(1)
 {
  printf("\n 1.Insertion\n 2.Deletion\n 3.Display\n 4.Exit\n");
  printf("\n enter the choice:\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  insert();
	  break;
   case 2:
	 delete1();
	 break;
   case 3:
	 display();
	 break;
   case 4:
	 exit(0);
   deault:
	 printf("\ninvalid option\n");
	 break;
  }
 }
}
void insert()
{
 if(head==NULL)
 {
 create_node();
 head=newNode;
 }
 else{
 create_node();
 head->prev=newNode;
 newNode->next=head;
 head=newNode;
 }
}
void create_node()
{
  newNode=(struct node*)malloc(sizeof(struct node));
  printf("\n enter the value:\n");
  scanf("%d",&newNode->data);
  newNode->prev=NULL;
  newNode->next=NULL;
}
void delete1()
{
 if(head==NULL)
 {
  printf("\n list is empty\n");
  }
  else
  {
  temp=head;
  head=head->next;
  head->prev=NULL;
  printf("%d is deleted\n",temp->data);
  free(temp);
  }
}
void display()
{
if(head==NULL)
{
 printf("\n list is empty\n");
}
else
{
temp=head;
while(temp!=NULL)
{
 printf("%d->",temp->data);
 temp=temp->next;
 }
 }
}

