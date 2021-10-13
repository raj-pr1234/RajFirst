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
    int i,j,c=1;
       for(i=a+1;i>0;i++)
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
           printf("%d",i);
           break;
         }
         c=1;
    }

    return 0;

}


