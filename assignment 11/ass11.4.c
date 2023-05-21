#include<stdio.h>
int primeno(int n);
int main()
{
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
   x= primeno(n);
     printf("the next prime number is %d",x);
   return 0;
}
int primeno(int n)
{
    int i,j;
    for(j=n+1; ;j++)
    for(i=2;i<j;i++)
    {
        if(j%i==0)
            break;
    }
    if(i==j)
    return (i);
}