// 3. A Fritacole has attributes: name, height,  integrity, interest, ability, discipline.
// There were two teams of Fritacoles playing a freyball game.
// A freyball game consists of points and fouls
// Each point is scored by a fritacole.
// Each foul is committed by a fritacole.
// The team that scores more goals wins the game.
// If the goals are the same, the team that commits less fouls wins the game.
// a. Write a function to verify whether the better team won a game?
// Note that taller the person, the more chance that the fritacole may score a point.
// b, Write a function to convert a fritacole into a string.
// c. Write a function to convert a string into a fritacole.

// #include <stdio.h>
// #include <math.h>
// int main () {
//    char str[80];
//    sprintf(str, "Value of Pi = %f", M_PI);
//    puts(str);
//    return(0);
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main () {
//    int day, year;
//    char weekday[20], month[20], dtm[100];
//    strcpy( dtm, "Saturday March 25 1989" );
//    sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );
//    printf("%s %d, %d = %s\n", month, day, year, weekday );
//    return(0);
// }
// Hints:Use structures for Fritacole , team, game, points and fouls.
// Write functions to verify_win, compare_fritacoles, compare_teams and other functions.

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
     +   printf("enter the fritacole name : \n ");
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
    for(i=0;i<m;i++)
    {
        printf("enter the team name :");
        scanf("%s",name->x[i].team_name);
       input_player_details(a,n);
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
    int n,m=2;
    game name;
    n=get_number_of_players();
    input(&name,n);

   return 0;
}
