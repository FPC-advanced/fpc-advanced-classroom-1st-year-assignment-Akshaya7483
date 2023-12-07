// 7. Write a program to add two fractions

typedef struct {
    int num, den;
} Fraction;
Fraction input_fraction()
{
    Fraction x;
    printf("enter the numerator :");
    scanf("%f",&x.num);
    printf("enter the denominator :");
    scanf("%f",&x.den);
    return x;
}
int find_gcd(int a,int b)
{
    
}
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);
int main()
{
    Fraction a,b,sum;
    a=input_fraction();
    b=input_fraction();
    find_gcd(a.num,b.num);
}