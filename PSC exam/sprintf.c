#include<stdio.h>
#include<math.h>
int main()
// {
//     char a[80];
//     double PI=22*1.0/7;
//     sprintf(a,"PI value=%.50lf\n ",PI);
//     printf("PI=%s",a);
//     return 0;
// }
{
char A[4];
A[0]='Y';
    if (A[0]=='y' || A[0]=='Y')
    {
        int z=1;
        sprintf(A,"%d",z);  
    }
    else
    {
        int z=0;
        sprintf(A,"%d",z);  
    }
    printf("%s",A);
    return 0;
}