#include<stdio.h>
#include<conio.h>
void greatest(int a[]);

void main()
{
   int a[10],i;
   printf("enter the 10 element an  array:\n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   greatest(a);
   getch();
}

 void greatest(int a[10])
 {
     int i,temp;
     int max=a[0];
     for(i=1;i<10;i++)
     {
         if(max<a[i])
         {
             temp=max;
             max=a[i];
             a[i]=temp;
         }
     }
     printf("max value is=%d",max);
     getch();
 }
