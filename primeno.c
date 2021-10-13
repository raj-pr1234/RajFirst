#include<stdio.h>
#include<conio.h>

/*void prime(int a)
{
    int i,s=0;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
           s=1;
           break;
        }


    }
    if(a==1)
    {
        printf("%d is not prime and composite no",a);
    }
    else if(s==0)
    {
       printf("%d is prime  no",a);
    }
    else
    {
     printf("%d is not prime  no",a);
    }



}*/

  void checkprime(int a)
  {
      int i,j,p,n;
      for(i=1;i<=a;i++)
      {
          for(j=2;j<=a/2;j++)
          {
              if(i%j!==0)
              {
                  printf("%d",i);
              }




             // printf("%d ,",p);
          }
      }

      printf("Total non prime no is = %d",n);
  }
void main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d",&n);
   //prime(n);
   checkprime(n);
   getch();

}







