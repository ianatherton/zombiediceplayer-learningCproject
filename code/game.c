#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../dice/dice.h"

// Helper function to clear input buffer
static void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//greeting
void greeting() {
    int num_players;
    printf("Welcome to Zombie Dice!\n");
    printf("How many players?\n");
    scanf("%d", &num_players);
    clear_input_buffer();
}

//draw die - you don't always draw 3 dice
int draw_die() {
    int difficulty = rand() % 3;
    return difficulty; // 0=hard, 1=medium, 2=easy
}

//roll die
int roll_die(int difficulty) {
    int roll;
    switch (difficulty) {
        case 2: // easy
            roll = easyDie[rand() % DICE_SIDES];
            break;
        case 1: // medium
            roll = mediumDie[rand() % DICE_SIDES];
            break;
        case 0: // hard
            roll = hardDie[rand() % DICE_SIDES];
            break;
        default:
            roll = footsteps; // Default to footsteps if invalid difficulty
    }
    
    return roll;
}

//player turn
int player_turn(int playerNumber, int turnNumber, int playerProfile) {
    // Placeholder for player turn logic
    printf("Player %d's turn (turn %d)\n", playerNumber, turnNumber);
    return 0;
}

