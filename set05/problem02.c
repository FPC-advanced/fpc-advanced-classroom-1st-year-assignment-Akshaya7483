// 2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length)
{
    printf("enter the stomach radius of camel:");
    scanf("%f",radius);
    printf("enter the height of camel:");
    scanf("%f",height);
    printf("enter the length of camel:");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length)
{
    float weight;
    weight =3.1415 *((radius*radius*radius)*sqrt(height * length));
    return weight;
}
void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %f, height: %f, length: %f is %f",radius,height,length,weight);
}
int main()
{
    float r,h,l,weight;
    input_camel_details(&r,&h,&l);
    weight=find_weight(r,h,l);
    output(r,h,l,weight);
}