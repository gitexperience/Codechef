/*You are given two linked lists representing two non-negative numbers.
 The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8 */
#include<stdio.h>
#define null 0
struct node
{
	struct node *link;
	int info;
};
struct node *first1,*first2,*first3;
void main()
{
	printf("Create first list\n");
	create(&first1);
	printf("Create second list\n");
	create(first2);
	printf("Adding two lists\n");
	add(&first1);
}
void create(struct node **first)
{
	struct node *ptr,*cpt;
	int ch;
	printf("Enter the first node\n");
	ptr=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&ptr->info);
	ptr->link=null;
	first=ptr;
	do
	{
		cpt=(struct node*)malloc(sizeof(struct node));
		cpt->link=null;			// i didn't use this line and got error .
		printf("Enter next node\n");
		scanf("%d",&cpt->info);
		ptr->link=cpt;
		ptr=cpt;
		printf("Enter 1 for more elements\n");
		scanf("%d",&ch);
	}while(ch==1);
}
void add(struct node **first)
{
/*	struct node *ptr1,*ptr2,*ptr,*cpt;
	int p=0,flag=0;
	ptr1=first1;
	ptr2=first2;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->link=null;
	//ptr->info= (ptr1->info) + (ptr2->info); 
	printf("hellome\n");	//this line has a problem
	first3=ptr;
	ptr1=ptr1->link;
	ptr2=ptr2->link;
	printf("hello1\n");
	while(ptr1!=null||ptr2!=null)
	{
		cpt=(struct node*)malloc(sizeof(struct node));
		if(flag==1)
		cpt->info=(ptr1->info + ptr2->info)+p;
		else
		cpt->info=(ptr1->info + ptr2->info);
		cpt->link=null;
		printf("or you are here\n");
		if(cpt->info>=10)
		{
			flag=1;
			p=(cpt->info)/10;
			cpt->info=(cpt->info)%10;
			ptr->link=cpt;
			ptr=cpt;
		}
		else
		{
			ptr->link=cpt;
			ptr=cpt;
		}
		printf("You reached here\n");
		
		ptr1=ptr1->link;
		ptr2=ptr2->link;
	}
	ptr=first3;
	while(ptr!=null)
	{
		printf("%d",ptr->info);
		ptr=ptr->link;
	}
*/
struct node *ptr;
ptr=*first;
while(ptr!=null)
{
	printf("%d",ptr->info);
	ptr=ptr->link;
}
}
