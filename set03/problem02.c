// 2. Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter x1: ");
    scanf("%f", x1);
    printf("Enter y1: ");
    scanf("%f", y1);
    printf("Enter x2: ");
    scanf("%f", x2);
    printf("Enter y2: ");
    scanf("%f", y2);
    printf("Enter x2: ");
    scanf("%f", x3);
    printf("Enter y2: ");
    scanf("%f", y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    int a;
    a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return a;
}
void output(int area)
{
    if(area>1)
    {
        printf("forms an triangle \n");
    }
    else
    {
        printf("do not form traingle \n");
    }
}
int main()
{
    float x1,x2,y1,y2,x3,y3,area;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    area=is_triangle(x1,y1,x2,y2,x3,y3);
    output(area);
}