#include<stdio.h>
#define null 0
struct node * findkthnode(struct node*,int );
struct node 
{
	struct node *link;
	int data;
};
struct node *first;
 main()
{
	struct node * ptr,*res;
	printf("\n enter the first node \n");
	ptr=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&ptr->data);
	ptr->link=null;
	first=ptr;
	create(first);
	reverse(first,3);
	
}
create(struct node *head)
{
	int ch;
	struct node *ptr,*cpt;
	cpt=head;
	do
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("enter next element\n");
		scanf("%d",&ptr->data);
		while(cpt->link!=null)
		cpt=cpt->link;
		ptr->link=null;
		cpt->link=ptr;
		printf("enter 1 for more elements\n");
		scanf("%d",&ch);
	}
	while(ch==1);
}
reverse(struct node *head, int k)
{
	struct node *curr,*ptr,*cpt,*temp,*tpt,*newhead;
	int i;
	ptr=head;
	curr=head;
	printf("func call \n");
	if(hasknodes(ptr,3))
	{
		newhead=findkthnode(ptr,3);	
	}
	else
	newhead=ptr->link;
	while(curr && hasknodes(curr,3))
	{
		i=0;
		temp=findkthnode(ptr,3);
		while(i<3)
		{
			cpt=curr->link;
			curr->link=temp;
			temp=curr;
			curr=cpt;
			i++;
		}
	}
	curr=head;
	if(!newhead)
	return 0;
	while(curr!=newhead || curr->link!=null)
	{
		printf("%d ",curr->data);
		curr=curr->link;
	}
	 return reverse(newhead,3);	
}
int hasknodes(struct node *head, int k)
{
	struct node *ptr;
	ptr=head;
	while(k>0)
	{
		if(!ptr)
		{
			return null;
		}
		else
		{
			ptr=ptr->link;
			k--;
		}
		return 1;
		
	}
}
struct node *findkthnode(struct node *head,int k)
{
	struct node *ptr;
	ptr=head;
	while(k>0 && ptr->link)
	{
		ptr=ptr->link;
		k--;
	}
	return ptr->link;
}
