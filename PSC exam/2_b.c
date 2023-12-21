#include<stdio.h>
int get_n()
{
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	return x;
}
void input_n(int n,int a[])
{
	int i;
	printf("enter the array input :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int factorial(int n)
{
	int i = 1,j = 1;
    while (j<n/2) 
    {
        i++;
        j*=i;
    }
    if (j==n) 
    {
        return n;
    } 
    else 
    {
        return 0; 
    }
}
void find_n_fact(int n,int a[],int b[])
{
	for(int i=0;i<n;i++)
	{
		b[i]=factorial(a[i]);
	}
}
void output(int n,int b[])
{
	printf("the factorials are :\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
}
int main()
{
	int n;
	n=get_n();
	int a[n],b[n];
	input_n(n,a);
	find_n_fact(n,a,b);
	output(n,b);
	return 0;
}
