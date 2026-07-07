#include "io.h"
#include <iostream>

int readNumber() {
    std::cout<<"Enter an integer: ";
    int input {};
    std::cin>>input;
    return input;
}

void writeAnswer(int input) {
    std::cout << "The answer is " << input;
}