#include<stdio.h>
typedef struct Complex
{
    int real;
    float imag;
}complex;
complex input()
{
    complex x;
    printf("enter the real part :");
    scanf("%d",&x.real);
    printf("enter the imaginary part :");
    scanf("%f",&x.imag);
    return x;
}
complex compute(complex a,complex b)
{
    complex sum;
    sum.real=a.real+b.real;
    sum.imag=a.imag+b.imag;
    return sum;
}
void output(complex sum)
{
    printf("The complex number is %d+%fi",sum.real,sum.imag);
}
int main()
{
    complex a,b,sum;
    a=input();
    b=input();
    sum=compute(a,b);
    output(sum);
    return 0;
}