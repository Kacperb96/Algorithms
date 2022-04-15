#include <iostream>
#include "LibraryCode.hpp"

int main(int argc, char** argv){
    int s = sum(3, 2);
    std::cout << "Actual application\n";
    std::cout << "Sum = " << s << "\n";
}