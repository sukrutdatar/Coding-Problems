#define UNIT_TEST
#include "problem_368.cpp"
#include <gtest/gtest.h>

/*
** sort_decreasing_order tests
*/

TEST(sort_decreasing_order, default_data)
{
    std::string data = "tweet";
    std::string expected_output = "eettw";
    std::string actual_output = "";

    actual_output = sort_decreasing_order(data);
    ASSERT_EQ(expected_output, actual_output);
    ASSERT_EQ(data.length(), actual_output.length());
}

TEST(sort_decreasing_order, no_duplicate_serial_entries)
{
    std::string data = "abcdefgh";
    std::string actual_output = "";

    actual_output = sort_decreasing_order(data);
    ASSERT_EQ(data, actual_output);
    ASSERT_EQ(data.length(), actual_output.length());
}

TEST(sort_decreasing_order, no_duplicate_random_entries)
{
    std::string data = "gtlabze";
    std::string actual_output = "";

    actual_output = sort_decreasing_order(data);
    ASSERT_EQ(data, actual_output);
    ASSERT_EQ(data.length(), actual_output.length());
}

TEST(sort_decreasing_order, duplicate_entries_three)
{
    std::string data = "computerscience";
    std::string expected_output = "ccceeeimnoprstu";
    std::string actual_output = "";

    actual_output = sort_decreasing_order(data);
    ASSERT_EQ(expected_output, actual_output);
    ASSERT_EQ(data.length(), actual_output.length());
}

TEST(sort_decreasing_order, duplicate_entries)
{
    std::string data = "madam";
    std::string expected_output = "aammd";
    std::string actual_output = "";

    actual_output = sort_decreasing_order(data);
    ASSERT_EQ(expected_output, actual_output);
    ASSERT_EQ(data.length(), actual_output.length());
}

// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}