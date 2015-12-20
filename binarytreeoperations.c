#include<stdio.h>
#define null 0
struct node
{
	struct node *lptr;
	struct node *rptr;
	int info;
};
struct node *root;
main()
{
	int i;
	printf("Enter your choice\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		create(root);
		break;
	}
}
void create(struct node *root)
{
	int more;
	root=null;
	do
	{
					struct node *ptr;
					ptr=(struct node*)malloc(sizeof(struct node));
					printf("Enter the data\n");
					scanf("%d",&ptr->info);
					ptr->lptr=null;
					ptr->rptr=null;
					if(root==null)
					root=ptr;
					else
					insert(root,ptr);
					printf("Enter 1 for more elements\n");
					scanf("%d",&more);				
	}while(more==1);
	inorder(root);
}
void insert(struct node*root,struct node *newn)
{
	char ch;
	printf("Where to insert l for left and r for right of %d\n",root->info);
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='l')
	{
		if(!root->lptr)
		{
			root->lptr=newn;
		}
		else
		{
			insert(root->lptr,newn);
		}
	}
	else 
	{
		if(!root->rptr)
		{
			root->rptr=newn;
		}
		else
		{
			insert(root->rptr,newn);
		}
	}
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
