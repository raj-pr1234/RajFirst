#include<stdio.h>
#include<conio.h>
float cArea(float);



void main()
{
    float m s;
    printf("\t\t**** Enter the radius :****\n");
    scanf("%f",&m);
    s=cArea(m);
    printf("AREA IS =0.2%f",s);
    getch();
}
float cArea(float r)
{

    float pi=3.14;
    return (pi*r*r);
}
