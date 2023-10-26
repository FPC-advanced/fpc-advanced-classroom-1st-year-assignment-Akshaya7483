// 9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
#include<stdio.h>
#include<math.h>
float input()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    return x;
}
float mysqrt(float n)
{
     float x;
      x=n/2;
    
    while(x*x!=n)
    {
        if(x*x>n)
        {
            x=x/2;
        }
        else
        {
            x=x+x/2;
        }
  }
        return x;
    }

void output(float x, float root)
{
    printf("sqrt of %f is %f",x,root);
}
int main(void)
{
    float n,root;
    n=input();
    root=mysqrt(n);
    output(n,root);
}