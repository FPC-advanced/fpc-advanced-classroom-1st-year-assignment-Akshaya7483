// 3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

// > `weight = pi * stomach_radius^3 * sqrt(height * length)`
#include<stdio.h>
#include<math.h>
typedef struct Camel {
	float radius, height, length,weight;
}camel;
camel input()
{
    camel x;
    printf("enter the radius :");
    scanf("%f",&x.radius);
    printf("enter the height :");
    scanf("%f",&x.height);
    printf("enter the length :");
    scanf("%f",&x.length);
    return x;
}
void find_weight(camel *c)
{
    c->weight=3.1415 *((c->radius*c->radius*c->radius)*sqrt(c->height *c->length));
}
void output(camel c)
{
        printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",c.radius,c.height,c.length,c.weight);
}
int main()
{
    camel CAMEL;
    CAMEL=input();
    find_weight(&CAMEL);
    output(CAMEL);
}