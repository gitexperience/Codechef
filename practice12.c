#include <string.h>
#include <stdio.h>

int main(void)
{
   char text[] = "I learn through IndiaBIX.com";
   char *ptr, c = 'I';

   ptr = strrchr(text, c);
   if (ptr)
      printf("The position of '%c' is: %d\n", c, ptr-text); //ptr-text  gives the difference between the pointer position of the text and pointer position of the ptr. 
   else
      printf("The character was not found\n");
   return 0;
}
