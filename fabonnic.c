#include<stdio.h>
#include<conio.h>
void main()
{
    int t1=0,t2=1,t3,n,i;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d,%d",t1,t2);
    for(i=1; i<=n; i++)
    {
    t3=t1+t2;
    printf(",%d",t3);
    t1=t2;
    t2=t3;
    if(t3==t1+t2)
    }
    getch();

}
