#include <iostream>
using namespace std;

int main() {
    // Ocean level rise rate in millimeters per year
    double rate_of_rise = 1.5;

    // Calculate ocean level in 5, 7, and 10 years
    double level_in_5_years = rate_of_rise * 5;
    double level_in_7_years = rate_of_rise * 7;
    double level_in_10_years = rate_of_rise * 10;

    // Display the results
    cout << "The ocean level will be " << level_in_5_years << " millimeters higher in 5 years." << endl;
    cout << "The ocean level will be " << level_in_7_years << " millimeters higher in 7 years." << endl;
    cout << "The ocean level will be " << level_in_10_years << " millimeters higher in 10 years." << endl;

    return 0;
}