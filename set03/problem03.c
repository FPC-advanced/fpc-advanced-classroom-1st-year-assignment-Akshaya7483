// 3. Write a program to check if the given number is prime
#include<stdio.h>
int input_number()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}
int is_prime(int n)
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
void output(int result)
{
    if(result==1)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}
int main()
{
    int n,result;
    n=input_number();
    result=is_prime(n);
    output(result);
    return 0;
}