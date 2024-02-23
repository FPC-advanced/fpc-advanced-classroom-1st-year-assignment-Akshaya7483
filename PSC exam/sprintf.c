#include<stdio.h>
#include<math.h>
int main()
{
    char a[80];
    double PI=22*1.0/7;
    sprintf(a,"PI value=%.50lf\n ",PI);
    printf("PI=%s",a);
    return 0;
}