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


int fibonacci(int num) {
    int result{ 0 };
    (num == 0 || num == 1) ? result += 1 : result += fibonacci(num - 2) + fibonacci(num - 1);

    return result;
}

std::pair<int, int> XOR(int a, int b) {
    if(a != b){
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return std::make_pair(a, b);
}

int mySub(int a, int b) {
	while (b != 0){
        int c = (~a) & b;
        a ^= b;
        b = c << 1;
    }
    return std::abs(a);
}

std::string binary(int dec) {
	std::string bin;
    if(dec == 0) return 0;
    else{
        while(dec > 0){bin = (dec % 2 == 0 ? "0" : "1") + bin; dec /= 2;}
    }

    return bin;
}

std::string caesarCipher(std::string s, int n) {
	std::string result;
    int k = std::abs(n % 26);

    for(auto i = 0; i < s.length(); i++){
        ((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z')) ? result += s[i] :
        ((s[i] + k >= 'a' && s[i] + k <= 'z') || (s[i] + k >= 'A' && s[i] + k <= 'Z') ? result += s[i] + k :
        ((s[i] + k > 'z') || (s[i] + k > 'Z') ? result += s[i] - 26 + k : result += s[i] + 26 + k));
    }

    return result;
}