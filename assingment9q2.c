#include<stdio.h>
#include<conio.h>

float cCIRCUM(float ,float);


void main()
{
    float m,s ,p;
    printf("\t\t**** Enter the radius and lentgh :****\n");
    scanf("%f%f",&m,&);
    s=cCIRCUM(m,p);
    printf("circumfrece IS =%0.2f",s);
    getch();
}
float cCIRCUM(float r , float l)
{

    float pi=3.14;
    return (pi*r*l);
}

