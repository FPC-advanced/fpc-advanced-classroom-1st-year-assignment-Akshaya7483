#include <stdio.h>

int get_n() 
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    return x;
}
void input_n(int n, int a[]) 
{
    int i;
    printf("Enter numbers:\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
}
int factorial(int num) 
{
    int result = 1;
    for (int i=1;i<= num;i++) 
    {
        result *= i;
    }
    return result;
}
void find_n_fact(int n, int a[], int b[]) 
{
    for(int i=0;i<n;i++) 
    {
        b[i]=factorial(a[i]);
    }
}

void output(int n, int b[]) 
{
    printf("Factorials:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\n",b[i]);
    }
}

int main() 
{
    int n;
    n = get_n();
    int a[n], b[n];
    input_n(n, a);
    find_n_fact(n, a, b);
    output(n, b);
    return 0;
}
