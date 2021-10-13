#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    prime(n);
    getch();

}
int prime(int a)
{
    int i=a,j,c=1;
       for(j=2;j<=a;j++)
       {
        if(i%j==0)
         {
          c++;
         }
       }
    if(c==2)
       {
        printf("return 1");
       }
    else
       {
        printf("return 0");
       }

    return 0;

}


