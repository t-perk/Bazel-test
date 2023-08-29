#include <iostream>
#include "my_library.h"
#include "lib.h"

int main() {
    std::cout << "Hello from my program!" << std::endl;
    App myApp;
    myApp.Start();
    Lib myLib;
    return 0;
}
