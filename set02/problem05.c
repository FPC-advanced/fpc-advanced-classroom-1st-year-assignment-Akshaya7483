// 05.  Write a program to find GCD _(HCF)_ of two numbers.
#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
int input()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    return a;
}
int find_gcd(int a, int b)
{
    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
          b=b-a;  
        }
    }
    return a;
}
void output(int a, int b, int gcd)
{
    printf("The GCD of %d and %d is %d\n",a,b,gcd);
}