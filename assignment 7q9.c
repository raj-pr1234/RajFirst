
#include<stdio.h>
#include<conio.h>
void star(int a);
void main()
{
    int x;
    printf("enter the rows");
    scanf("%d",&x);
    star(x);

    /*int i,j;

        for(i=1;i<=6;i++)
        {

        for(j=1;j<=9;j++)
            {
                if()
                {

                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
             printf("\n");

    }*/
    getch();
}
void star(int a)
{
    int i,j,n,rows;
    rows=a;
    n=rows;
    for(i=1;i<=rows;i++)
    {
        for(int sp=1; sp<=n;sp++)
        {
            printf(" ");
        }
        n--;
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
