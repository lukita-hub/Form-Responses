#include <iostream>
#include <cassert>
#include <string>
#include <gtest/gtest.h>

using namespace std;

// The function concatremove considers the constraints enunciated on the previous exercise
// This unit test will assert the 'sanity' of the function for some expected cases using gtest

TEST(ConcatRemoveTest, Example1) {
    EXPECT_EQ(ConcatRemove("bla bla bla bla", "blablabcde", 8), "no");
    EXPECT_EQ(ConcatRemove("blablablabla", "blablabcde", 8), "yes");
    EXPECT_EQ(ConcatRemove("tab", "tab", 7), "yes");
    EXPECT_EQ(ConcatRemove("abc", "xyz", 10), "yes");
    EXPECT_EQ(ConcatRemove("abc", "abc", 2), "yes");
}

// Add more test cases as needed

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
