#include<stdio.h>
#include<conio.h>
void main()
{
    int year,month;
    printf("enter the year");
    scanf("%d",&year);
    printf("enter the number of month");
    scanf("%d",&month);
    switch(month)
    {
    case 1:

        {
            printf("\n month is January and have no of days=30");
            break;
        }
    case 2:
        {
            if((year%4==0 && year%400==0)||(year%100!=0))

              {
                printf("month is febuary and have no of days=29");
              }
            else
                {
                    printf("month is febuary and have no of days=28");
                }
                break;
        }
    case 3:
        {
            printf("month is march and no of days is=31");
            break;
        }
    case 4:
        {
            printf("month is April and no of days=30");
            break;
        }

         case 5:
        {
            printf("month is may and no of days=31");
            break;
        }
         case 6:
        {
            printf("month is june and no of days=30");
            break;
        } case 7:
        {
            printf("month is July and no of days=31");
            break;
        }
         case 8:
        {
            printf("month is August and no of days=31");
            break;
        }
         case 9:
        {
            printf("month is september and no of days=30");
            break;
        }
        case 10:
        {
            printf("month is october and no of days=31");
            break;
        }

         case 11:
        {
            printf("month is november and no of days=30");
            break;
        }
         case 12:
        {
            printf("month is december and no of days=31");
            break;
        }
         default:
            {
                printf("wrong number of month");
                break;
            }
      }
      getch();
}

