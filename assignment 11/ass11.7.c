#include<stdio.h>
void fibbonacci(int n);
int main()
{
    int n,f1,f2;
    printf("enter the n number of fibb. series to print");
    scanf("%d",&n);
    fibbonacci(n);
    return 0;
}
void fibbonacci(int n)
{
    int f1 = -1;
int f2 = 1;
int i,f3;
for( i=1;i<=n;i++)
{
    f3=f1+f2;
    printf("%d \n",f3);
    f1=f2;
    f2=f3;
}
}