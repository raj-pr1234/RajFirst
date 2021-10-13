#include<stdio.h>
#include<conio.h>
void main()
{
    int x,i=1,j=1;
    printf("enter the number");
    scanf("%d",&x);
    while(i<=10)
    {
       while(j<=x)
        {
          printf("%d*%d=%d ,",j,i,j*i);
          j++;
        }
        j=1;
        i++;
        printf("\n");
    }

    getch();

}
