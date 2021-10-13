#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,c;
  int n;
  int i=1;
  printf("\n enter the length of sides of a triangle");
  scanf("\n%f%f%f",&a,&b,&c);
  printf("\n case 1=Isosceles triangle");
  printf("\n case 2=Right angle triangle");
  printf("\n case 3=equilateral triangle");
  printf("\n case 4=exit");
   while(i==1)
  {
  printf("\n enter the case number");
  scanf("%d",&n);
  switch(n)
  {
  case 1:
    {
       if((a==b)||(b==c)||(a==c))
       {
         printf("triangle is issoles\n");
         break;
       }
       else
       {
           printf("triangle is not issoles \n");
           break;
       }
    }
  case 2:
    {
        if((c*c==b*b+a*a)||(a*a==b*b+c*c)||(b*b==a*a+c*c))
        {
            printf("triangle is right angle triangle\n");
            break;
        }
        else
        {
            printf("not a right angle triangle\n");
            break;
        }
    }
  case 3:
      {
          if(a==b && b==c && c==a)
          {
              printf("\n triangle is equilateral\n");
              break;
          }
          else
          {
              printf("\n not equilateral triangle");
              break;
          }
      }
    case 4:
      {
        i++;
      }
  default :
      {
        printf("enter the valid case no number");

      }
  }
}
}
