// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size()
{
   int x;
   printf("enter the array size : ");
   scanf("%d",&x);
   return x; 
}
void input_array(int n,int *x)
{
    int q;
    scanf("%d",&q);
    *x=q;
}
int sum_composite_numbers(int z,int *sum)
{
    *sum=z+*sum;
}
void output(int a)
{
     if(a>1)
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
    int n,a[n];
    int sum=0;
    n=input_array_size();
    printf("enter the numbers : ");
    for(int i=0;i<n;i++)
    {
        input_array(n, &a[i]);
        {
            while(i!=n)
            {
                if(n==(n/i)*i)
                {
                    sum_composite_numbers(a[i],&sum);
                }
            }
        }
    }
    output(sum);
    return 0;
}