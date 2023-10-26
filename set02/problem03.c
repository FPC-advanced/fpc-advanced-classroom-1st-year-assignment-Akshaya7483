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
    int y;
    int count=0;
    for(int i=1;i<n;i++)
    {
        y=n/i;
        {    
            count=count+1;
        }
        return count;
    }
}
void output(int count)
{
    if(count>1)
    {
        printf("it is a composite number");
    }
    else
    {
        printf("it is not a composite number");
    }
}
int main()
{
    int n,result,count;
    n=input();
    is_composite(n);
    output(count);
    return 0;
}