// 6.  Write a program to find the average of all the odd elements in an array
// 6.  Write a program to find the average of all the odd elements in an array
#include<stdio.h>
int input_n()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}
int input( int n,int a[])
{ 
   printf("enter the elements :");
   for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
}
int odd_average(int n, int a[])
{
    float sum=0,count=0;
    float avg;
   
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
            count++;
        }
    }
    avg=sum/count;

    return avg;
}
void output(float avg)
{
     printf("avg = %f",avg);
}
int  main()
{
    int n;
    float avg;
    n=input_n();
    int a[n];
    input(n,a);
    avg=odd_average(n,a);
   output(avg);
}