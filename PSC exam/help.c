// 7. Write a program to find the length of a line
#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    double distance;
} Line;

Point input_point()
{   Point p;
    scanf("%f",&p.x);
    scanf("%f",&p.y);
    return p;

}
void input_line(Line *l)
{   
     l->p1=input_point(); 
     l->p2=input_point();
}
void find_length(Line *l)
{   float a=((l->p1.x)-(l->p2.x))*((l->p1.x)-(l->p2.x));
    float b=((l->p1.y)-(l->p2.y))*((l->p1.y)-(l->p2.y));
    l->distance=sqrt((a+b));
}
void output(Line l)
{
    printf("The distance between the points (%f,%f) and (%f,%f) is %lf",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{   Line l;
    input_line(&l);
    find_length(&l);
    output(l);
    return 0;
}