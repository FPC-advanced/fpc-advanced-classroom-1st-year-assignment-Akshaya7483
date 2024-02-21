#include<stdio.h>
int input() 
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    return x;
}
int find_fact(int n) 
{
    int i = 1,j = 1;
    while (j<n/2) 
    {
        j*=i;
         i++;
    }
    if (j==n) 
    {
        return i;
    } 
    else 
    {
        return 0; 
    }
}
void output(int n, int fact) 
{
    if (fact>0) 
    {
        printf("%d is a factorial numberof %d\n", n);
    } 
    else 
    {
        printf("%d is not a factorial number \n",n);
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