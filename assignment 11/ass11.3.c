#include<stdio.h>
int primeno(int n);
int main()
{
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
   x= primeno(n);
   if(x==1)
   {
    printf("the given number is prime");
   }
   else{
     printf("the given number is not prime");
   }
   return 0;
}
int primeno(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
    return (1);
    else
    return (0);
}