/*Memory efficient doubly linked list where nodes are inserted at the end*/
#include<stdio.h>
#define null 0
#include<malloc.h>
void create();
void display();
struct node* xor(struct node *a, struct node *b)
{
    return (struct node*)((unsigned int)(a)^(unsigned int)(b));
}
struct node 
{
	struct node *npx;
	int info;
};

struct node *head;
void main()
{
create();
display();
}
void create()
{
	struct node *ptr,*cpt,*prev=null;
	int i;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->npx= null;
	printf("\n enter the first node\n");
	scanf("%d",&ptr->info);
	head=ptr;
	do
	{
		cpt=(struct node *)malloc(sizeof(struct node));
		printf("\n enter the next node information\n");
		scanf("%d",&cpt->info);
		cpt->npx=xor(ptr,null);
		ptr->npx=xor(cpt,prev);
		prev=ptr;
		ptr=cpt;
		printf("enter 1 for more nodes\n");
		scanf("%d",&i);
	}
	while(i==1);

}
void display()
{
	struct node *curr,*prev=null,*next;
	curr=head;
	
	while(curr!=null)
	{
		printf("%d\n",curr->info);
		next=xor(prev,curr->npx);
		prev=curr;
		curr=next;
	}
}
	
	
	
	
