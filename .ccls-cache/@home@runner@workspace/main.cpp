#include <iostream>
using namespace std;

int main() {
    // Constants
    const double TOWN_MPG = 23.5; // Miles per gallon in town
    const double HIGHWAY_MPG = 28.9; // Miles per gallon on highway
    const int TANK_SIZE = 20; // Tank size in gallons

    // Calculating distances
    double distanceInTown = TANK_SIZE * TOWN_MPG;
    double distanceOnHighway = TANK_SIZE * HIGHWAY_MPG;

    // Output the results
    cout << "Distance the car can travel in town: " << distanceInTown << " miles" << endl;
    cout << "Distance the car can travel on the highway: " << distanceOnHighway << " miles" << endl;

    return 0;
}