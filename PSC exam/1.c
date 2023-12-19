#include<stdio.h>

int input() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    return x;
}

int is_factorial(int n) {
    int i = 1, fact = 1;

    while (fact < n) {
        i++;
        fact *= i;
    }

    if (fact == n) {
        return 1;
    } 
    else 
    {
        return 0; 
    }
}

void output(int n, int fact) {
    if (fact > 0) 
    {
        printf("%d is a factorial number.\n", n);
    } else {
        printf("%d is not a factorial n
