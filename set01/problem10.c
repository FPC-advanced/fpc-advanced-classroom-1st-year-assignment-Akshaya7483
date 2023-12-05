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
    int count =0;
   for(int i=0;str1[i]!='\0' &&  str2[i]!='\0';i++)
   {
            if(str1[i]!=str2[i])
            {
                count++;
            } 
   }
   return count;
}
void output(int count)
{
    if(count<1)
    {
        printf("they are same\n");
    }
    else
    {
        printf("they are different\n");
    }
}
int main()
{
      char str1[100], str2[100];
      int count;
      input(str1,str2);
      count=compute(str1,str2);
      output(count);
      return 0;
}