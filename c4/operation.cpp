#include <iostream>

double user_input() {
    double response;
    std::cout << "Enter a double value: ";
    std::cin >> response;
    return response;
}

char user_operation() {
    char response;
    std::cout << "Enter +, -, *, /: ";
    std::cin >> response;
    if (response == '+' || response == '-' || response == '*' || response == '/') {
        return response;
    } else {
        return 'n';
    }
}

int operation(double input1, double input2, char op) {
    if (op == '+') {
        return input1 + input2;
    } else if (op == '-') { 
        return input1 - input1;
    } else if (op == '*') {
        return input1 * input2;
    } else if (op == '/') {
        return input1 / input2;
    } else {
        return 0;
    }
}

int main() {
    double input1 { user_input() };
    double input2 { user_input() };
    char op { user_operation() };
    if (op == 'n') {
        return 0;
    } else {
        int response { operation(input1, input2, op) };
        std::cout << input1 << " " << op << " " << input2 << " is " << response;
        return 0;
    }
}