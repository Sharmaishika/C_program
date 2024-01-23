 //conversion of tempreature
          
#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}

int main()
{   // Convert Fahrenheit to Celsius

    float fahrenheit;
    cout<<"Enter temperature in Fahrenheit (in degrees): ";
    cin>>fahrenheit;
    cout<<"Temperature in Celsius (in degrees): "
        << fahrenheitToCelsius(fahrenheit) <<endl;

    // Convert Celsius to Fahrenheit
    
    float celsius, convertedFahrenheit;
    cout << "Enter temperature in Celsius (in degrees): ";
    cin >> celsius;
    convertedFahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius: "<<celsius<<endl;
    cout << "The temperature in Fahrenheit: "<<convertedFahrenheit<<endl;

    return 0;
}

