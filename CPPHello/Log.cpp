#include <iostream>
#include "Log.h"

void Log(const char* message) {
    std::cout << message << std::endl;
}

void Log(const std::string message) {
    std::cout << message << std::endl;
}



