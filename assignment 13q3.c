#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],c[3][3];
    int i,j;
    printf("ENTER THE VALUE IN MATTRIX A :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[j][i];
        }
    }

    printf("TRANSPOSE OF MATRIX:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
}

