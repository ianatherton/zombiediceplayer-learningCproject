#include <stdio.h>
#include <stdlib.h>
//greeting
void greeting() {
    printf("Welcome to Zombie Dice!\n");
    printf("How many players?\n");
    GetChar();
}
//Die faces: 0 = shotgun 1 = brain 2 =footsteps   
int easyDie[] = {1,1,1,2,0,2};
int mediumDie[] = {1,1,0,0,2,2};
int hardDie[] = {0,0,0,2,2,1}; 
//draw die - you don't always draw 3 dice
int draw_die(){
    int difficulty = rand() % 3 + 1;
    return difficulty;
}
//roll die
int roll_die(int difficulty) {
    int roll;
    switch (difficulty) {
        case 1: difficulty = 1;//easy
        roll = easyDie[rand() % 6];
        break;
        case 2: difficulty = 2;//medium
        roll = mediumDie[rand() % 6];
        break;
        case 3: difficulty = 3;//hard
        roll = hardDie[rand() % 6];
        break;
    }
    
    return roll;
}

//player turn
int player_turn(playerNumber, turnNumber, playerProfile)
    
