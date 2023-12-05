// 8. Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int array_size()
{
    int n;
    printf("input array size : ");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    int i;
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_array(int n,int a[n],int sum)
{
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int sum)
{
    printf("The sum is %d",sum);
}

int main()
{
    int n;
    n=array_size();
    int a[n];
    input_array(n,a);
    int sum=0;
    sum=sum_array(n,a,sum);
    output(sum);
    return 0;
}