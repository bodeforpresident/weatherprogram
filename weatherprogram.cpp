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
    // Temperature
    cout << "Enter the temperature in Farenheit: \n";
        cin >> temp;
        do {
            cout << "Please input your temperature again: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        } while (!temp);

        do {
            cout << "Nice try, enter your actual temperature: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        } while (temp > 150 || temp < -134);

    // Windspeed
    cout << "Enter the wind speed in mph: \n";
        cin >> wind;
        do {
            cout << "Please input your wind speed again: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> wind;
        } while (!wind);

        do {
            cout << "Nice try, enter your actual wind speed: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        } while (wind > 150 || temp < 0);

    // Dewpoint
    cout << "Enter the dewpoint in Fahrenheit: \n";
        cin >> dew;
        do {
            cout << "Please input your dewpoint again: \n";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> dew;
        } while (!dew);

        do {
            cout << "Nice try, enter your actual dewpoint: \n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        } while (temp > 150 || temp < 0);

    // Output
    weatherOutput();
    return 0;
}
