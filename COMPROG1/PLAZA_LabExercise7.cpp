/* Write a code that:

    simulates a grading system using if-else statements
    takes a student's numerical grade as input and outputs the corresponding letter grade based on the following scale:
    A: 90-100
    B: 80-89
    C: 70-79
    D: 60-69
    F: Below 60
    checks that the entered grade is between 0 and 100, otherwise, it will loop back and re-enter the number again


YOU MAY USE THE FOLLOWING:

    If-else statements
    Do-while loop
    Logical operator &&

Example:

INPUT
Enter student's grade: 87

OUTPUT
The grade is marked as B.

INPUT
Enter student's grade: 75

OUTPUT
The grade is marked as C. */

#include <iostream>
using namespace std;

int main(){
    
    int grade;

    do{
    cout << "Enter student's grade: ";
    cin >> grade;

    if(grade < 0 || grade > 100){
        cout << "Invalid input, please try again" << endl;
    }
    }while(grade < 0 || grade > 100);
    
    if(grade >= 90 && grade <= 100){
        cout << "The grade is marked as A" << endl;
    }else if(grade >= 80 && grade <= 89){
        cout << "The grade is marked as B" << endl;
    }else if(grade >= 70 && grade <= 79){
        cout << "The grade is marked as C" << endl;
    }else if(grade >= 60 && grade <= 69){
        cout << "The grade is marked as D" << endl;
    }else if(grade < 60){
        cout << "The grade is marked as F" << endl;
    }
    

    return 0;
}