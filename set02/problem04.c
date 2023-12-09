#include<stdio.h>
int input()
{
    int x;
    printf("enter the array size :");
    scanf("%d",&x);
    return x;
}
void input_array(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int is_composite(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
         int j=2;
        while(j!=a[i]/2+1)
        {
            if(a[i]==((a[i]/j)*j)) // n%i==0;
            {
                sum=sum+a[i];
                break;
            }
            j++;
        }

    }
    return sum;
}
void output(int result)
{
    printf("the sum of n is %d",result);
}
int main()
{
    int n,result;
    n=input();
    int a[n];
    input_array(n,a);
    result=is_composite(n,a);
    output(result);
    return 0;
}