#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    cout << "Celsius Fahrenheit | Fahrenheit Celsius" << endl;
    for (double c = 31.0; c <= 40.0; c++) {
        double f = celsius_to_fah(c);
        double c0 = fahrenheit_to_cels(f);
        cout << setw(8) << c << setw(10) << f << " | ";
        cout << setw(8) << f << setw(10) << c0 << endl;
    }
    return 0;
}