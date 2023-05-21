#include<stdio.h>
#include<math.h>
int square(int n);
int square(int n)
{
    int i;
    i=n*n;
    return i;
}
int main()
{
    int x,n;
    printf("enter any number");
    scanf("%d", &n);
   x = square(n);
    printf("Square of %d is: %d\n", n, x);
    return 0;
}