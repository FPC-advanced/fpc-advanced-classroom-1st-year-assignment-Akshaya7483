// Write a program to find nth number in fibonacci sequence.
#include<stdio.h>
int input()
{
    int n;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n)
{
    int i=0;
    int j=1;
    while(i<=n)
    {   if(n==j || n==i)
        {
            return n;
        }
         if(j>=i)
        {
            i=i+j;
            printf("%d,",i);
        }
        else
        {
            j=i+j;
            printf("%d,",j);
        }
       
    }
}
void output(int fibo,int n)
{
    if(n==fibo)
        {
            printf("it is a fibonacci series \n");
        }
    else
    {
        printf("The number in not fibonacci series \n");
    }
}
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}