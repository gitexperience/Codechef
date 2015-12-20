#include<stdio.h>				//one of the tricky question, here is call by reference and the changed values are reflected.
/*void swap(char **, char **);
int main()
{
char *pstr[2] = {"Hello", "IndiaBIX"};
swap(&pstr[0],&pstr[1]);
printf("%s\n%s", pstr[0], pstr[1]);
return 0;
}
void swap(char **t1, char **t2)
{
char *t;
t=*t1;
*t1=*t2;
*t2=t;																	
}
*/
#include<stdio.h>              //this is call by value and the changed values are not reflected.
void swap(char *, char *);

int main()
{
    char *pstr[2] = {"Hello", "IndiaBIX"};
    swap(pstr[0], pstr[1]);
    printf("%s\n%s", pstr[0], pstr[1]);
    return 0;
}
void swap(char *t1, char *t2)
{
    char *t;
    t=t1;
    t1=t2;
    t2=t;
}
