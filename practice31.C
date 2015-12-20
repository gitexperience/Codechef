#include"alloc.h"
#include<stdio.h>
void append(struct node **, int);
int count(struct node *);
void addafter(struct node **, int,int);
struct node 
{
	int data;
	struct node *link;
};
void main()
{
	struct node *p;
	int d;
	p=NULL;
	printf("no of elements in the list %d \n",count(p));
	append(&p,3);
	append(&p,7);
	append(&p,9);
	printf("no of elements in the list %d \n",count(p));
	addafter(&p,2,0);
		printf("no of elements in the list %d \n",count(p));
}
void append(struct node **q, int num)
{
	int d;
	struct node *temp, *r;
	temp=*q;
	if(*q==NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=num;
		temp->link=NULL;
		*q=temp;
	}
	else
	{
		temp=*q;
		while(temp->link!=NULL)
		temp=temp->link;
		r=(struct node*)malloc(sizeof(struct node));
		r->data=num;
		r->link=NULL;
		temp->link=r;
	}
}
int count(struct node*q)
{
	int c=0;
	while(q!=NULL)
	{
		q=q->link;
		c++;
	}
	return c;
}
void addafter(struct node **q,int loc, int num)
{
	struct node *temp, *r;
	int i;
	temp=*q;
	for(i=0;i<loc;i++)
	{
		temp=temp->link;
		if(temp==NULL)
		{
			printf("there are less than %d elements in the list\n",loc);
		}
	}
	r=(struct node*)malloc(sizeof(struct node));
	r->data=num;
	r->link=temp->link;
	temp->link=r;
}
