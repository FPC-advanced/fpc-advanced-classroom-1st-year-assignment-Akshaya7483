#include <stdio.h>
struct complex
{
    int real;
    float imag;
};
struct complex inputComplex()
{
    struct complex num;
    printf("Enter the real part: ");
    scanf("%d", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}
struct complex addComplex(struct complex a, struct complex b)
{
    struct complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}
void outputComplex(struct complex num)
{
    printf("Complex number: %ld + %lfi\n", num.real, num.imag);
}
int main()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    struct complex sum;
    sum.real= 0;
    sum.imag = 0;
    for (int i = 0; i < n; i++)
    {
        struct complex num = inputComplex();
        sum = addComplex(sum, num);
    }
    printf("Sum of %d complex numbers: %d + %fi\n", n, sum.real, sum.imag);
    return 0;
}
