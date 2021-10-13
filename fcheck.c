#include<stdio.h>

int main()
{
    int n,t1=0,t2=1,nextterm=0;
    printf("\tEnter The Number\n");
    scanf("%d",&n);
    if(n==t1 || n==t2)
    {
        printf("%d is fabonaci number\n",n);
    }
    else
    {
        nextterm=t1+t2;
        while(nextterm<=n)
        {
            if(nextterm==n)
            {
                printf("%d is fabonnaci number\n",n);
            }
            t1=t2;
            t2=nextterm;
            nextterm=t1+t2;
        }
        if(nextterm!=n)
        printf("%d is not fabonnaci number\n",n);
    }
    return 0;

}
