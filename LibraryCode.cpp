#include "LibraryCode.hpp"

std::string faceInterval(std::vector<int> num){
	auto minmax = std::minmax_element(num.begin(), num.end());
	return std::find(num.begin(), num.end(), *minmax.second - *minmax.first) == num.end() ? ":(" : ":)";
}