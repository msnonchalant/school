/*
Objectives:
- Practice using arrays/vectors to store data.
- Use loops for input/output operations and calculations.
- Apply conditional statements for validation and comparison (optional).

Program Flow:
- Prompt the user to enter temperatures for a week (7 days).
- Store each day’s temperature in an array/vector.

- Calculate and display:
    The highest temperature.
    The lowest temperature.
    The average temperature.
- Let user continue entering another set of temperatures or quit the program.

USE:
- Arrays/Vectors
- For loops
- Functions
*/

#include <iostream>
using namespace std;

float maxTemp(float arr[],int n){
    float max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

float minTemp(float arr[], int n){
    float min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

float averageTemp(float arr[], int n){
    float sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}


int main(){
    
    const int DAYS = 7;
    float weekTemp[DAYS];
    int loop;

    do{
        for(int i = 0; i < DAYS; i++){
            do{
                cout << "Enter temperature for day " << (i+1) << " (-50°C to 50°C): ";
                cin >> weekTemp[i];
                
                if(weekTemp[i] < -50 || weekTemp[i] > 50){
                    cout << "Invalid input. Please enter a temperature between -50°C to 50°C" << endl;
                }
            }while(weekTemp[i] < -50 || weekTemp[i] > 50);
            
        }

        cout << "Highest temperature: " << maxTemp(weekTemp,DAYS) << "°C" << endl;
        cout << "Lowest temperature: " << minTemp(weekTemp,DAYS) << "°C" << endl;
        cout << "Average temperature: " << averageTemp(weekTemp,DAYS) << "°C" << endl;

        cout << "Do you want to continue using the program? 1 if yes, any number for no: ";
        cin >> loop;

    }while(loop == 1);

    cout << "Thank you for using the program!";


    return 0;
}