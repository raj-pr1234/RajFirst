
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,sum;
    printf("ENTER THE VALUE IN MATTRIX A :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE MATRIX B:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
             sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
     printf("multification OF MATRIX:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
}
