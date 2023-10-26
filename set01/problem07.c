// 7. Write a C program to find sum of all natural numbers until _n_
#include<stdio.h>
void input(int *n)
{
    printf("enter the natural number");
    scanf("%d",n);
}
int compute(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int sum)
{
    printf("sum of all natural numbers is %d",sum);
}
int main()
{
    int n,sum;
    input(&n);
    sum=compute(n);
    output(sum);
    return 0;
}