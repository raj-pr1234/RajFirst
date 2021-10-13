
#include<stdio.h>
#include<conio.h>
void prime(int,int);
void main()
{
    int n,m;
    printf("enter the range of starting and ending number:");
    scanf("%d%d",&n,&m);
    prime(n,m);
    getch();

}
void prime(int a,int b)
{
    int i,j,c=1;
       for(i=a+1;i<b;i++)
       {
         for(j=2;j<=i;j++)
           {
            if(i%j==0)
              {
               c++;
              }

           }

       if(c==2)
         {
           printf("%d, ",i);
         }
         c=1;
    }

}


