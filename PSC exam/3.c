#include<stdio.h>
int number_of_players()
{
    int x;
    printf("enter the number of players :");
    scanf("%d",&x);
    return x;
}
int main()
{
    int n;
    n=number_of_players();
}