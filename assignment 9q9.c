
#include<stdio.h>
#include<conio.h>
int perm(int,int);
void main()
{
    int p,r,n;
    printf("for calculate permutation enter the value N and R:");
    scanf("%d%d",&n,&r);
    p=perm(n,r);
    printf("%d",p);
    getch();

}
int perm(int a,int b)
{
    int i,j,s=1,t=1,q;

        for(i=a;i>=1;i--)
         {
          s=s*i;
         }
         for(j=a-b;j>=1;j--)
         {
             t=t*j;
         }

       q=s/t;
      return q;

}

