#include<stdio.h>
#include<conio.h>

void main()
{
    int n1,n2,lcm,hcf,i,max;
    printf("\t\t****ENTER TWO NUMBER****\t\n");
    scanf("%d%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    for(i=1;i<=max;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("%d\n",hcf);
    lcm=(n1*n2)/hcf;
    printf("%d ",lcm);
    getch();

}
