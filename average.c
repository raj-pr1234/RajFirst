#include <stdio.h>
#include <conio.h>
void main()
{
	int n,*p,i;
	float sum=0.0;
	float avg;
	printf("\n enter the number of subject: ");
	scanf("%d",&n);
	p=(int *) malloc(n*2);
	if(p==NULL)
	{
		printf("\n memory allocation unsuccessfull");

	}
	for(i=0;i<n;i++)
	{
		printf("\n enter the number%d: ",i+1);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
		sum=sum+*(p+i);
		printf("\n sum is:%d",sum);
	avg=(float)sum/n;
	printf("\nTHE AVERAGE OF THE NUMBERS IS %f",avg);
	getch();
}
