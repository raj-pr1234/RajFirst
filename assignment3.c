

#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf(" \n enter the number");
    scanf("%d",&x);
    if((x%4==0) && ((x%400==0)||(x%100!=0) ))
      {
        printf("year is leap year");
       }
       else
       {
           printf("year is not leap year");
       }

}
