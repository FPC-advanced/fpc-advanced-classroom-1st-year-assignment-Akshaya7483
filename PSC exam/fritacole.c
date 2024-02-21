// 3. A Fritacole has attributes: name, height,  integrity, interest, ability, discipline.
// There were two teams of Fritacoles playing a freyball game.
// A freyball game consists of points and fouls
// Each point is scored by a fritacole.
// Each foul is committed by a fritacole.
// The team that scores more goals wins the game.
// If the goals are the same, the team that commits less fouls wins the game.

// team a 
// team b
// no of goals 
// no of fouls
// goals of a== goals of b
// {
// 	fouls  matter
// }

// a. Write a function to verify whether the better team won a game?
// Note that taller the person, the more chance that the fritacole may score a point.

// b, Write a function to convert a fritacole into a string.

// c. Write a function to convert a string into a fritacole.
// Hints:Use structures for Fritacole , team, game, points and fouls.
// Write functions to verify_win, compare_fritacoles, compare_teams and other functions.


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

#include<stdio.h>
typedef struct Fritacole
{
   char game_name[20];
}game;
typedef struct Team
{
   char team_name[20];
}team;
typedef struct points
{
   int score,fouls;
}point;

int get_number_of_players()
{
    int n;
    printf("enter the number players in each team ");
    scanf("%d",&n);
    return n;
}

game input(game *a,game *b,int n)
{
    printf("enter the first team name :");
    scanf("%s",a->name);
    int i;
    for(i=1;i<n;i++)
    {
        a[i]=input_player_details(i);
    }
    printf("enter the second team name :");
    scanf("%s",b->name);
}

game input_player_details(int i)
{
    game x;
    printf("enter the %d fritacole name of  \n: ",i);
    scanf("%s",x.name);
    printf("enter the fritacole height\n");
    scanf("%f",x.height);
    printf("enter the fritacole intergrity\n");
    scanf("%s",x.integrity);
    printf("enter the fritacole interest\n");
    scanf("%s",x.interest);
    printf("enter the fritacole ability\n");
    scanf("%s",x.ability);
    printf("enter the fritacole discipline\n");
    scanf("%s",x.discipline);
}

int main()
{
    int n;
    game a,b;
    n=get_number_of_players();
    input(&a,&b,n);
    
   return 0;

}
