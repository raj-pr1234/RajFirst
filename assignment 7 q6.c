
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,k,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
            {
                if(j>=1&&j<=i)
                {

                    printf("%d",j);

                }
                else
                {
                    printf(" ");

                }
            }
             printf("\n");

    }
    getch();
}
