#include <iostream>
#include "LibraryCode.hpp"

std::string binary(int dec) {
	std::string bin;
    if(dec == 0) return 0;
    else{
        while(dec > 0){bin = (dec % 2 == 0 ? "0" : "1") + bin; dec /= 2;}
    }

    return bin;
}

int main(int argc, char** argv){
    std::cout << "Main app\n";

    std::cout << "Dec to binary: " << binary(5) << std::endl;
    
    return 0;
}