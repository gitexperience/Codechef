#include <iostream>

using namespace std;
int max (int a, int b)
{
	return (a>=b?a:b);
}
typedef struct node{

int data;

node *left;

node *right;

}node;

node *newNode(int new_data)

{

node *new_node=new node;

new_node->data=new_data;

new_node->left=NULL;

new_node->right=NULL;

return new_node;

}
int calHeight(node *root,int &diameter)

{

if(root==NULL)

return 0;

int left_height=0,right_height=0;

left_height=calHeight(root->left,diameter);

right_height=calHeight(root->right,diameter);

if(left_height+right_height > diameter)

diameter=left_height+right_height+1;

return max(left_height,right_height)+1;

}

 main()

{

node *root=newNode(1);

root->left=newNode(2);

root->right=newNode(3);

root->right->right=newNode(6);

root->left->left=newNode(4);

root->left->left->left=newNode(7);

root->left->left->right=newNode(8);

root->left->left->right->left=newNode(10);

root->left->left->right->left->left=newNode(13);

root->left->left->right->left->right=newNode(14);

root->left->right=newNode(5);

root->left->right->right=newNode(9);

root->left->right->right->left=newNode(11);

root->left->right->right->right=newNode(12);

root->left->right->right->right->right=newNode(15);

int diameter=0;

cout<<"Tree height is "<<calHeight(root,diameter)<<endl; cout<<"diameter="" is="" "<<diameter;
}
