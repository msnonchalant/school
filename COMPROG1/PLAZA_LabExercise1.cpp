// Build a code that does the following:
// Initializes two (2) variables of the same numerical data type (int, float, double, only choose 1 from these 3) with stored values.
// Uses the same 2 variables through out the 5 arithmetic operations (add, subtract, multiply, divide, modulus).
// Display each operation's output

#include <iostream>
using namespace std;

int main(){
    int num1 = 6;
    int num2 = 7;

    cout << "Addition: " << endl;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

    cout << "Subtraction: " << endl;
    cout << num1 << " - " << num2 << " = " << num1-num2 << endl;

    cout << "Multiplication: " << endl;
    cout << num1 << " * " << num2 << " = " << num1*num2 << endl;

    cout << "Division: " << endl;
    cout << num1 << " / " << num2 << " = " << num1/num2 << endl;

    cout << "Modulo: " << endl;
    cout << num1 << " % " << num2 << " = " << num1%num2 << endl;

    return 0;
}