// Write a code that:
//  asks for a positive integer input,
//  OPTIONAL: checks that if integer is negative, program terminates
//  after checking, displays at least 10 multiples of that integer
//  USES ANY REPETITIVE STRUCTURE TYPE (FOR LOOP, WHILE LOOP, DO-WHILE LOOP)

#include <iostream>
using namespace std;

int main(){

    int input;
    
    cout << "Enter a positive integer: ";
    cin >> input;

    if(input < 0){
        cout << "Input not positive" << endl;
        exit(0);
    }

    cout << "INPUT: " << input << endl;
    cout << "OUTPUT:" << endl;

    for(int i = 1; i <= 10; i++){
        cout << input*i << endl;
    }

    return 0;
}