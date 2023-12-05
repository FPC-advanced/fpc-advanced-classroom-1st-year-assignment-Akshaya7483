// Write a C program to add two numbers using **pass by value**
#include<stdio.h>
int input()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}
int add(int a ,int b)
{
    return a+b;
}
void output(int a,int b ,int sum)
{
    printf("%d+%d =%d",&a,&b,&sum);
}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
}
