// 02.  Write a program to find if a triangle is scalene.

// > A triangle is scalene if all the three sides of the triangle are not equal to one another.
#include<stdio.h>
int input_side()
{
    int x;
    printf("the sides are :");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    int count=0;
    if(a!=b && b!=c && c!=a)
    {
        count++;
    }
    return count;
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene>0)
    {
        printf("it is a scalene triangle");
    }
    else
    {
        printf("it is not  scalene");
    }
}
int main()
{
    int a,b,c,result;
    a=input_side();
    b=input_side();
    c=input_side();
    result=check_scalene(a,b,c);
    output(a,b,c,result);
}