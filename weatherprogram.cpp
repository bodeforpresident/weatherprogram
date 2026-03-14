#include <iostream>
#include <cmath>
using namespace std;

// Function Declaration, inputs are temp, dewpoint, and windspeed, other values are cloudbase and windchill
void windChillCalc(double& temp, double& windSpeed, double& windChill);
void cloudbaseCalc(double& temp, double& dewPoint, double& cloudbase);
void input(double& temp, double& windSpeed, double& dewPoint);
void weatherOutput(double& temp, double& windSpeed, double& dewPoint, double windChillCalc, double cloudbaseCalc);

int main() {
    double temp, windSpeed, dewPoint, windChill, cloudbase;

    // Take Inputs
    input(temp, windSpeed, dewPoint);

    // Run Calculations
    windChillCalc(temp, windSpeed, windChill);
    cloudbaseCalc(temp, dewPoint, cloudbase);

    // Output Table
    weatherOutput(temp, windSpeed, dewPoint, windChill, cloudbase);
}

// Inputs
void input(double& temp, double& windSpeed, double& dewPoint) {
    cout << "Please enter the temperature in Fahrenheit:\n"; // temperature input
    cin >> temp;
        if (!temp) {
            cout << "Please enter your temperature again:\n";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> temp;
        }
    cout << "Please enter your wind speed in MPH:\n"; // wind speed input
    cin >> windSpeed;
        if (!windSpeed) {
            cout << "Please enter your windspeed again:\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> windSpeed;
        }
    cout << "Please enter your dew point in Fahrenheit:\n";
    cin >> dewPoint;
        if (!dewPoint) {
            cout << "Please enter your dew point again:\n";
                cin.clear();
                cin.ignore(10000, '\n');
                cin >> dewPoint;
        }
    }

// Wind chill & cloudbase calculation
void windChillCalc(double& temp, double& windSpeed, double& windChill) {
    windChill = (35.74 + (0.6215 * temp) - (37.75 * pow(windSpeed, 0.16)) + pow(0.4275 * temp * windSpeed, 0.16));
}
void cloudbaseCalc(double& temp, double& dewPoint, double& cloudbase) {
    cloudbase = (1000 * ((temp - dewPoint) / 4.4));
}

// Final Output
void weatherOutput(double& temp, double& windSpeed, double& dewPoint, double windChill, double cloudbase) {
    cout << "==Temperature==\n";
    cout << temp << " degrees\n";
    cout << "===Windspeed===\n"; 
    cout << windSpeed << " MPH\n";
    cout << "===Dew point===\n";
    cout << dewPoint << " degrees\n";
    cout << "===Windchill===\n";
    cout << windChill << " degrees\n";
    cout << "===Cloudbase===\n";
    cout << cloudbase << " feet\n";
}
