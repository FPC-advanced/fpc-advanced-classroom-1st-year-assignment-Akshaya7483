#include<stdio.h>

typedef struct Fritacole
{
    char player_name[20],intrest[10];
    float height,integrity,discipline,attribute_point;
   int point,fouls,ability,converted_intrest;
   
}fritacole;

typedef struct Team
{
   fritacole y;
   char team_name[20];
}team;

typedef struct Game
{
   team x[2];
   char game_name[20];
}game;

int get_number_of_players()
{
    int n;
    printf("enter the number players in each team :\n");
    scanf("%d",&n);
    return n;
}
void input_player_details(team a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the fritacole name : \n ");
        scanf("%s",a[i].y.player_name);
        printf("enter the fritacole height in ft:\n");
        scanf("%f",&a[i].y.height);
        printf("enter the fritacole integrity \nrate the level of integrity out of 10:\n");
        scanf("%f",&a[i].y.integrity);
        printf("enter the fritacole interest\nYES='Y'\nNO ='N':\n");
        scanf("%s",a[i].y.intrest);
        printf("enter the fritacole ability\nCan do ='2'\nCan give a try='1'\nNone of this='0':\n");
        scanf("%d",&a[i].y.ability);
        printf("enter the fritacole discipline\nrate the level of discipline out of 10:\n");
        scanf("%f",&a[i].y.discipline);
        printf("enter the points played by %s\n:",a[i].y.player_name);
        scanf("%d",&a[i].y.point);
        printf("enter the fouls played by %s\n:",a[i].y.player_name);
        scanf("%d",&a[i].y.fouls);
    }
}
void input_team_name(game *name,int n)
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter the team name :");
        scanf("%s",name->x[i].team_name);
       input_player_details(&name->x[i],n);
    }
}
void input(game *name,int n)
{
    printf("enter the game name :\n");
    scanf("%s",name->game_name);
    input_team_name(name,n);
}
int main()
{
    int n;
    game name;
    n=get_number_of_players();
    input(&name,n);

   return 0;
}
