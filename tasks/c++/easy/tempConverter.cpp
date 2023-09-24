// C++ - Easy

// TODO:  Create a Basic C++ Program to Convert Temperature from Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store temperature in Celsius and Fahrenheit
    double celsius, fahrenheit;

    // Prompt the user to enter temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}

