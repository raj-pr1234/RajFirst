
#include<stdio.h>
#include<conio.h>
#include<math.h>
void armstrong(int,int);
void main()
{
  int n,m;
  printf("enter range of the number for starting and ending");
  scanf("%d%d",&n,&m);
  armstrong(n,m);
  getch();
}
 void armstrong(int a,int b)
 {
     int i,r,sum=0,p,count;
      for(i=a; i<=b; i++)
      {
          p=i;
          while(p!=0)
          {
              p=p/10;
              count++;

          }
          p=i;
          while(p!=0)
          {
            r=p%10;
            p=p/10;
            sum=sum+pow(r,count);

          }
          p=i;
          if(sum==p)
          {
              printf("%d \n",sum);
          }
          count=0;
          sum=0;

      }

 }
