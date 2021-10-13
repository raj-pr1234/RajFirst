#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float p,r;
    printf("enter the radius");
    scanf("%f",&r);
    p=area(r);
    printf("%.3f",p);
    return 0;

}
float area( float a)
{
    float s;
    s=3.14*a*a;
    return s;
}
