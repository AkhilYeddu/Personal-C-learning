#include <stdio.h>
#include <string.h>
struct Player
{
    char name[20];
    int score;


};

int main()
{
    //structers= collection of related memebers(variables)
    //they can be of different datatype
    //listed under memory of one block of code

    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Akhil");
    player1.score=10;
    strcpy(player2.name,"Yeddu");
    player2.score=20;

    printf("PLAYER1 NAME: %s\n",player1.name);
    printf("PLAYER1 SCORE: %d\n",player1.score);

    printf("PLAYER2 NAME: %s\n",player2.name);
    printf("PLAYER2 SCORE: %d",player2.score);





    return 0;
}