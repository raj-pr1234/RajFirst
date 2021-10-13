#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0,avg;
    printf("\t\t**** Enter the numbers ****\t\n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        //printf("%d ,",n);
        sum=sum+n;
    }
    printf("\n sum=%d\n",sum);
    return 0;
}
