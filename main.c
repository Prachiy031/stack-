#include<stdio.h>
#include<stdlib.h>

struct abc
{
  char data;
  struct abc *next;
};
struct abc *new;
struct abc *head;
int top=-1,i=0;
void push(char);
int pop(char);

void main()
{
 int n,ch,y;
 int b;
 //printf("Enter size of stack:\n");
 //scanf("%d",&n);
 struct abc *head;
 head = (struct abc *)malloc(sizeof(struct abc));

 do
{
 printf("Enter choice:\n");
 printf("1.push 2.pop 3.exit");
 scanf("%d",&ch);
  switch(ch)
 {
   case 1:
         push(n);
   case 2:
          pop(n);
   case 3:
        exit;
 }
 printf("do you want to continue?");
 scanf("%d",&y);
}while(y==1);

}
 
 
void push(char n)
{
  
  new = (struct abc *)malloc(sizeof(struct abc ));
  if(i== n-1)
{
  printf("Overflow!!");
}
else
{
 
 printf("Enter data:\n");
 scanf(" %c",&new->data);
 new->next = NULL;
 if(top == NULL)
{
 top = new;
 i++;
head = new;
}
else
{
 new->next = top;
 top = new;
 i++;
}
}
}
int pop(char n)
{ while(new->next !=NULL)
 {
  printf("%c",new->data);
  new = new->next;
  return new->data;
 }
  
}

