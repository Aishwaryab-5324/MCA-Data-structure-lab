#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
  int i,choice;
  clrscr();
  while(1)
  {
  printf("\n 1.ENQUEUE_INSETRT\n 2.DEQUEUE_DELETE\n 3.DISPLAY\n 4.EXIT\n");
  printf("enter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:printf("Enqueue-insertion operation\n");
	 enqueue();
	 break;
  case 2:printf("dequeue-deletion operation\n");
	 dequeue();
	 break;
  case 3:printf("display operation\n");
	 display();
	 break;
  case 4:exit(0);
  default:printf("invalid choice\n");
  }
  }
}
void enqueue()
{
  if((rear+1)%SIZE==front)
  {
  printf("queue over flow\n");
  }
  else
  {
  if(front==-1&&rear==-1)
  {
  front=rear=0;
  }
  else
  {
  rear=(rear+1)%SIZE;
  }
  printf("enter the element:");
  scanf("%d",&queue[rear]);
  }
}
void dequeue()
{
  if((front==-1)&&(rear==-1))
  {
  printf("queue underflow\n");
  }
  else if(front==rear)
  {
  printf("the dequeued element is %d",queue[front]);
  front=-1;
  rear=-1;
  }
  else
  {
  printf("\n the dequeued element is %d",queue[front]);
  front=(front+1)%SIZE;
  }
}
void display()
{
int i=front;
if(front==-1 && rear==-1)
{
 printf("queue is empty\n");
}
else
{
 printf("\n elements in a queue are:");
 while(i!=rear)
 {
 printf("%d\t",queue[i]);
 i=(i+1)%SIZE;
 }
 printf("%d\t",queue[rear]);
}
}
