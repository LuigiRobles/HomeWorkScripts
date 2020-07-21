// Intro to C++ Luigi Robles
// 07-19-2020 Summer Term
// Ch.10 Figure 10-32 Converts Fahrenheit to Celsius

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
void calcCelsius(double tempF, double &tempC);

int main()
{
    //declare and initialize variables
    double fahrenheit = 0.0;
    double celsius = 0.0;

    //input part of IPO
    cout << "Enter Fahrenheit temperature: ";
    cin >> fahrenheit;
    calcCelsius(fahrenheit, celsius); //function call

    //output part of IPO
    cout << fixed << setprecision(0);
    cout << "Celsius temperature: " << celsius << endl;
    return 0;
}   //end of main function

//*****function definitions*****
void calcCelsius(double tempF, double &tempC)
{
    tempC = 5.0 / 9.0 * (tempF -32.0);
}   //end of calcCelsius function
