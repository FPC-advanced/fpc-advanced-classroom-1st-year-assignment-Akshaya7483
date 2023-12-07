// 1. Write a program to find sum of two fractions
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("enter numerator1 :");
    scanf("%d",num1);
    printf("enter denominator1 :");
    scanf("%d",den1);
    printf("enter numerator2 :");
    scanf("%d",num2);
    printf("enter denominator2 :");
    scanf("%d",den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num=num1*den2+num2*den1;
    *res_den=den1*den2;
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("The sum of two fraction is %d/%d & %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}
int main()
{
    int num1,num2,den1,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
}