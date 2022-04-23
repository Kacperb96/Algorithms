#pragma once
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <utility>

std::string faceInterval(std::vector<int>);
std::string fire(std::vector<std::vector<char>>, std::string);
std::vector< std::vector<int> > squarePatch(int);
std::vector<int> sortArray(std::vector<int>);
int fibonacci(int);
std::pair<int, int> XOR(int, int);
int mySub(int, int);
std::string binary(int);
std::string caesarCipher(std::string, int);
int letterDistance(std::string, std::string);
bool isPrime(int);
int countElem(std::vector<int>&, bool(*ptr)(int));