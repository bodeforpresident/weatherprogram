#include <iostream>
#include <cmath>
using namespace std;

// Variable declaration
double wind, temp, dew;

// Weather output function declaration
void weatherOutput() {
    cout << "____________________________________________________________________________________________________\n";
    cout << "|  Temperature (F)  |  Wind Speed (Mph)  |  Dew Point (F)  |  Wind Chill  (F)  |  Cloud Base (Ft)  |\n";
    cout << "|==================================================================================================|\n";
    cout << "|  " << temp << " degrees       |  " << wind << " mph             |  " << dew << " degrees     |  " << 35.74 + (0.6215 * temp) - (37.75 * pow(wind, 0.16)) + pow(0.4275 * temp * wind, 0.16) << " degrees  |  " << 1000 * ((temp - dew) / 4.4) << " feet       |\n";
    cout << "|___________________|____________________|_________________|___________________|___________________|";
}

int main()
{
    // Temperature
    cout << "Enter the temperature in Farenheit: \n";
        cin >> temp;
        while (!temp) { // Wrong characters
            cout << "Please input your temperature again: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        }

    // Windspeed
    cout << "Enter the wind speed in mph: \n";
        cin >> wind;
        while (!wind) { // Wrong characters
            cout << "Please input your wind speed again: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> wind;
        }

    // Dewpoint
    cout << "Enter the dewpoint in Fahrenheit: \n";
        cin >> dew;
        while (!dew) { // Wrong characters
            cout << "Please input your dewpoint again: \n";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> dew;
        }

    // Output
    weatherOutput();
    return 0;
}
