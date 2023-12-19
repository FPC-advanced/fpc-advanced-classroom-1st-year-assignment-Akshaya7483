#include<stdio.h>
int get_n()
{
	int x;
	printf("enter the number :");
	scanf("%d",&x);
    return x;
}
int input_n(int n,int a[])
{
    int i;
    printf("enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    return a;
}
int fact(int a[])
{
    int i,count=0,j=2;
	for(i=1;i!=a[i]/2;i++)
	{
		j=j*i;
        if(j==a[i])
        {
            count++;
        }
	}
    j++;
    return count;
}
void find_n_fact(int n,int a[],int b[])
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        count=fact(a[i]);
        if(count>0)
        {
             b[i+1]=a[i];
        }
    }
    return b;
}
void output(int n,int b[])
{
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
