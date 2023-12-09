// 03.  Write a program find whether a number is a composite number
#include<stdio.h>
int input()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    int count=0;
    int i=2;
    while(i!=n/2+1)
    {
        if(n==((n/i)*i)) // n%i==0;
        {
            count++;
            return count;
        }
        i++;
    }
    return count;
}
void output(result)
{
    if(result>0)
    {
        printf("it is a composite number\n");
    }
    else
    {
        printf("it is not a composite number\n");
    }
}
int main()
{
    int n,result;
    n=input();
    result=is_composite(n);
    output(result);
    return 0;
}