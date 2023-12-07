// 3. Write a program to find the `nCr` of given n and r
#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
    printf("enter n & r: ");
    scanf("%d %d",n , r);
}
int nCr(int n, int r)
{
    float x=n;
    for(int i=n-1,j=0;i>n-r;i--,j++)
    {
        x=x*i/(r-j);
    }
    return x;
}
void output(int result)
{
    printf("%d",result);
}
int main()
{
    int n,r,result;
    input_n_and_r(&n,&r);
    result=nCr(n,r);
    output(result);
}