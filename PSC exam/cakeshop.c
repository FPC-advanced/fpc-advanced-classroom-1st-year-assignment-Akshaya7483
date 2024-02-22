// A cakeshop has n no of  products ,
// Each product has unique price ,taste ,volume .
// There are N no of customers day 
// Buys atleast 2 products 

// a.calculate the total profit per day ( take no of customers as 10)

// B.know the customer satisfaction whether the  factors of the product  worth the money

#include<stdio.h>

typedef struct Cakeshop
{
   char name[50];
}cakeshop;

typedef struct Cake_products
{
    char prduct_name[20]; 
    float volume,sp,cp,gain;
    char taste[20],crisp[20],sweet[20];
}products;

void input(cakeshop *shop_name)
{
    printf("enter the name of the cake shop : ");
    scanf("%s",&shop_name->name);
}
products input_product_attributes()
{
    products p;
    printf("enter the name of the product name :\n ");
    scanf("%s",&p.prduct_name); 

    printf("enter the value of the product price :\n ");
    scanf("%f",&p.sp);

     printf("enter the value of the product volume :\n ");
    scanf("%f",&p.volume);

     printf("enter the product taste :\n ");
    scanf("%s",&p.taste);

    return p;
}
products input_product( products prdct[], int n)
{
    for(int i=0;i<n;i++)
    {
        prdct[i]=input_product_attributes();
    }
}
products compute(int m,products *p ,int n)
{
    printf("enter the cost price of that product:\n");
    scanf("%f",&p->cp);
    p->gain=p->sp-p->cp;
}
products profit (int customer,products prdct[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        compute(customer,&prdct[i],n);    
        prdct[i].gain+=prdct[i].gain;
    }
}
int main()
{
    cakeshop shop_name;
    int n;
    printf("enter the number of prodcuts in shop:\n");
    scanf("%d",&n);
    products prdct[n];
    input(&shop_name);
    input_product(&prdct,n);
    int customer;
    customer=10;
    profit(customer,n,&prdct);
    cakeshop
    return 0;
}
