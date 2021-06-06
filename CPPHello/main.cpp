#include <iostream>
#include "Log.h"
#include "Math.h"
#include <sstream>

int main() {
    
    Log("Start....");;
    Log((std::ostringstream() << Multiply(12, 13)).str());
    Log("Ended....");
    
    return 0;
    
}
