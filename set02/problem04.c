#include <stdio.h>
 int input_array_size()
{
    int a;
    printf("Enter the array size:\n");
    scanf("%d",&a);
    return a;
}
void input_array(int n, int a[n])
{
    int i;
    printf("Enter the elements in the array:\n");
    for( i=0;i<n;i++)
    {
        printf("Array elements:\n",i+1);
        scanf("%d",&a[i]);
    }
}
int is_composite(int n)
{
   int i ;
   if (n <= 1)
   {
    return 0;
   }
   for(i = 2;i <= n/2; i++)
   {
    if (n % i== 0)
    {
        return 1;
    }
   }
   return 0;
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(is_composite(a[i]))
        {
            sum +=a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("The sum of the composite numbers are: %d\n",sum);
}
int main()
{
    int n,sum;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    is_composite(n);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}