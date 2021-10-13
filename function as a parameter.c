#include <stdio.h>
#include<conio.h>
void swap(int *a, int *b);

int main()
{
    int m,n;
    printf("enter the two number m and n:");
    scanf("%d%d",&m,&n);
    swap(&m, &n);
    printf("After Swapping:\n");
    printf("m = %d\n", m);
    printf("n = %d", n);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
