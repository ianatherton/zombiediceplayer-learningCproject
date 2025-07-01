#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../headers/game.h" // Include game header for greeting function
#include "../dice/dice.h" // Include dice header

int main() {
    // Initialize random seed
    srand(time(NULL));
    
    // Call greeting function
    greeting();
    
    return 0; // Program ends here
}
