#include <iostream>
#include <cmath>
using namespace std;

double wind, temp, dew;
double chill = 35.74 + 0.6215 * temp - 37.75 * pow(wind, 0.16) + pow(0.4275 * temp * wind, 0.16);
double cloud = temp - dew / 2.5 * 1000;

void weatherOutput() {
    cout << "|==================================================================================================|\n";
    cout << "|  Temperature (F)  |  Wind Speed (Kts)  |  Dew Point (F)  |  Wind Chill  (F)  |  Cloud Base (Ft)  |\n";
    cout << "|==================================================================================================|\n";
    cout << temp << "        " << wind << "        " << dew << "       " << chill << "      " << temp - dew / 2.5 * 1000 << "\n";
}

int main()
{
    cin >> wind;
    cin >> temp;
    cin >> dew;
    weatherOutput();
    return 0;
}
