#include <iostream>
#include <cmath>
using namespace std;

double wind, temp, dew;

void weatherOutput() {
    cout << "____________________________________________________________________________________________________\n";
    cout << "|  Temperature (F)  |  Wind Speed (Mph)  |  Dew Point (F)  |  Wind Chill  (F)  |  Cloud Base (Ft)  |\n";
    cout << "|==================================================================================================|\n";
    cout << "|  " << temp << " degrees       |  " << wind << " mph             |  " << dew << " degrees      |  " << 35.74 + (0.6215 * temp) - (37.75 * pow(wind, 0.16)) + pow(0.4275 * temp * wind, 0.16) << " degrees  |  " << 1000 * ((temp - dew) / 2.5) << " feet       |\n";
    cout << "|___________________|____________________|_________________|___________________|___________________|";
}

int main()
{
    cout << "Enter the temperature in Farenheit: \n";
        cin >> temp;
    cout << "Enter the wind speed in mph: \n";
        cin >> wind;
    cout << "Enter the dewpoint in Fahrenheit: \n";
        cin >> dew;

    //denial
    if (!temp) {
        cout << "Please enter your temperature again: \n";
            cin >> temp;
        weatherOutput();
    } 
    if (!wind) {
        cout << "Please enter your wind speed again: \n";
            cin >> wind;
        weatherOutput();
    }
    weatherOutput();
    return 0;
}
