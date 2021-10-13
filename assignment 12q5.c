#include<stdio.h>
#include<conio.h>
void distinct(int a[] , int);

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
    distinct(a,size);
    getch();
}
void distinct(int a[],int size)
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
    printf("distinct element :");
    for(i=0;i<size;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d",a[i]);
        }
    }


}
