// 8. Write a program to add n fractions
#include<stdio.h>
typedef struct Fraction
{
    int num, den;
} frac;

int input_n()
{
    int x;
    printf("enter the size of an array :");
    scanf("%d",&x);
    return x;
}
frac input_fraction(int i)
{
    frac x;
    printf("enter the numerator & denominator :");
    scanf("%d  %d",&x.num,&x.den);
    return x;
}
void input_n_fractions(int n, frac f[])
{
    for(int i=0;i<n;i++)
    {
        f[i]=input_fraction(i);
    }
}
int find_gcd(int a, int b)
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
frac add_fractions(frac x,frac y)
{
    frac sum;
    sum.num=(x.num * y.den )+( y.num * x.den);
    sum.den=x.den * y.den;
    
    int gcd =find_gcd(sum.num,sum.den);
    sum.num=sum.num/gcd;
    sum.den=sum.den/gcd;
    return sum;
}
frac add_n_fractions(int n, frac f[n])
{
    frac sum;
    sum.num =f[0].num;
    sum.den =f[0].den;
    for(int i=1;i<n;i++)
    {
        sum=add_fractions(sum,f[i]);
    }
    return sum;
}
void output(int n, frac f[], frac sum)
{
    for(int i=0;i<n;i++)
    {
        printf("%d/%d ",f[i].num,f[i].den);
         if(i!=n-1)
         {
             printf(" + ");
         }
         else{
             printf(" = %d/%d",sum.num,sum.den);
         }
    }
}
int main()
{
    int n;
    n=input_n();
    frac f[n],sum;
    input_n_fractions(n,f);
    sum=add_n_fractions(n,f);
    output(n,f,sum);
}