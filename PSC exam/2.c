#include<stdio.h>
int get_n()
{
	int x;
	printf("enter the number :");
	scanf("%d",&x);
}
int input_n(int n,int a[])
{
    int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    return a[n];
}
int main()
{
	int n;
	n=get_n();
	int a[n];
	input_n(n,a);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
