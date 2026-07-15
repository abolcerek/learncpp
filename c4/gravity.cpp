#include <cmath>
#include <iostream>
#include "constants.h"

int get_user_input() {
    int response;
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> response;
    return response;
}

double get_height(double current_meters, double seconds) {
    double seconds_squared = std::pow(seconds, 2);
    double distance_fallen = Constants::gravity * seconds_squared / 2;
    return current_meters - distance_fallen;
}

int simulation(int meters) {
    double current_meters = meters;
    for (int seconds = 0; seconds < 6; seconds++) {
        double height { get_height(current_meters, seconds)};
        if (height > 0) {
            std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
        } else {
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
        }
    }
    return 0;
}


int main() {
    int meters { get_user_input() }; 
    simulation(meters);
}