// 01.  Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base, float *height)
{
    printf("enter the base :");
    scanf("%f",base);
    printf("enter the height :");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=(0.5*(base*height));
}
void output(float base, float height, float area)
{
    printf("area of triangle is %f \n",area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}