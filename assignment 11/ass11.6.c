#include<stdio.h>
void printPrimeNumbers(int a,int b);
int main()
{
    int a,b;
    printf("enter number of prime no between you want:");
    scanf("%d %d",&a,&b);
    printPrimeNumbers(a,b);
    return 0;
}
void printPrimeNumbers(int a,int b)
{
    int i,j;
    for(i = a+1; i < b; i++)
    {
        for(j = 2; j <= i; j++){
        if(i % j == 0)
            break;
        }
    if(i == j)
      {
        printf("%d ",i);
      }
    }
}