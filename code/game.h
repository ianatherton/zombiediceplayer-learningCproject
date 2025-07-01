#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>

// Function declarations
void greeting(void);
int draw_die(void);
int roll_die(int difficulty);
int player_turn(int playerNumber, int turnNumber, int playerProfile);

// Game constants
#define MIN_PLAYERS 2
#define MAX_PLAYERS 10

// Game state structure
typedef struct {
    int gameNumber;
    int numberOfPlayers;
    int turnNumber;
    int currentPlayer;
    int scores[MAX_PLAYERS];
} GameState_t;

#endif /* GAME_H */