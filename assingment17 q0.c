#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char *);
void main()
{
    char ch[6]="hello";
    printf("%s",ch);
    int p=length(&ch);
    printf("\n%d",p);
    getch();

}
int length(char *p)
{
   int i,l=0;
   for(i=0; p[i]!='\0';i++)
        l++;
   return l;
}
