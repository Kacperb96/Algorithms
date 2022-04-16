#include <iostream>
#include "LibraryCode.hpp"

std::string caesarCipher(std::string s, int n) {
	std::string result;
    int k = std::abs(n % 26);

    for(auto i = 0; i < s.length(); i++){
        if((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z')){
            result += s[i];
        }

        else{

            if((s[i] + k >= 'a' && s[i] + k <= 'z') || (s[i] + k >= 'A' && s[i] + k <= 'Z')){
                result += s[i] + k;
            }

            else if((s[i] + k > 'z') || (s[i] + k > 'Z')){
                result += s[i] - 26 + k;
            }

            else if((s[i] - k < 'a') || (s[i] - k < 'A')){
                result += s[i] + 26 + k;
            }

        }
    }

    return result;
}

int main(int argc, char** argv){
    std::cout << "Szyfr: " << caesarCipher("Lkb pelria klq tloov lsbo qefkdp qexq exsb xiobxav exmmbkba xka qexq zxkklq yb zexkdba.", -111) << std::endl;

    
    return 0;
}