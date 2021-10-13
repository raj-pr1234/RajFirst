#include<stdio.h>


int main()
{
    int n,i,t1=0,t2=1,nextTerm=0;
    printf("\t\t****Enter nth Term:****\t\n");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("%d th term is=%d\n",n,n);
    }
    else
    {
        nextTerm=t1+t2;
        for(i=2; i<=n; i++)
        {
            t1=t2;
            t2=nextTerm;
            nextTerm=t1+t2;
        }
        printf("%d th term is:%d\n",n,t2);
    }
    return 0;
}
