int main()
{
  int i,n,x,y,sum=0;
  printf("Enter the number\n");
  scanf("%d",&n);
  for(i=1; i<=4;i++)
  {
      x=n%10;
      n=n/10;
      if(i==1 || i==4)
      {
          sum=sum+x;
      }
  }
  printf("Sum is = %d\n",sum);
  getch();
}
