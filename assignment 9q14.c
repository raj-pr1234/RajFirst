#include<stdio.h>
#include<conio.h>
void armstrong(int);
void main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  armstrong(n);
  getch();
}
 void armstrong(int a)
 {
     int i=a, s,p=0;
     while(i>0)
     {
         s=i%10;
         p=p+s*s*s;
         i=i/10;
     }

     if(p==a)
     {
         printf("\n number is armstrong");
     }
     else
     {
         printf("\n number is not armstrong");
     }
 }
