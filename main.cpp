#include <iostream>
#include "LibraryCode.hpp"

int main(int argc, char** argv){
    std::cout << "Cipher: " << caesarCipher("XYZ", 7) << std::endl;

    return 0;
}