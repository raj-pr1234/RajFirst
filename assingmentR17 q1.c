#include<stdio.h>
#include<conio.h>
 void swap(int* , int*);

 void main()
 {
     int a,b;
     printf("\n 1: ENTER TWO VALUES");
     scanf("%d%d",&a,&b);
     printf("\n 2:DISPLAY THE VALUES\n");
     printf("%d,%d",a,b);
     swap(&a,&b);
     printf("\n 3:DISPLAY THE SWAPED VALUES\n");
     printf("%d,%d",a,b);
     getch();
 }
 void swap(int *p , int *q)
 {
     int t;
     t=*p;
     *p=*q;
     *q=t;
 }
