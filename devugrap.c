#include<stdio.h>

 void main()
  {
  	int t, n,k,i, a[100],output=0;
  	scanf("%d\n",&t);
  	while(t>0)
  	{
  		
  		scanf("%d\n",&n);
  	
  		scanf("%d\n",&k);
  		for(i=0;i<n;i++)
  		{
  			scanf("%d ",&a[i]);
  			output = output + (a[i]%k);
  		}
  		printf("%d", output);
  		t--;
  	}
  }
  		
  		
  		
