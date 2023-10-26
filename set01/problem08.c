// 8. Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int input()
{
    int x;
    printf("enter the size of an array :  ");
    scanf("%d",x);
    return x;
}
int compute(int n,int a[n])
{
     int i;
     a[n];
     int sum=0;
     {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=a[i]+sum;
    }
     }
    return sum;
}
int output(int sum)
{
    printf("sum of n is %d",sum);
    return sum;
}
int main()
{
    int n,sum;
    n=input();
    int a[n];
    sum=compute(n,a);
    output(sum);
    return 0;
}