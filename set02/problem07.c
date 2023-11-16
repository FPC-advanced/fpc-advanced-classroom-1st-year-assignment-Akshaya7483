// 07. Write a program to find the area of a triangle.
#include<stdio.h>
typedef struct triangle 
{
	float base;
    float altitude;
    float area;
}Triangle;
Triangle input_triangle()
{   
    Triangle x;
    printf("enter the base :");
    scanf("%f",&x.base);
    printf("enter the height : ");
    scanf("%f",&x.altitude);
    return x;
}
void find_area(Triangle *t)
{
    t->area=0.5 * t->base * t->altitude;
}
void output(Triangle t)
{
    printf("area is %f", t.area);
}
int main()
{
    Triangle t ;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}