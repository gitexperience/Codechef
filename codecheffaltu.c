#include <stdio.h>
#define siz 910
#define _T while(getc(stdin)!='\n');
 
void swap(char *a, char *b)
{
char temp=*a;
*a=*b;
*b=temp;
}
 
main()
{
int fall, n, N, i, j, k, t, v, w, z;
char c, a[siz][siz], x[siz];
for(scanf("%d",&fall); fall--;)
	{
	i=z=!scanf("%d",&N);
	_T for(n=N*N; i<N; i++)
		{
		for(j=0; j<N; j++)
			for(scanf("%c",&c),a[i*N+j][n]=c-48-(k=0); k<n; v=k/N,w=k%N,a[i*N+j][k++]=((v==i&&w==j)||(v==i&&w==(j-1))||(v==i&&w==(j+1))||(v==(i-1)&&w==j)||(v==(i+1)&&w==j))?1:0);
		_T
		}
	for(i=0; i<n; i++)
		{
		if(a[i][i]==0)
			for(j=i+1; j<n; j++)
				if(a[j][i]==1)
					{
					for(k=i; k<n+1; swap(&a[j][k],&a[i][k]),k++);
					break;
					}
		if(a[i][i]==1)
			for(j=i+1; j<n; j++)
				if(a[j][i]==1)
					for(k=i; k<n+1; a[j][k]=(a[j][k]+a[i][k])%2,k++);
		}
	for(i=n-1; i>=0; z+=((x[i]=(a[i][n]+x[i])%2)==1),i--)
		for(x[j=i]=0; ++j<n; x[i]=(x[i]+a[i][j]*x[j])%2);
	for(printf("%d\n",
	z,i=-1); ++i<n; printf((x[i]==1)?"%d %d\n":"",(i/N)+1,(i%N)+1));
	}
return 0;
}
 
