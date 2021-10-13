
#include<stdio.h>
#include<conio.h>
void shortarray(int a[]);

void main()
{
   int a[10],i;
   printf("enter the 10 element an  array:\n");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   shortarray(a);
   getch();
}

 void shortarray(int a[10])
 {
     int i,j,temp;
     for(i=1;i<10;i++)
     {
         for(j=0;j<i;j++)
         {
              if(a[j]>a[i])
              {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
               }
         }
     }
         for(i=0;i<10;i++)
         {
            printf("%d ,",a[i]);
         }
     getch();
 }
