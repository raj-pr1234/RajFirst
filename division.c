#include<stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n/2*2==n)
    {
        printf("Even no is = %d",n);
    }
   else
   {
       printf("Odd no is = %d",n);

   }
    return 0;
}
