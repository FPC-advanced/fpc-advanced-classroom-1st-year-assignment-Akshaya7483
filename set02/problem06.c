#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main()
{
    char str[100];
    char rev_str[100];
    input_string(str);
    str_reverse(str,rev_str);
    output(str, rev_str);
    return 0;
}
void input_string(char *a)
{
    printf("Enter the string:\n");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int len;
    len=strlen(str);
    int i,j;

    for (i=len-1,j=0;i>=0;i--,j++)
    {
        rev_str[j]=str[i];
    }
    rev_str[j]='\0';
}
void output(char *a, char *reverse_a)
{
    printf("The String: %s\n",a);

    printf("The Reversed String: %s\n",reverse_a);
}