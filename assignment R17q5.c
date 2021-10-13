#include<stdio.h>
#include<conio.h>
#include<string.h>
struct quadrant
{
    float x,y;
};
int fun(struct quadrant s);
void main()
{
    int t;
    struct quadrant s;
    printf("\n 1:ENTER THE VALUE OF X-CO-ORDINATE \n");
    scanf("%f",&s.x);
    printf("\n 2:ENTER THE VALUE OF y-CO-ORDINATE \n");
    scanf("%f",&s.y);
    printf("\n #: DISPLAY THE VALUE OF BOTH C0-ORDINATE");
    printf("\n 1:DISPLAY THE VALUE OF X-CO-ORDINATE \n");
    printf("%f",s.x);
    printf("\n 2:DISPLAY THE VALUE OF y-CO-ORDINATE \n");
    printf("%f",s.y);
    t=fun(s);
    if(t==0)
    {
        printf("\n COordinate lies on axes");
    }
    else if(t==1)
    {
         printf("\n COordinate lies on first coordinate");
    }
     else if(t==2)
    {
         printf("\n COordinate lies on second coordinate");
    }
    else if(t==3)
    {
         printf("\n COordinate lies on third coordinate");
    }
     else
    {
         printf("\n COordinate lies on fourth coordinate");
    }
     getch();

}

int fun(struct quadrant s)
{
    if(s.x>0 && s.y>0)
    {
        return 1;
    }
    else if(s.x<0 && s.y>0)
    {
        return 2;
    }
    else if(s.x<0 && s.y<0)
    {
        return 3;
    }
    else if(s.x>0 && s.y<0)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

