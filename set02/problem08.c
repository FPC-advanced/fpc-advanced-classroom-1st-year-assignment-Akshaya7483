#include <stdio.h>

struct _triangle
{
	float base, altitude, area;
};
typedef struct _triangle Triangle;

int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
	int n;
	n=input_n();
	Triangle t[n];
	input_triangle();
	input_n_triangles(n,t);
	find_area(&t);
	find_n_areas(n,t);
	Triangle smallest;
	smallest=find_smallest_triangle(n,t);
	output(n,t,smallest);
	return 0;
}
int input_n()
{
	int n;
	printf("Enter the no. of Triangles:\n");
	scanf("%d",&n);
	return n;
}
Triangle input_triangle()
{
	Triangle t;
	printf("Enter the base and altitude of the Triangle:\n");
	scanf("%f %f",&t.base,&t.altitude);
	return t;
}
void input_n_triangles(int n, Triangle t[n])
{
	int i;
	for(i=0;i<n;i++) 
	{
		printf("Triangle %d:\n",i+1);
		t[i]=input_triangle();
	}
}
void find_area(Triangle *t)
{
	t->area = 0.5 * t->base * t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
	int i;
	for(i=0; i<n;i++)
	{
		find_area(&t[i]);
	}
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
	Triangle smallest=t[0];
	int i;

	for(i=1;i<n;i++)
	{
		if (t[i].area < smallest.area)
		{
			smallest=t[i];
		}
	}
	return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
	printf("Triangle:\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("Triangle %d: Base=%.2f\n Altitude=%.2f\n Area=%.2f\n",i+1,t[i].base,t[i].altitude,t[i].area);
	}

		printf("Triangle with the smallest area is\n Base =%.2f \n Altitude=%.2f \n Area=%.2f",smallest.base,smallest.altitude,smallest.area);

}