// Write a code that:
// prints a right triangle with the legs of at least 5 units/characters long
// output (cout) statement inside the loops should only display ONE unit/character (no prewritten multiple characters in a string e.g. "# # #" "# # # #")
// USES ANY REPETITIVE STRUCTURE TYPE (FOR LOOP, WHILE LOOP, DO-WHILE LOOP)
// USES NESTED LOOPS
// Example:
//  OUTPUT
//  #
//  ##
//  ###
//  ####
//  #####

#include <iostream>
using namespace std;

int main(){

    char triangle = '#';

    for(int i = 1; i <= 5; i++){ // outer loop prints the rows
        for(int j = 0; j < i; j++){ // inner loop prints the characters
            cout << triangle;
        }
            cout << endl;
    }

    return 0;
}

// j < i, so:
// i = 1, j = 0;
// inner loop runs first , 0 < 1 so it prints a character
// j increments, now 1 < 1 = false, inner loop ends
// outer loop runs, proceeds to the second row
// loop goes on until outer loop is done