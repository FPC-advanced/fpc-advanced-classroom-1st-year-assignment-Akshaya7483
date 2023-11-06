// 11. Write a C program to find the sum of 2 complex numbers
#include<stdio.h>
struct complex
{
    int real;
    float img;
};
struct complex input()
{
    struct complex x;
    printf("enter the real value : ");
    scanf("%d",&x.real);
    printf("enter the imaginary value : ");
    scanf("%f",&x.img);
    return x;
}
struct complex add(struct complex a,struct complex b)
{
    struct complex sum;
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;
    return sum;
}
void output(struct complex sum)
{
    printf("sum of complex numbers is %d + %fi",sum.real,sum.img);
}
int main()
{
    struct complex a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(sum);
    return 0;
}