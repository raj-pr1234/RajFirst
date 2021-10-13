
#include<stdio.h>
#include<conio.h>

void main()
{
     int i=1;
     int x=0;;
     int n;
     printf("enter the number");
     scanf("%d",&n);
     while(i<=n)
    {
      x=x+i;
        i++;
    }


    printf("sum is =%d",x);
    getch();

}
