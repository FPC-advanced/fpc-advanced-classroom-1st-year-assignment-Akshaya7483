#include<stdio.h>
int number_of_players()
{
    int x;
    printf("enter the number of players :");
    scanf("%d",&x);
    return x;
}
void name_players(int n,char *str1,char *str2)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the name of player %din team 1",i);
        scanf("%s",str1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter the name of player %d team 2",i);
        scanf("%s",str2);
    }
}
int main()
{
    int n;
    n=number_of_players();
    char str1[n],str2[n];
    name_players(n,&str1,&str2);
    
}