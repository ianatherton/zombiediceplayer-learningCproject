#ifndef DICE_H
#define DICE_H

//CONSTANTS: acts as text replace @compile time
#define WINSCORE_MAXDICE 13 
#define DICE_TO_ROLL 3
#define MAX_SHOTGUNs 3


typedef struct {
    char cup[13] = "e,e,e,e,e,e,m,m,m,m,h,h,h"; //is this array public? answer: yes
    int easyCount;
    int mediumCount;
    int hardCount;
} cup_t;


#endif /* DICE_H  header guard */
