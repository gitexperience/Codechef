#include <stdio.h>
main()
{

int a=10;
int *p =&a;
printf("%d\n",*p);
printf("%d",p);

printf("\nafter assign\n");
*p=p;
printf("%d\n",*p);
printf("%d",p);

}
