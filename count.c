#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,n ,j=1 ,sum=0,p,q;
    //clrscr();
    printf("enter the number");
    scanf("%d",&n);
    // q=n;
    /* while(n!=0)
    {
      n=n/10;
      i++;
    }
    n=q;*/
    while(n!=0)
    {
      p=n%10;
      n=n/10;
      sum=sum+p;
      //j++;
    }
    printf("%d ",sum);

    getch();
}
