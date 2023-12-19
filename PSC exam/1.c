#include<stdio.h>
int input()
{
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	return x;
}
int find_fact(int n)
{
    int j=2;
	for(int i=1;i!=n/2;i++)
	{
		j=j*i;
	}
    if(j==n)
        {
            return 1;
        }
    return 0;
}
void output(int n,int fact)
{
    if(fact>0)
    {
        printf("it is a factorial number ");
    }
    else
    {
        printf("it is not a factorial number ");
    }
}
int main()
{
	int n,fact;
	n=input();
	fact=find_fact(n);
	output(n,fact);
    return 0;
}
