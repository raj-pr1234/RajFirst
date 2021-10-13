#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,p,c=0,flag=0;
    printf("enter the number");
    scanf("%d",&n);
      for(i=n+1;i>0;i++)
       {
         for(j=1;j<=i;j++)
          {
              if(i%j==0)
             {
                c++;
             }
          }

            if(c==2)
            {
                printf("%d ",i);
                break;
            }
             c=0;

        }


    getch();
}

