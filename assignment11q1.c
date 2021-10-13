#include<stdio.h>
#include<conio.h>
float average(float a[],int);

void main()
{
     int i,size;
    float a[100],s;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter the element in the array\n");
    for(i=1;i<=size;i++)
    {
        scanf("%f ,",&a[i]);
    }
     s=average(a,size);
     printf("average is=%.2f",s);
    getch();
}
float average(float a[],int size)
{
    int i;
    float avg,sum=0.0;
    for(i=1;i<=size;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/size;

    return avg;
}
