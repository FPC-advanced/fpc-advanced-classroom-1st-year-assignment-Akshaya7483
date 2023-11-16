#include<stdio.h>
int input()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    return x;
}
int compare(int a, int b, int c)
{
    int lar;
    lar=a;
    if(b>lar)
    {
        lar=b;
    }
    if(c>lar)
    {
        lar=c;
    }
    return lar;
}
void output(int a, int b, int c, int lar)
{
    printf("the largest of % d,%d and %d is %d",a,b,c,lar);
}
int main()
{   int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}