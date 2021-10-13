#include<stdio.h>
#include<conio.h>
void sort(int a[] , int);

void main()
{
    int a  [100],i,size;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    printf("ENER THE ELEMENT IN ARRAY:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,size);
    getch();
}
void sort(int a[],int size)
{
    int i,j,temp=0;
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
    printf("DISPLAY THE SORTED ARRAY:\n");
     for(i=0;i<size;i++)
     {
         printf("%d ",a[i]);
     }
     getch();
}
