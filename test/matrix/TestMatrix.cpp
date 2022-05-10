#include <vector>
#include <gtest/gtest.h>
#include "World.hpp"

using std::vector;

using namespace LAWC;

TEST(MatrixTest, TestExcercise){
    Matrix m = Matrix(2, vector<int>({1,2}));

    EXPECT_EQ(1,1);
    EXPECT_TRUE(true);
}