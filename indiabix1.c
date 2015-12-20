#include<stdio.h>
void display(int (*ff)());

int main()
{
    int show();
    int (*f)();
    f = show;
    (*f)();
    display(f);
    return 0;
}
void display(int (*ff)())
{
    (*ff)();
}
int show()
{
    printf("IndiaBIX");
}
