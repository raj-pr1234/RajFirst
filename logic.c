main()
{
   int p,q,i;

   for(i=1;i<=4;i++)
    {


       scanf("%d%d",&p,&q);
       if(( !p||q )&& p)
       {

           printf("valid=%d ",q);
       }
       else
       {

           printf("false");
       }

    }
  getch();
}
