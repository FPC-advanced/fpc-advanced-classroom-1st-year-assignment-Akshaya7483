#include<stdio.h>
int number_of_players()
{
    int x;
    printf("enter the number of players :");
    scanf("%d",&x);
    return x;
}
int name_players(int n,char str1)
{
    for(int i=0;i<n;i++)
    {
        printf("enter the name of player %d",i);
        scanf("%s",str1)
    }
}
int main()
{
    int n;
    n=number_of_players();
    char str1[n],str2[n];
    name_players(n,str1);
}