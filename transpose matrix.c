#include<stdio.h>
void main()
{

    int a[10][10],transpose[10][10],m,n,i,j;
    printf("enter rows and column:");
    scanf("%d%d",&m,&n);
    printf("\n enter matrix element\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    printf(" \n transpose matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

            printf("\n%d",transpose[i][j]);

        }
    }

}
