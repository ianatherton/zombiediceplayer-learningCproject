#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <raylib.h>

//declare public variables/constants
int difficulty = 1;
int players = 2;

const int MIN_PLAYERS = 2;
const int MAX_PLAYERS = 10;
const int DICE_SIDES = 6;
const int DICE_TO_ROLL = 3;
const int MAX_GUNSHOTS = 3;

/*public struct tracks current game state, public
so that different ai profiles can check the state
*/
typedef struct {
    bool in_progress = false;
    int numberOfPlayers = 2;
    int turnNumber = 0
    int playersT

}:Gamestate;

typedef enum {
    // 0=shotgun 1=brain 2=footsteps 
    SHOTGUN,
    BRAIN,
    FOOTSTEPS,
}


Dice roll(int difficulty) {
    roll result;

}

players[] = {1,2,3,4,5,6,7,8,9,10}