// Write a program to find nth number in fibonacci sequence.
#include<stdio.h>
int input()
{
    int n;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    return n;
}
void find_fibo(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return(fibo(n-1) + fibo(n-2));
    }
}
void output(int n, int fibo)
{
    printf("The %d number in fibonacci series is %d\n",n,fibo);
}
int main()
{
    int n;
    int fibo;
    n=input();
    find_fibo(n);
    output(n,fibo);
    return 0;
}