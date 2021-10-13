#include<stdio.h>
#include<conio.h>
int even(int);
int main()
{
    int s,n;
    printf("enter the number:");
    scanf("%d",&n);
    s=even(n);
    if(s==1)
    {
        printf("return 1");
    }
    else
    {
        printf("return 0");
    }
    return 0;


}
int even(int a)
{

    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

