#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(Validation, GivenVectorOfNumbersIfIntervalIsInVectorReturnsSmile){
    std::string result1 = faceInterval({1, 2, 5, 8, 3, 9});
    std::string result2 = faceInterval({5, 2, 8, 3, 11});
    EXPECT_EQ(result1, ":)");
    EXPECT_EQ(result2, ":(");
}

TEST(Battleship, GivenBoardFireFunctionReturnSplashWhenDotIsHit){
    std::vector<std::vector<char>> board{
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '*', '*', '.'}
    };
    std::string result1 = fire(board, "A1");
    EXPECT_EQ(result1, "Splash");
}

TEST(Array, FunctionThatTakesAnIntegerAndOutputsAnnxnSquareSolelyConsistingOfTheIntegerN){
    using Board = std::vector<std::vector<int>>;
    
    Board board3n {
        {3, 3, 3},
        {3, 3, 3},
        {3, 3, 3}
    };
    Board board5n {
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 5},
    };

    Board resultFor3n = squarePatch(3);
    Board resultFor5n = squarePatch(5);

    EXPECT_EQ(board3n, resultFor3n);
    EXPECT_EQ(board5n, resultFor5n);
}

TEST(Sorting, GivenUnsortedVectorReturnsSortedVector){
    std::vector<int> vec1 {2, -5, 1, 4, 7, 8};
    std::vector<int> vec2 {23, 15, 34, 17, -28};
    std::vector<int> vec3 {38, 57, 45, 18, 47, 39};
    
    std::vector<int> sortedVec1 {-5, 1, 2, 4, 7, 8};
    std::vector<int> sortedVec2 {-28, 15, 17, 23, 34};
    std::vector<int> sortedVec3 {18, 38, 39, 45, 47, 57};

    EXPECT_EQ(sortArray(vec1), sortedVec1);
    EXPECT_EQ(sortArray(vec2), sortedVec2);
    EXPECT_EQ(sortArray(vec3), sortedVec3);
}

TEST(Recursion, GivenIntigerReturnsSumOfFibonacci){
    EXPECT_EQ(fibonacci(3), 3);
    EXPECT_EQ(fibonacci(7), 21);
    EXPECT_EQ(fibonacci(12), 233);
}

TEST(Bitoperation, XORSwapAlgorithm){
    std::pair<int, int> pair1 {41, 10};
    std::pair<int, int> pair2 {420, 69};
    std::pair<int, int> pair3 {890412, 12345};

    EXPECT_EQ(XOR(10, 41), pair1);
    EXPECT_EQ(XOR(69, 420), pair2);
    EXPECT_EQ(XOR(12345, 890412), pair3);
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}