#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int s,n;
    printf("enter the number:");
    scanf("%d",&n);
    s=fact(n);
    printf("%d",s);
    getch();
}
int fact(int a)
{
    int i,p=1;
    for(i=a;i>1;i--)
    {
        p=p*i;
    }
    return p;
}
