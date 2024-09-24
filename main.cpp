#include <iostream>
using namespace std;

int main() {
    // Given data
    int totalCustomers = 16500;
    double percentEnergyDrinkers = 0.15;
    double percentCitrusPref = 0.58;

    // Calculate the number of customers purchasing one or more energy drinks per week
    int energyDrinkCustomers = totalCustomers * percentEnergyDrinkers;

    // Calculate the number of customers who prefer citrus-flavored energy drinks
    int citrusPrefCustomers = energyDrinkCustomers * percentCitrusPref;

    // Output the results
    cout << "Approximate number of customers purchasing one or more energy drinks per week: " 
         << energyDrinkCustomers << endl;
    cout << "Approximate number of customers preferring citrus-flavored energy drinks: " 
         << citrusPrefCustomers << endl;

    return 0;
}