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
    int i=a,j,s=1,t=1,q;

        for(j=b;j>=1;j--)
         {
          s=s*i;
          t=t*j;
          i--;
         }

       q=s/t;
      return q;

}

