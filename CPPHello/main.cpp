#include <iostream>
#include "Log.h"
#include "Math.h"
#include <sstream>

int Multiply2(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    Log((std::ostringstream() << Multiply2(a, b)).str());
}

int main() {
    
    Log("Start....");;
    Log((std::ostringstream() << Multiply(12, 13)).str());
    Log("Ended....");
    
    unsigned int variable = 8; // signed int -2billion to +2billion approx
    std::cout << variable << std::endl;
    std::cout << sizeof(variable) << std::endl;
    
    float f = 133.133f;
    std::cout << f << std::endl;
    std::cout << sizeof(f) << std::endl;
    
    double d = 133.133;
    std::cout << d << std::endl;
    std::cout << sizeof(d) << std::endl;
    
    bool what = true;
    std::cout << what << std::endl;
    std::cout << sizeof(what) << std::endl;
    
    std::cout << Multiply2(10, 3) << std::endl;
    
    MultiplyAndLog(11, 15);
    MultiplyAndLog(7, 44);
    
    
    return 0;
    
}
