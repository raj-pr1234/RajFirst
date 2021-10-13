#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n1,n2,hcf=0;
    printf("\t\t***Enter two numbers:***\t\t\n");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1;i++)
    {
     if(n1%i==0 && n2%i==0)
     {
         hcf++;
     }
    }
    if(hcf==1)
    {
        printf("%d and %d are Co-Prime numbers\n",n1,n2);
    }
    else
    {
        printf("%d and %d are not Co-Prime numbers\n",n1,n2);
    }
    getch();
}
