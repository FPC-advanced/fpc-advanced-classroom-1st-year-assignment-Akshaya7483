#include<stdio.h>

void input(int *a, int *b, int *c)
{
    printf("enter the three values : ");
    scanf("%d %d %d",a,b,c);
}
void compare(int a, int b, int c, int *largest)
{
    *largest=a;
    if(b>*largest)
    {
        *largest=b;
    }
    if(c>*largest)
    {
        *largest=c;
    }
}
void output(int x, int y, int z, int largest)
{
    printf("largest of %d ,%d and %d is %d",x,y,z,largest);
}
int main()
{
    int a,b,c,lar;
    input(&a,&b,&c);
    compare(a,b,c,&lar);
    output(a,b,c,lar);
    return 0;
}