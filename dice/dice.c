//---D--I--C--E-----------------------------------------------------------------------------------------
char easyDie[6] = "b,b,b,f,f,s";//represented here for less repetition
char mediumDie[6] = "b,b,s,s,f,f";
char hardDie[6] = "s,s,s,b,f,f";

int count_dice() //Count the number of dice in the cup
{
    int count = 0;
    for(int i = cup[i]; i++) //this line tells to loop through the array's size answer: yes, will it stop at the end of the array? answer: yes
        if(cup[i] == 'e' || cup[i] == 'm' || cup[i] == 'h') //this counts any easy medium or hard die in the cup, empty slots in the cup should be represented by x answer: yes
        count++;
        return count;
}

bool refill_cup() //Refill the cup
{
    char cup[13] = "e,e,e,e,e,e,m,m,m,m,h,h,h"; //this will reset the cup
    return true; //is returning true a good idea? answer: yes because we can setup an assert test? answer: yes
} //if i declare this in the header, other files can use it answer: yes

//draw die will add a die to a player's hand
char* draw_die() //should i return the drawn dice as char array for roll dice answer: explain: function returns a pointer to a char array  
{
    //update cup here probably
    char difficulty = rand() % 3;
    return char diceToRoll[3]; //is this array declared answer: no, so i add it to the header so its public and usable? answer: yes
}

//roll die
char* roll_dice() 
{
    int roll;
    for(int i = diceToRoll[i]; i < DICE_TO_ROLL; i++)
    {
        roll = rand() % 6;
    }
    
    return char rolledDice[0,1,2]; //returns the rolled dice, i should declare this in the header? answer: yes
}

//cup_t.cup = "e,e,e,e,e,e,m,m,m,m,h,h,h"; //i will use cup_t.cup to update the cup
//update