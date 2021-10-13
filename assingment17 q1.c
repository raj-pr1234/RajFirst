#include<stdio.h>
#include<conio.h>
void insert(int *);
void main()
{
    int a[10];
    insert(a);
    getch();

}
void insert(int *p)
{
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",p[i]);
    }
}
