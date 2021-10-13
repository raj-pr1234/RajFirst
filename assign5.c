#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0,n ,j=1 ,sum=0,p;
    //clrscr();
    printf("enter the number");
    scanf("%d",&n);
     while(n!=0)
    {
      n=n/10;
      i++;
    }
  //  printf("%d ",i);
    while(j<=i)
    {
      p=n%10;
      n=n/10;
      sum=sum+p;
      j++;
    }
    printf("%d ",sum);

    getch();
}
