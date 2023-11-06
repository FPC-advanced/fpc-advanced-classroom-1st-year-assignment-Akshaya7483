// 8. Write a C program to find sum of _n_ different numbers entered by the user.
#include<stdio.h>
int array_size(int *n)
{
    int x;
    printf("input array size : ");
    scanf("%d",&x);
    *n=x;
    return *n;
}
void input_array(int n,int *x)
{
    int q;
    scanf("%d",&q);
    *x=q;
}
int sum_array(int z,int *sum)
{
    *sum=z+*sum;
}
void output(int sum)
{
    printf("The sum is %d",sum);
}

int main()
{
    int n,a[n];
    int sum=0;
    array_size(&n);
    for(int i=0;i<n;i++)
    {
        input_array(n, &a[i]);
        if(a[i]==(a[i]/3)*3)
        {
            sum_array(a[i],&sum);
        }
    }
    output(sum);
    return 0;
}