#ifndef PLAYERS_H
#define PLAYERS_H
//--------------------------------------------------------------------------------------------------------------------------
#include "../dice/dice.h"
#include "../game.h"
//stuff

typedef enum 
{
    Arnold = 1, Barnes = 2, Cillian = 3, Darnell = 4, Ellie = 5, 
    Faria = 6, Garrus = 7, Hoyt = 8, Jazz = 9, Kaylee = 10,
} playerNames;

typedef struct
{
    char hand[turnNumber, playerNumber]; //with these 2 variables we can access the player's hand
    countShotguns();
} playerDecision;

//--------------------------------------------------------------------------------------------------------------------------
#endif /* PLAYERS_H  header guard */