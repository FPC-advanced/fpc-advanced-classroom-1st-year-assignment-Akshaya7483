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
   team a;
   team b;
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
    name->a=input_team_name(name,m,n);
    name->b=input_team_name(name,m,n);
}
team input_team_name(game *name,int m,int n)
{
    team q;
        printf("enter the team name :");
        scanf("%s",q.team_name);
        input_player_details(name,n);
    return q;
}
void input_player_details(game *name ,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the fritacole name : \n ");
        scanf("%s",name->a.y.player_name);
        printf("enter the fritacole height in ft:\n");
        scanf("%f",&name->a.y.height);
        printf("enter the fritacole integrity \nrate the level of integrity out of 10:\n");
        scanf("%f",&name->a.y.integrity);
        printf("enter the fritacole interest\nYES='Y'\nNO ='N':\n");
        scanf("%s",name->a.y.intrest);
        printf("enter the fritacole ability\nCan do ='2'\nCan give a try='1'\nNone of this='0':\n");
        scanf("%d",&name->a.y.ability);
        printf("enter the fritacole discipline\nrate the level of discipline out of 10:\n");
        scanf("%f",&name->a.y.discipline);
        printf("enter the points played by %s\n:",name->a.y.player_name);
        scanf("%d",&name->a.y.point);
        printf("enter the fouls played by %s\n:",name->a.y.player_name);
        scanf("%d",&name->a.y.fouls);
    }
}


// int convert_string(team a[],int i) 
// {
//     if (a[i].y.intrest[0]=='y' || a[i].y.intrest[0]=='Y')
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// } 
// int verify_height(team a[],int i)
// {
    
//     if(a[i].y.height>=6)
//     {
//         return 1;
//     }
//     return 0;
// }
// fritacole attribute(team a[],int n)
// {
//     fritacole sum;
//     sum.integrity=0;
//     sum.discipline=0;
//     sum.height=0;
//     sum.ability=0;
//     sum.converted_intrest=0;
//     sum.attribute_point=0;
//     int i,x,z;
//     for(i=0;i<n;i++)
//     {
//         sum.integrity+=a[i].y.integrity;
//         sum.discipline+=a[i].y.discipline;
//         x=verify_height(a,i);
//         sum.height+=x;
//         sum.ability+=a[i].y.ability;
//         z=convert_string(a,i);
//         sum.converted_intrest+=z;

//     }
//     return sum;
// }
// fritacole points_scored(team a[],int n)
// {
//     int i;
//     fritacole sum;
//     sum.fouls=0;
//     sum.point=0;
//     for(i=0;i<n;i++)
//     {
//         sum.point+=a[i].y.point;
//         sum.fouls+=a[i].y.fouls;
//     }
//     return sum;
// }
// fritacole Score(game name,int m,int n,game score[][2])
// {
//     int i,j=0;
//     for(i=0;i<m;i++)
//     {
//         score[i][j].y=points_scored(a,n);
//         score[i][j+1].y=attribute(a,n);
//     }
// }
// fritacole compare(game score[][2])
// {
//      int i,j=0;
//     for(i=0;i<2;i++)
//     {
//         if(score[i][j].y>score[i+][j].y)
//         {
//             return
//         }
//     }
// }
int main()
{
    int n,m=2;
    game name;
    n=get_number_of_players();
    input(&name,m,n);
    // game score[2][2];
    // Score(name,m,n,score);
    // compare(&score);
   return 0;
}
