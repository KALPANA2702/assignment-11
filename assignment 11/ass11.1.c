#include<stdio.h>
int lcm(int a,int b);
int main()
{
    int a,b,l;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    l=lcm(a,b);
    printf ( " \n LCM of %d and %d is %d. ",a,b,l);
    return 0;
}
int lcm(int a,int b)
{
    int l;
    for(l=1;l<=a*b;l++)
    {
        if((l%a==0)&&(l%b==0))
            break;
        
    }
    return(l);
}