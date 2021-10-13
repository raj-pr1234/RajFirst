#include<stdio.h>
#include<conio.h>


void main()
{
    int n,i,j,c=0;
    printf("\t\t****ENTER THE NUMBER****\t\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
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
            }
            c=0;
        }

    }
     getch();
}
