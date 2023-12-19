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
    int j=n; 
	for(int i=2;i<j;i++) //120 while(j%2==0)
	{                                         
		j=j/i; 
	}
	return j;
}
void output(int n,int fact)
{
    if(fact>0)
    {
	    printf("the factorial of %d is %d\n",n,fact);
    }
    else
    {
        printf("it is not a factorial number");
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
