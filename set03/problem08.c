// 8. Write a program to find the permeter of a polygon
#include<stdio.h>
struct polygon
{
    int number_of_side;
    float length_of_side;
};
int main()
{
    struct polygon P;
    printf("enter the number of side of polygon : ");
    scanf("%d",&P.number_of_side);
    printf("enter the length of side of polygon :");
    scanf("%f",&P.length_of_side);
    double perimeter=(P.number_of_side)*(P.length_of_side);
    printf("perimeter of a polygon is %lf",perimeter);
    return 0;
}