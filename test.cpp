#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(Validation, GivenVectorOfNumbersIfIntervalIsInVectorReturnsSmile){
    std::string result1 = faceInterval({1, 2, 5, 8, 3, 9});
    std::string result2 = faceInterval({5, 2, 8, 3, 11});
    EXPECT_EQ(result1, ":)");
    EXPECT_EQ(result2, ":(");
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}