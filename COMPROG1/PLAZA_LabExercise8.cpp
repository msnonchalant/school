//Create two functions to convert temperature values

// Celsius to Fahrenheit
// Fahrenheit to Celsius.

// Ask the user whether what conversion they want
// Based on the choice, call the corresponding function to perform the conversion and display the result.
// Implement a loop to allow the user to perform more
// conversions until they decide to quit.

#include <iostream>
using namespace std;

// This is the function that converts Fahrenheit to Celsius.
float FahToCel(float Fahrenheit){
    return (Fahrenheit - 32) * 0.55555555555;
}

// This is the function that converts Celsius to Fahrenheit.
float CelToFah(float Celsius){
    return (Celsius * 1.8) + 32;
}


int main(){

    int choice;
    int loop;

    do{
        cout << "Temperature Conversion" << endl;
        cout << "1. Celcius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celcius" << endl;
        
        
        do{
            cout << "Enter conversion choice: ";
            cin >> choice;
            
            if(choice != 1 && choice != 2){
                cout << "Invalid choice, please try again." << endl;
            }

        }while(choice != 1 && choice != 2);

        switch(choice){
            case 1:
                float celcius;
                cout << "Enter temperature in celcius: ";
                cin >> celcius;
                cout << celcius << " Celcius is " << CelToFah(celcius) << " in Fahrenheit" << endl;
                break;
            case 2:
                float fahrenheit;
                cout << "Enter temperature in fahrenheit: ";
                cin >> fahrenheit;
                cout << fahrenheit << " Fahrenheit is " << FahToCel(fahrenheit) << " in Celcius" << endl;
                break;
        }

        cout << "Do you wish to convert more? (1 for yes, any number for no): ";
        cin >> loop;

        if(loop != 1){
            cout << "Thank you for using the program!" << endl;
            break;
        }
    }while(loop == 1);

    
    return 0;
}