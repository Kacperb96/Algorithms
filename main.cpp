#include <iostream>
#include "LibraryCode.hpp"

std::pair<int, int> XOR(int a, int b) {
    if(a != b){
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return std::make_pair(a, b);
}

int main(int argc, char** argv){
    std::cout << "Main app\n";
    std::cout << XOR(4, 6).first << XOR(4, 6).second << std::endl;

    return 0;
}