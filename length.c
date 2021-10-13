#include<stdio.h>
#include<conio.h>

int string_ln(char*);

void main() {
   char str;
   int length;
   printf("\nEnter any string :");
   gets(str);
   str=malloc(10*sizeof(char));



   length = string_ln(str);
   printf("The length of the given is : %d",length);
   getch();
}

int string_ln(char*p)
{
   int count = 0;
   while (*p != '\0')
   {
      count++;
      p++;
   }
   return count;
}

