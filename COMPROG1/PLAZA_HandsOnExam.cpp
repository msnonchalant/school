// Functional Calculator
// Create a calculator that:
// asks user for two inputs
// asks user to choose an operation (use SWITCH statement)
// ADDITIONAL: for division operation, add an if-statement to check if the second variable is zero, if yes, output "Error"

#include <iostream>
using namespace std;

int main(){

    float num1;
    float num2;
    int operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "OPERATIONS" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Choose an operation: ";
    cin >> operation;

    switch(operation){
        case 1:
            cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 >= 0){
                cout << "Error, number can not be divided by zero" << endl;
                break;
            }else{
                cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                break;
            }
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    return 0;
}