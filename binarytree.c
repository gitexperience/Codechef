#include<stdio.h>
struct node
{
	int info;
	struct node *left;
	struct node *right;
};
void right(struct node **ptr)
{
	char ch;
		do
		{
			struct node *cpt;
			cpt=(struct node*)malloc(sizeof(struct node));
			*ptr->right=cpt;
			printf("Enter the right node information\n");
			scanf("%d",&cpt->info);
			
			
		}
}
struct node *root;
		void create()
		{
			char ch;
			
			struct node *ptr; 
			ptr=(struct node*)malloc(sizeof(struct node));
			printf("enter the first node information\n");
			scanf("%d",&ptr->info);
			ptr=root;
			printf("Enter r to insert right child and l for left child\n");
			scanf("%c",&ch);
			switch(ch)
			{
				case 'r':
				right(ptr);
				break;
				case 'l':
				left(ptr);
				break;
			}
			
		}
		

void main()
{
	 create();
}

