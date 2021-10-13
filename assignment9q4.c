#include<stdio.h>
#include<conio.h>
void fun(int);
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    fun(n);
    getch();

}
void fun(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
         {
            printf("%d,",i);
         }
    }
}

