#include<stdio.h>
int input_side()
{
    int x;
    scanf("%f",&x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    if(a==b || b==c || c==a)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==0)
    {
        printf("not a scalene");
    }
    else{
        printf("is scalene");
    }
}
int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
} 