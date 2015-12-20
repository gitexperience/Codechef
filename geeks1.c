/*Point to next higher value node in a linked list with an arbitrary pointer*/
#include<stdio.h>
#include<conio.h>
void display();
void create();
void sort();
struct list 
{
	struct list *link;
	struct list *arbit;
	int info;
}*first;
void main()
{
	create();
	display();
	printf("sorted list is\n");
	sort();
	display();
	attrib();
}
void create()
{
	int i;
	struct list *ptr,*cpt;
	ptr=(struct list *)malloc(sizeof(struct list));
	printf("enter the first node\n");
	scanf("%d",&ptr->info);
	ptr->arbit=NULL;
	first=ptr;
	do
	{
		cpt=(struct list *)malloc (sizeof(struct list));
		printf("enter next node information\n");
		scanf("%d",&cpt->info);
		ptr->link=cpt;
		ptr->arbit=NULL;
		ptr=cpt;
		printf("enter 1 for more elements and 0 for no more values\n");
		scanf("%d",&i);
	}while(i==1);
	ptr->link=NULL;
}
void display()
{
	struct list *ptr;
	ptr=first;
	printf("%d ",ptr->info);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		printf("%d ",ptr->info);
		
	}
}
void sort()
{
	struct list *ptr,*cpt;
	int temp;
	ptr=first;
	while(ptr->link!=NULL)
	{
		cpt=ptr->link;
		while(cpt!=NULL)
		{
		if(cpt->info<ptr->info)
		{
		temp=cpt->info;
		cpt->info=ptr->info;
		ptr->info=temp;
		}
		cpt=cpt->link;
		}
			ptr=ptr->link;
	}
}
void attribute()
{
	struct list *ptr,*cpt;
	ptr=first;
	cpt=ptr;
	while(ptr->link!=NULL)
	{
		cpt->arbit=ptr->link;
		cpt=cpt->arbit;
		ptr=ptr->link;
	}
	printf("values using attrib link: \n");
	while(cpt->arbit!=NULL)
	{
		printf("%d ",cpt->info);
		cpt=cpt->arbit;
	}
}
		
		
		
			
	
	
		
