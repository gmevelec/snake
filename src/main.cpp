#include <gtest/gtest.h>

#include <string>
#include "Snake.h"

using std::string;

const char *actualValTrue  = "hello gtest";
const char *actualValFalse = "hello world";
const char *expectVal      = "hello gtest";

TEST(StrCompare, CStrEqual) {
    EXPECT_STREQ(expectVal, actualValTrue);
}

TEST(StrCompare, CStrNotEqual) {
    EXPECT_STREQ(expectVal, actualValFalse);
}

TEST(Snake, InitialPosition) {
	Snake snake;
	EXPECT_EQ(3, snake.bodyPosition.size());
	EXPECT_EQ((0,0), (snake.bodyPosition[0].x, snake.bodyPosition[0].y));
	EXPECT_EQ((0,1), (snake.bodyPosition[1].x, snake.bodyPosition[1].y));
	EXPECT_EQ((0,2), (snake.bodyPosition[2].x, snake.bodyPosition[2].y));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv); 
    return RUN_ALL_TESTS();
}
