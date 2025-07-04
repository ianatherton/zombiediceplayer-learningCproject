#ifndef DICE_H
#define DICE_H
//--------------------------------------------------------------------------------------------------------------------------
#include "../players/players.h"
#include "../game.h"

//CONSTANTS: acts as text replace @compile time - helps readability
//define is good here instead of const because we use it in function prototypes
#define WINSCORE_MAXDICE 13 
#define DICE_TO_ROLL 3
#define MAX_SHOTGUNS 3

//FUNCTION PROTOTYPES-Declare publicly needed functions
int count_dice(); //useful for checking if we need to refill the cup
bool refill_cup();
char rolledDice[3];//what is an advantage of declaring this in a struct answer: we can access it from other files

//STRUCTS: acts as a class
typedef struct {
    char cup[13] = "e,e,e,e,e,e,m,m,m,m,h,h,h"; //is this array public? answer: yes
    int easyCount;
    int mediumCount;
    int hardCount;
} cup_t;

//--------------------------------------------------------------------------------------------------------------------------
#endif /* DICE_H  header guard */
