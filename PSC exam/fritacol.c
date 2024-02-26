#include<stdio.h>

typedef struct Fritacole
{
    char player_name[20],intrest[10];
    float height,integrity,discipline,attribute_point;
   int point,fouls,ability,converted_intrest;

}fritacole;

typedef struct Team
{
   fritacole z;
   char team_name[20];
}team;

typedef struct Game
{
   team x;
   team y;
   char game_name[20];
}game;

int get_number_of_players()
{
    int n;
    printf("enter the number players in each team :\n");
    scanf("%d",&n);
    return n;
}

void input(game *name,int m,int n)
{
    printf("enter the game name :\n");
    scanf("%s",name->game_name);
}

team input_team(team *a,int m ,int n)
{
  int i;
  for(i=0;i<m;i++)
    {
      if(i==0)
      {
            input_team_name(a,i,m,n);
      }
      else
      {
            input_team_name(a,i,m,n);
      }
    }
}
void input_team_name(game a[],int i,int m,int n)
{
    for(i=0;i<m;i++)
      {
        if(i==0)
        {
          printf("enter the team name :");
          scanf("%s",a[i].x.team_name);
          input_player_details(a,n,i);
        }
        else
        {
           printf("enter the team name :");
          scanf("%s",a[i].y.team_name);
          input_player_details(a,n,i);
        }
      }
}
void input_player_details(game a[] ,int n,int q)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(q==0)
        {
            printf("enter the fritacole name : \n ");
            scanf("%s",a[i].x.z.player_name);
            printf("enter the %s height in ft:\n",a[i].x.z.player_name);
            scanf("%f",&a[i].x.z.height);
            printf("enter the %s integrity \nrate the level of integrity out of 10:\n",a[i].x.z.player_name);
            scanf("%f",&a[i].x.z.integrity);
            printf("enter the %s interest\nYES='Y'\nNO ='N':\n",a[i].x.z.player_name);
            scanf("%s",a[i].x.z.intrest);
            printf("enter the %s ability\nCan do ='2'\nCan give a try='1'\nNone of this='0':\n",a[i].x.z.player_name);
            scanf("%d",&a[i].x.z.ability);
            printf("enter the %s discipline\nrate the level of discipline out of 10:\n",a[i].x.z.player_name);
            scanf("%f",&a[i].x.z.discipline);
            printf("enter the points played by %s\n:",a[i].x.z.player_name);
            scanf("%d",&a[i].x.z.point);
            printf("enter the fouls played by %s\n:",a[i].x.z.player_name);
            scanf("%d",&a[i].x.z.fouls);
        }
        else
        {
            printf("enter the fritacole name : \n ");
            scanf("%s",a[i].y.z.player_name);
            printf("enter the %s height in ft:\n",a[i].y.z.player_name);
            scanf("%f",&a[i].y.z.height);
            printf("enter the %s integrity \nrate the level of integrity out of 10:\n",a[i].y.z.player_name);
            scanf("%f",&a[i].y.z.integrity);
            printf("enter the %s interest\nYES='Y'\nNO ='N':\n",a[i].y.z.player_name);
            scanf("%s",a[i].y.z.intrest);
            printf("enter the %s ability\nCan do ='2'\nCan give a try='1'\nNone of this='0':\n",a[i].y.z.player_name);
            scanf("%d",&a[i].y.z.ability);
            printf("enter the %s discipline\nrate the level of discipline out of 10:\n",a[i].y.z.player_name);
            scanf("%f",&a[i].y.z.discipline);
            printf("enter the points played by %s\n:",a[i].y.z.player_name);
            scanf("%d",&a[i].y.z.point);
            printf("enter the fouls played by %s\n:",a[i].y.z.player_name);
            scanf("%d",&a[i].y.z.fouls);
        }
    }
}
int main()
{
    int n,m=2;
    game name;
    n=get_number_of_players();
    input(&name,m,n);
    team a[m];
    input_team(a,m,n);
   return 0;
}