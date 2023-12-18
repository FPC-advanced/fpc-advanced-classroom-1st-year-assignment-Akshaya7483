#include<stdio.h>
void input_string(char *a)
{
    printf("enter the string:");
    scanf("%s",a);
}
void str_reverse(char *str)
{  
    int i=0;
   char temp;
     while(str[i]!='\0')
     {
        i++;  // finding the index of last term
     }
     for(int j=0;i>j;j++,i--)
     {
        temp=str[j];
        str[j]=str[i-1];    //use i-1 ,like n-1 ;..
        str[i-1]=temp;
     }
}
void output(char *a)
{
    printf("the reverse is %s ",a);
}
int main()
{   
    char a[25];
    input_string(a);
    str_reverse(a);
    output(a);
    return 0;
}