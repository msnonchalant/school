/* Write a code that:
- generates a multiplication table for any number input entered by the user
- validates input that if it's positive, it shows the multiplication table, if it's negative or 0,
    then it asks the user to try again entering the number until it is positive (TIP: use do-while loop for this)
- limit of input is 15, validates that if input is more than 15, it asks the user to try again entering the number
    until it is less than or equal to 15 (TIP: use do-while loop for this)
-the number of input will influence the size of the table (if input is 3, size of table is 3x3)

USE ONE OR SOME OF THE FOLLOWING:
    LOGICAL OPERATORS (&&, ||, !)
    CONDITIONAL STRUCTURES (IF, IF-ELSE)
    REPETITIVE STRUCTURES (FOR LOOP, WHILE LOOP, DO-WHILE LOOP)
    NESTED LOOPS (essential)

Example:

INPUT
Number: 4

OUTPUT
1×1=1 1×2=2 1×3=3 1×4=4
2×1=2 2×2=4 2×3=6 2×4=8
3×1=3 3×2=6 3×3=9 3×4=12
4×1=4 4×2=8 4×3=12 4×4=16 */

#include <iostream>
using namespace std;

int main(){

    int input;

    do{ // loops until number within 1-5 range is inputted
        cout << "Enter a number (1-15): ";
        cin >> input;
        
        if(input <= 0 || input > 15){
            cout << "Invalid input, please try again" << endl;
        }
    }while(input <= 0 || input > 15);

    /* my attempt at solving it
    
    int multiplicand = 1;
    for(int i = 0; i < input; i++){ // outer loop runs exactly input times (ex: input = 4, then it will show a table from 1-4)
        for(int j = 1; j <= input; j++){ // j in the inner loop will be the multiplier that will multiply up until the inputted number
            cout << multiplicand << " x " << j << " = " << multiplicand*j << " ";
        }
    multiplicand++; // increments only after the inner loop is done with the output
    cout << endl;
    }
    
    */

    //apparently this one's the most optimized based on my previous lab exercise
    //code outputs the same, the difference is that it efficiently uses row and col without unnecessary variables being added
    for(int row = 1; row <= input; row++){
        for(int col = 1; col <=input; col++){
            cout << row << "x" << col << "=" << row*col<< " ";
        }
        cout << endl;
    }
    return 0;
}

    

