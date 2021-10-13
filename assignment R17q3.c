#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
    char email[100];
    char name[50];
    float salary;

};
void main()
{
    struct employee b;
    printf("\n 1:ENTER THE EMPLOYEE MAILID \n");
    gets(b.email);
    printf("\n 2: ENTER THE EMPLOYEE NAME \n ");
    gets(b.name);
    printf("\n 3: ENTER THE EMPLOYEE SALARY \n");
    scanf("%f",&b.salary);
    printf("#:DISPLAY THE ALL MEMBER DETAILS OF EMPLOYEE \n");
    printf("\n 1:DISPLAY THE EMPLOYEE MAILID \n");
    puts(b.email);
    printf("\n 2: DISPLAY THE EMPLOYEE NAME \n");
    puts(b.name);
    printf("\n 3: DISPLAY THE EMPLOYEE SALARY \n");
    printf("%.2f",b.salary);
    getch();
}
