/*program to Given a linked list of line segments, remove middle points */
#define null 0
#include<stdio.h>
void create();
void display();
void rem();
void displaymodify();
struct node
{
	int x,y;
	struct node *link;
}*first;
void main()
{
	create();
	printf("\n before operation list is:\n");
	display();
	rem();
	printf("\n after operation list is:\n");
}
void create()
{
	int i;
	struct node *ptr,*cpt;
	printf(" enter the x and y co-ordinates\n");
	ptr=(struct node*)malloc(sizeof(struct node));
	scanf("%d %d",&ptr->x,&ptr->y);
	first=ptr;
	do
	{
		printf("enter next value\n");
		cpt=(struct node*)malloc(sizeof(struct node));
		scanf("%d %d",&cpt->x,&cpt->y);
		ptr->link=cpt;
		ptr=cpt;
		printf("\n enter 1 for more entries\n");
		scanf("%d",&i);
	}while(i==1);
	ptr->link=null;
}
void display()
{
	struct node *ptr;
	ptr=first;
	while(ptr!=null)
	{
		printf("(");
		printf("%d,%d",ptr->x,ptr->y);
		printf(")");
		printf("->");
		ptr=ptr->link;
	}
}
void rem()
{
struct node *ptr,*cpt,*tpt;
int i;
ptr=first;
cpt=ptr->link;
tpt=first;
while(ptr->link!=null)
{
while(cpt->x==ptr->x)
{
	cpt=cpt->link;
	ptr=ptr->link;
}
tpt->link=ptr;
tpt=ptr;
while(cpt->y==ptr->y)
{
	cpt=cpt->link;
	ptr=ptr->link;
}
}
tpt->link=null;
displaymodify(tpt);
}

void displaymodify(struct node *ptr)
{
	printf("\n now the modified list is: \n");
	while(ptr->link!=null)
	{
		printf("(");
		printf("%d,%d",ptr->x,ptr->y);
		printf(")");
		printf("->");
		ptr=ptr->link;
	}
}

