// 6. Write a program to find the index of a substring of a string
#include<stdio.h>
void input_string(char* a, char* b)
{   printf("enter string : ");
    scanf("%s",a);
    printf("enter sub string : ");
    scanf("%s",b);
}
int check_sub_str(int i,char *a,char *b)
{ 
    for(int j=0;a[i]!='\0' && b[j]!='\0';i++)
    {
        if(a[i]!=b[j])
        {
            return 1;
        }
        j++;
    }
    return 0;
}
int sub_str_index(char *string, char *substring)
{   int index=-1;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]==substring[0])
        {
            index=check_sub_str(i,string,substring);
            if(index==0)
            {
                return i;
            }
        }
    }
    return index;
}
void output(char *a,char *b, int index)
{
    if(index==-1)
    {
        printf("there is no substring  \n");
    }
    else 
    {
        printf("The index is %d",index);
    }
}
int main()
{   char a[100],b[100];
    input_string(a,b);
    int index=sub_str_index(a,b);
    output(a,b,index);
    return 0;
}
// helloworldhello
// world
// 

// ***Output***
// 
// The index of 'world' in 'helloworldhello' is 5