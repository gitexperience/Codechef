#include<iostream.h>
void main()
{
	int n,temp=0,count=0;
	cin>>n;
	char stud[n],pysc[n];
	int match[n],result[n];
	for(int j=0;j<n;j++)
	{
		match[j]=0;
		resullt[j]=0;	
	}
	while(temp<n)
	{
	cin>>stud[temp];
	cin>>pysc[temp];
	temp++;
	count++;
	}
	temp=0,temp2=0;
	int p=0;
	while(temp2<count)
	{
	while(temp<count)
	{
	if(stud[temp2]==pysc[temp])
		{
		match[temp2]++;
		temp++;
		}
		result[p]=result[p]+match[temp];
		else
		temp++;
	}
	temp2++;
	}
	
	
	
