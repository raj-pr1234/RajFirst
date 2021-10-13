#include<stdio.h>
#include<conio.h>
void rotate(int a[],int);

void main()
{
   int size,i;
   printf("enter the size:\n");
   scanf("%d",&size);
   int a[100];
   printf("enter the element an array:\n");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
    rotate(a,size);
    getch();

}
void rotate(int a[],int size)
{
    int j,p=0;
    p=a[size-1];
    a[size-1]=0;
    for(j=size-1;j>0;j--)
    {
    a[j]=a[j-1];
    }
    a[0]=p;
    printf("disply the resulted array\n");
    for(j=0;j<size;j++)
    {
        printf("%d ",a[j]);
    }
    getch();
}
