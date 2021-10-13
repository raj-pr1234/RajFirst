#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,c=0;
    int n,p;
    printf("Enter two numbers\n");
    scanf("%d%d",&n,&p);
    printf("the value between %d to %d\n",n,p);
    for(i=n;i<=p;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
        printf("%d ,",i);
        }
        c=0;

    }

}
