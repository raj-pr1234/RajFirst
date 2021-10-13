#include<stdio.h>
#include<conio.h>
void reverse(int a[] ,int);

void main()
{
    int a[100],i,size;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    printf("ENTER THE ELEMENET IN ARRAY:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,size);
    getch();

}
void reverse(int a[],int size)
{
    int i,j,temp=0;
    for(j=size-1,i=0; i<j;j--,i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("DISPLAY THE REVERSE ARRAY:\n");
    for(i=0; i<size;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
