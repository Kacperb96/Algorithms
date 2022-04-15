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

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}