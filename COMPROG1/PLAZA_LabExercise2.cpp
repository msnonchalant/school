// Write a code that:
//  asks for an integer input,
//  checks the integer if it's odd or even,
//  if the integer is even, checks the integer if it's divisible by 10 or not,
//  displays 3 possible messages:
//  "integer is even and is divisible by 10"
//  "integer is even but not divisible by 10"
//  "integer is odd"
//  USES LOGICAL OPERATORS (&& and ||), IF-ELSE OR NESTING IF-ELSE STATEMENTS

#include <iostream>
using namespace std;

int main(){

    int input;

    cout << "Enter a number: ";
    cin >> input;

    if(input % 2 != 0){
        cout << "The integer " << input << " is odd" << endl;
    }else if(input % 2 == 0 && input % 10 == 0){
        cout << "The integer " << input << " is even and is divisible by zero" << endl;
    }else if(input % 2 == 0){
        cout << "The integer " << input << "is even but is not divisible by 10" << endl;
    }

    return 0;

}