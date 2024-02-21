// A cakeshop has n no of  products ,
// Each product has unique price ,taste , crisp , sweet,volume .
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
    float volume,price;
    char taste[20],crisp[20],sweet[20];
}products;

cakeshop input(cakeshop *shop_name)
{
    printf("enter the name of the cake shop : ");
    scanf("%s",&shop_name->name);
}
products input_product_attributes()
{
    products p;
    printf("enter the name of the product name : ");
    scanf("%f",&p.prduct_name); 

    printf("enter the name of the product price : ");
    scanf("%f",&p.price);

     printf("enter the name of the product price : ");
    scanf("%f",&p.volume);

    return p;
}
products input_product( products *prdct[], int n)
{
    for(int i=0;i<n;i++)
    {
        prdct[i]=input_product_attributes(i);
    }
}
int main()
{
    cakeshop shop_name;
    int n=2;
    products prdct[n];
    input(&shop_name);
    input_product(&prdct,n);
    return 0;
}
