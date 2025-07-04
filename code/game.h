#ifndef GAME_H
#define GAME_H
//--------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "../players/players.h"
#include "../dice/dice.h"

// Function declarations
int draw_die(void);
int roll_die(int difficulty);
int player_turn(int playerNumber, int turnNumber, int playerProfile);
char 

// Game constants
#define MIN_PLAYERS 2
#define MAX_PLAYERS 10

// Game state structure
typedef struct {
    int gameNum; //gameNumber.scorecard[numberOfPlayers].TurnNumber.ActingPlayer.PlayerProfile.
    int numOfPlayers;
    int turnNum;
    int actingPlayer;
    int scorecard[numOfPlayers];
    char playerHand[numOfPlayers]; //
    int playerProfile[numOfPlayers];
} GameState_t; //_t because it's a type

#endif /* GAME_H  header guard */