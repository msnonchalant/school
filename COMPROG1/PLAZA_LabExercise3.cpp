// Write a code that:
// asks for an integer input between 1 to 7,
// checks the integer if it's within the range,
// if no, displays an error message
// if yes, displays the corresponding day of the week of the given integer,
// range of days can be Sun-Sat or Mon-Sun
// USES SWITCH STATEMENTS

#include <iostream>
using namespace std;

int main(){

    int input;

    cout << "Enter a number between 1-7: ";
    cin >> input;

    switch(input){
        case 1:
            cout << "You picked Sunday" << endl;
            break;
        case 2:
            cout << "You picked Monday" << endl;
            break;
        case 3:
            cout << "You picked Tuesday" << endl;
            break;
        case 4:
            cout << "You picked Wednesday" << endl;
            break;
        case 5:
            cout << "You picked Thursday" << endl;
            break;
        case 6:
            cout << "You picked Friday" << endl;
            break;
        case 7:
            cout << "You picked Saturday" << endl;
            break;
        default:
            cout << "Error, number not in range" << endl;
            break;
    }

    return 0;
}