#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int p,n;
    printf("enter the number:");
    scanf("%d",&n);
    p=sum(n);
    printf("%d",p);
    getch();

}
int sum(int a)
{
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    return s;

}

