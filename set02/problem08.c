// 08. Write a program to find the triangle with smallest area in n given triangles.
typedef struct Triangle {
	float base, height, area;
} triangle;
int input_n()
{
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    return x;
}
triangle input_triangle()
{
    triangle x;
    printf("enter the base & height :");
    scanf("%f  %f",&x.base,&x.height);
    return x;
}
void input_n_triangles(int n, triangle t[])
{
    for(int i=0;i<n;i++)
    {
        t[i]=input_triangle(i);
    }
    return t;
}
void find_area(triangle *t)
{
    t->area = 0.5 * t->base * t->height;
}
void find_n_areas(int n, triangle t[])
{
    for(int i=0;i<n;i++)
    {   
        find_area(&t[i]);
    }
}
int find_smallest_triangle(int n, triangle t[])
{   float small ;
    int loc;
    small=t[0].area;
    loc=0;
    for(int i=1;i<n;i++)
    {
        if (small>t[i].area)
            {
              small= t[i].area;
              loc=i;

            }
            return loc;
    }
}
void output(int n, triangle t[n], float loc)
{
    printf("the smallest triangle is base %f height %f and with the area  %f",t->base,t->height,t->area);
}
int main()
{
    int n, location;
    n=input_n();
    triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    location=find_smallest_triangle(n,t);
    output(n,t,location);
}