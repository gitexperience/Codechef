/* Delete nodes which have a greater value on right side. mtlb list ka agla element agr bda hai to current element ko remove 
kr do.. */
#include<stdio.h>
#define null 0
struct node
{
	struct node * link;
	int info;
	int flag;
};
struct node *first;
 main()
{
	create();
	display();
	remov();
	display();
}
create()
{
	struct node *ptr,*cpt;
	int flag=0,ch1,ch2;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->link=null;
	ptr->flag=0;
	printf("\n enter the first node\n");
	scanf("%d",&ptr->info);
	first=ptr;
	printf("\n enter 1 for more elements\n");
	scanf("%d",&ch1);
	if(ch1==1)
	flag=1;
	if(flag==1)
	{
		do
		{
		cpt=(struct node*)malloc(sizeof(struct node));	
		printf("\n enter the next node\n");
		scanf("%d",&cpt->info);
		cpt->link=null;
		cpt->flag=0;
		ptr->link=cpt;
		ptr=cpt;
		printf("\n enter 1 for more elements\n");
		scanf("%d",&ch2);
		}while(ch2==1);
	}
}
 remov()
{
	struct node *ptr,*cpt,*tpt;
	ptr=first;
	cpt=ptr->link;
	while(cpt!=null)
	{
		if(ptr->info<cpt->info)
		{
		ptr->flag=1;
		}
		ptr=ptr->link;
		cpt=cpt->link;
	}
	ptr=first;
	
	while(ptr!=null)
	{
		if(ptr->flag==1)
		{
			cpt=ptr;
			ptr=ptr->link;
			free(cpt);
		}
		else if(ptr->flag==0)
			ptr=ptr->link;
	}
	return;
	
}
 display()
{
	struct node *ptr;
	ptr=first;
	while(ptr!=null)
	{
		printf("%d %d ",ptr->info,ptr->flag);
		ptr=ptr->link;
	}
	printf("\n");
}
