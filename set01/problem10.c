// . Write a C program to compare two strings, character by character.
#include<stdio.h>
int input(char *str1,char *str2)
{
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
}
int compute(char *str1,char *str2)
{
    int i = 0;
    if(str1[i]==str2[i])
    {
        printf("they are same ");
    }
if(str1[i]!=str2[i])
    {
        printf("they are differ ");
    }
}

int main()
{
      char str1[100], str2[100];
      input(str1,str2);
      compute(str1,str2);
      return 0;
}