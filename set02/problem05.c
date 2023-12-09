// 05.  Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}

int GCD(int a ,int b)
{
    int gcd;
    int i=1;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
        i++;
    }
    return gcd;
}
void output(int a,int b,int gcd)
{
    printf("GCD of %d & %d = %d",a,b,gcd);
}
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=GCD(a,b);
    output(a,b,gcd);
}