// 2. Write a program to find whether the given 3 points form a triangle
#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("the sides are :");
    scanf("%f",x1);
    printf("the sides are :");
    scanf("%f",y1);

    printf("the sides are :");
    scanf("%f",x2);
    printf("the sides are :");
    scanf("%f",y2);

    printf("the sides are :");
    scanf("%f",x3);
    printf("the sides are :");
    scanf("%f",y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float area;
    area = 0.5*(x1 *(y2 - y3)+ x2 *(y3 - y1)+x3 *(y1-y2));
    return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result!=0)
    {
        printf("it is a triangle\n");
    }
    else{
        printf("it is not a triangle\n");
    }
}
int main()
{
    float x1,x2,x3,y1,y2,y3,area;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    area=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,area);
    return 0;
}