#include<stdio.h>
#include<conio.h>
void frequency(int a[] , int);

void main()
{
    int a  [100],i,size;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    printf("ENTER THE ELEMENT IN ARRAY:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    frequency(a,size);
    getch();
}
void frequency(int a[],int size)
{
    int i,j,count,temp=0;
   for(i=0;i<size;i++)
    {
         for(j=i+1;j<size;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;

             }

         }
    }
    count =1;
    for(i=0;i<size;i++)
       {
        if(a[i]=a[i+1])
          {
          count++;
          }
        else
            {
            printf("\n number is=%d and frequency is=%d ",a[i],count);
            count=1;

             }
         }

   }
