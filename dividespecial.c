#include<stdio.h>
void main()
{
	int a=12,b=5,res;
	res=divide(a,b);
	printf("%d",res);
}
int divide(int dividend, int divisor) {
    long long int count=0;
     if(!divisor) return 10000;
        if(divisor == 1) return dividend;
        if(divisor == -1){
            if(dividend == 10000000) {return 100000;}
            else {return -dividend;}
	(dividend<divisor)
    return 0;
    while(dividend>0)
    {
        dividend=dividend-(divisor+divisor);
        if(dividend<0)
        {
        	if(dividend+divisor>=0)
        	count++;
        	else
       		break;
        }
        else
		count+=2;
    }
    return count;
}
