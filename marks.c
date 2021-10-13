#include<stdio.h>
#include<conio.h>
void main()
{
    float p,ch,m,h,e,om,rm;
   int maxmark=500;
    printf("enter the number the 5 subject");
    scanf("%f%f%f%f%f",&p,&ch,&m,&h,&e);
    om=(p+ch+m+h+e);
    printf("\n%f",om);
    rm=(om/500)*100;
    if(rm>=60)
    {
        printf("\n pass with first division");
    }
    if(rm<60&&rm>=34)
    {
        printf("\n pass with second devision");
    }
    if(rm<34)
    {
        printf("\n fail");
    }
   getch();
}
