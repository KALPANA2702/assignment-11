#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a,b,h;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    h=hcf(a,b);
    printf ( " \n hcf of %d and %d is %d. ",a,b,h);
    return 0;
}
int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=a;h++)
    {
        if((a%h==0)&&(b%h==0))
            break;
        
    }
    return(h);
}