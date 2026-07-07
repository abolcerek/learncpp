#include <iostream>
#include "io.h"

int main() {
    int val1 { readNumber() } ;
    int val2 { readNumber() };  
    writeAnswer(val1 + val2); 
    return 0;
}