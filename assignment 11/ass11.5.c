#include <stdio.h>
void printPrimeNumbers(int n);
int main() {
    int n;
    printf("Enter the number of prime numbers: ");
    scanf("%d", &n);
    printPrimeNumbers(n);
    return 0;
}
void printPrimeNumbers(int n) 
{
    int i,x=2,count=0;
    while(count<n)
    {
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
    {
        printf("%d,\n",i);
    count++;
    }
    x++;
    }
}