#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,n;
    printf("enter the two number: ");
    scanf("%d%d",&x,&y);
    printf("\n case 1:addition");
    printf("\n case 2:substraction");
    printf("\n case 3:multification");
    printf("\n case 4:division");
    printf("\n case 5:exit");
    printf("\n enter the case number");
    scanf("%d",&n);
    switch(n)
    {
     case 1:
        {
            int c;
            c=x+y;
            printf("addition is=%d",c);
            break;
        }
     case 2:
        {
            int c;
            c=x-y;
            printf("Substraction is=%d",c);
            break;
        }
     case 3:
        {
            int c;
            c=x*y;
            printf(" Multification is=%d",c);
            break;
        }
     case 4:
        {
            float c;
            c=x/y;
            printf("division is=%f",c);
            break;
        }
     case 5:
        {
            break;
        }
     default :
        {
            printf("Inviled case number");
        }
    }


}
