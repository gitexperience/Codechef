#include <stdio.h>
 
int main(void)
{
    int i;
    int *ptr = (int *) malloc(5 * sizeof(int));
 
    for (i=0; i<5; i++)
        *(ptr + i) = i;
 
    printf("%d ", *ptr++);// samjhe ,, (*ptr)++ value at address ko increase krta hai and 
    printf("%d ", (*ptr)++);  // (ptr++) address ko increase krke next address me point krta hai ,and *(ptr++) uss address
    printf("%d ", *ptr); // ki value print krta hai..
    printf("%d ", *++ptr);
    printf("%d ", *ptr++);
    printf("%d ", ++*ptr);
 	
}
