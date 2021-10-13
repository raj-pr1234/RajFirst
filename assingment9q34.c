#include<stdio.h>
#include<conio.h>





void Nnatural(int);


void main()
{
    int m;
    printf("\t\t**** Enter the NO OF ELMENT:****\n");
    scanf("%d",&m);
    Nnatural(m);
    getch();
}
void Nnatural(int n)
{

    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}
