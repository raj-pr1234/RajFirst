#include<stdio.h>
#include<conio.h>
void main()
 {

    int c,d,p,sum=0;
    int a[3][3],b[3][3],multply[3][3];
    printf("enter element in first array\n");
    for(c=0;c<3;c++)
      {
        for(d=0;d<3;d++)
        scanf("%d",&a[c][d]);
        }
         printf("enter element of second mattrix");
         for(c=0;c<3;c++)
          {
            for(d=0;d<3;d++)

             scanf("%d",&b[c][d]);
          }

         for(c=0;c<3;c++)
            {
                for(d=0;d<3;d++)
               {
                   sum=0;
                for(p=0;p<3;p++)
                   {

                    sum=sum+a[c][p]*b[p][d];
                    }
                multply[c][d]=sum;

                }

              }

          for(c=0;c<3;c++)
          {
              for(d=0;d<3;d++)
                printf("%d", multply[c][d]);
              printf("\n");
          }

}

