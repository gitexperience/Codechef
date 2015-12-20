#include<stdio.h>

int main()
{
    char str[25] = "IndiaBIX";
    
    printf("%s\n", &str+2);     //&str is the location of indiabix but &str+2 points to some other location 
    return 0;   //hence will print some garbage value.
}
