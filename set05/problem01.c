// 1.  Write a program to find the distance between two points.
#include<stdio.h>
typedef struct _point {
  float x;
  float y;
}point;
point input()
{
    point num;
    printf("enter the value of X: ");
    scanf("%f",&num.x);
    printf("enter the value of y: ");
    scanf("%f",&num.y);
    return num;
}
void dist(point a, point b, float *res)
{
    *res = sqrt(((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y)));
}
void output(point a, point b, float res)
{
    printf("The distance between (%f %f)(%f %f)= %f",a.x,a.y,b.x,b.y,res);
}

int main()
{
    point a,b;
    float result;
    a=input();
    b=input();
    dist(a,b,&result);
    output(a,b,result);
}