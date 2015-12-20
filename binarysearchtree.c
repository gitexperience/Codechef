/*my own method to create a binary search tree*/
#include<stdio.h>
#define null 0
void create();
void traverse();
void inorder();
void postorder();
void preorder();
void postorder1();
int top=0;
int stack[10];
struct node
{
	int info;
	struct node *lptr;
	struct node *rptr;
};
struct node *root;
main()
	{
		create();
		traverse();
	}
void create()
{
	struct node *newn, *ptr,*pptr,*temp;
	int i;
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("enter the root node\n");
		scanf("%d",&ptr->info);
		ptr->lptr=null;
		ptr->rptr=null;
		root=ptr;
		do
		{
			pptr=(struct node*)malloc(sizeof(struct node));
			pptr->lptr=null;
			pptr->rptr=null;
			printf("enter nxt node\n");
			scanf("%d",&pptr->info);
			ptr=root;
			while(ptr!=null)
			{
				temp=ptr;
				if(ptr->info>pptr->info)
					ptr=ptr->lptr;
					else 
					ptr=ptr->rptr;
			}
			if(pptr->info>temp->info)
			temp->rptr=pptr;
			else
			temp->lptr=pptr;
			printf("enter 1 to insert more elements\n");
			scanf("%d",&i);
		} while(i==1);
}
			
void traverse()
{
struct node *ptr;
ptr=root;
printf("Inoder traversal is:- ");
inorder(ptr);
printf("\nPostorder traversal is:- ");
postorder(root);
printf("\nPreorder traversal is:-  ");
preorder(root);
printf("\n Again postorder traversal is:- ");
postorder1(root);
}
void inorder(struct node *ptr)
{
	if(ptr!=null)
	{
		inorder(ptr->lptr);
		printf("%d  ",ptr->info);
		inorder(ptr->rptr);
	}
}
void postorder(struct node *ptr)
{
	if(ptr!=null)
	{
		postorder(ptr->lptr);
		postorder(ptr->rptr);
		printf("%d  ",ptr->info);
	}
}
void preorder(struct node *ptr)
{
	int top=-1;
	stack[++top]=(int)ptr;
	while(top!=-1)
	{
		(int)ptr=stack[top--];
		if(ptr!=null)
		{
			printf("%d  ",ptr->info);
			stack[++top]=(int)(ptr->rptr);
			stack[++top]=(int)(ptr->lptr);
		}
	}
}
void postorder1(struct node *ptr)
{
	int top=1;
	stack[0]=null;
	ptr=root;
	level:
	while(ptr!=null)
	{
		top++;
		stack[top]=ptr;
		if(ptr->rptr!=null)
		{
			top++;
			stack[top]=ptr->rptr;
			ptr=ptr->lptr;
		}
	}
	ptr=stack[top];
	top--;
	while(ptr>0)
	{
		printf("%d  ",ptr->info);
		ptr=stack[top--];
		top--;
	}
	if(ptr<0)
	{
		goto level;
	}
}
