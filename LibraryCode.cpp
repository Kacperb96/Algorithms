#include "LibraryCode.hpp"

std::string faceInterval(std::vector<int> num){
	auto minmax = std::minmax_element(num.begin(), num.end());
	return std::find(num.begin(), num.end(), *minmax.second - *minmax.first) == num.end() ? ":(" : ":)";
}

std::string fire(std::vector<std::vector<char>> matrix, std::string coordinates) {
    char x = coordinates[0];
    char y = coordinates[1];

    std::string result;
    for (auto i = 0; i < matrix.size(); i++) {
        for (auto j = 0; j < matrix.size(); j++) {
            if (static_cast<int>(x) == 65 + i && static_cast<int>(y) == 49 + j) {
                (matrix[i][j] == '.') ? result = "Splash" : result = "BOOM";
            }
        }
    }

    return result;
}

std::vector< std::vector<int> > squarePatch(int n) {
	std::vector<std::vector<int>> board;
    for(auto i = 0; i < n; i++){
        board.push_back(std::vector<int>());
        for(auto j = 0; j < n; j++){
            board[i].push_back(n);
        }
    }

    return board;
}

std::vector<int> sortArray(std::vector<int> arr) {
	int tmp{ 0 };
    for(auto i = 0; i < arr.size(); i++){
        for(auto j = i; j < arr.size(); j++){
            if(arr[j] < arr[i]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    
    return arr;
}