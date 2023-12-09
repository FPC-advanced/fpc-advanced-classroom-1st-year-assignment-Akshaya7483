// 7. Write a program to add two fractions
#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
    printf("enter the numerator :");
    scanf("%d",num1);
    printf("enter the denominator :");
    scanf("%d",den1);
    printf("enter the numerator :");
    scanf("%d",num2);
    printf("enter the denominator :");
    scanf("%d",den2);
}
void add(int num1,int den1,int num2,int den2,int *res_num,int *res_den)
{
    *res_num=num1*den2+num2*den1;
    *res_den=den1*den2;
    int gcd=Gcd(*res_num,*res_den);
    *res_num=*res_num/gcd;
    *res_den=*res_den/gcd;
    
}
int Gcd(int res_num,int res_den)
{
    int gcd;
    int i=1;
    while(i<=res_num && i<=res_den)
    {
        if(res_num%i==0 && res_den%i==0)
        {
            gcd=i;
        }
        i++;
    }
    return gcd;
}
void output(int res_num,int res_den)
{
     printf("sum of fraction is %d/%d",res_num,res_den);
}
int main()
{
    int num1,den1,num2,den2,res_num,res_den,gcd;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(res_num,res_den);
    return 0;
}