int gcd(int a ,int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}
int main()
{
   int x,y;
   scanf("%d%d",&x,&y);
   printf("gcd(%d, %d) = %d",x,y,gcd(x, y));
   return 0;

}
