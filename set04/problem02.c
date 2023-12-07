// 2. Write a program to find the smallest of three fractions
#include<stdio.h>
typedef struct {
    float num, den;
} Fraction;
Fraction input()
{
    Fraction x;
    printf("enter the numerator :");
    scanf("%f",&x.num);
    printf("enter the denominator :");
    scanf("%f",&x.den);
    return x;
}
Fraction compare(Fraction a,Fraction b,Fraction c)
{
    Fraction small;
    small.num=a.num;
    small.den=a.den;

    if(small.num/small.den>b.num/b.den)
    {
        small.num=b.num;
        small.den=b.den;
    }
    if(small.num/small.den>c.num/c.den)
    {
        small.num=c.num;
        small.den=c.den;
    }
    return small;
}
void output(Fraction small)
{
    printf("The smallest is %f/%f",small.num,small.den);
}
int main()
{
    Fraction a,b,c,small;
    a=input();
    b=input();
    c=input();
    small=compare(a,b,c);
    output(small);
}