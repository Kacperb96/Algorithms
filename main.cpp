#include <iostream>
#include "LibraryCode.hpp"

bool isPrime(int n){
    if (n == 0 || n == 1) {
        return false;
    }

  for (auto i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      return false;
      break;
    }
  }

  return true;
}

int counter(std::vector<int>& A, bool(*ptr)(int)){
    int counter{ 0 };
    for(auto i : A){
        if(ptr(i)) counter ++;
    }

    return counter;
}

int main(int argc, char** argv){
    std::cout << "Czy pierwsza: " << std::boolalpha << isPrime(4) << std::endl;

    return 0;
}