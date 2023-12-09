#include<stdio.h>
typedef struct Complex
{ 
    float imag,real;
}complex;
void get_n(int *n)
{
    printf("enter the size : ");
    scanf("%d",n);
}
complex input_complex()
{
    complex x;
    printf("enter the real part :");
    scanf("%f",&x.real);
    printf("enter the imaginary part :");
    scanf("%f",&x.imag);
    return x;
}
void input_n_complex(int n, complex c[])
{
    for(int i=0;i<n;i++)
    {
       c[i]=input_complex();
    }
}
complex add(complex a,complex b)
{
    a.real=a.real+b.real;
    a.imag=a.imag+b.imag;
    return a;
}
complex add_n_complex(int n, complex c[n])  //c[n] = c[] = *c
{  complex sum=c[0];
    for(int i=1;i<n;i++)
    {
        sum=add(sum,c[i]);
    }
    return sum;
}
void output(int n, complex c[n], complex sum)
{
    for(int i=0;i<n;i++)
    {
        printf("%f+%fi ",c[i].real,c[i].imag);
         if(i!=n-1)
         {
             printf(" + ");
         }
         else{
             printf(" = %f + %fi",sum.real,sum.imag);
         }
    }
}
int main()
{
    int n;
    get_n(&n);
    complex c[n];
    input_n_complex(n,c);
    complex sum;
    sum=add_n_complex(n,c);
    output(n,c,sum);
}