// 08. Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input()
{
    int x;
    printf("enter the number of triangle :");
    scanf("%d",&x);
    return x;
}
Triangle input_triangle(int n, Triangle t)
{
    Triangle t[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the base :");
        scanf("%f",&t[i].base);
        printf("enter the height : ");
        scanf("%f",&t[i].altitude);
    }
    return t[i];
}
void input_n_triangles(int n, Triangle t[n])
{

}
int main()
{
    int n;
    Triangle t;
    n=input();
    input_triangle(n,t);
    input_n_triangles(n,t[n]);
}


void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
```