// 3. Write a program to check if the given number is prime
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
    int i=1;
    while(i!=n)
    {
        if(n==(n/i)*i)
        {
             count++;
        }
        i++;
    }
     return count;

}
void output(int a)
{
    if(a>1)
    {
        printf("it is not a number");
    }
    else
    {
        printf("it isa prime number");
    }
}
int main()
{
    int n,result,count;
    n=input();
    count=is_composite(n);
    output(count);
    return 0;
}