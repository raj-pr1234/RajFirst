#include<stdio.h>
#include<conio.h>
void Index(int a[] , int);

void main()
{
    int a[100],i,size;
    printf("enter the size\n");
    scanf("%d",&size);
    printf("enter the element in array");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    Index(a,size);
    getch();

}
void Index(int a[], int size)
{
   int location=0,i;
  for (i = 1; i < size; i++)
  {
    if (a[i] < a[location])
    {
      location = i;
    }
  }

  printf("Minimum element is present at location %d \n its value is %d.\n", location+1, a[location]);

}
