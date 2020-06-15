#define UNIT_TEST
#include "problem_214.cpp"
#include <gtest/gtest.h>

/*
** get_count_of_longest_consecutive_run_using_bitset tests
*/

TEST(get_count_of_longest_consecutive_run_using_bitset, default_data)
{
    int n = 156;
    int expected_output = 3;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_bitset(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_bitset, default_negative_data)
{
    int n = -156;
    int expected_output = 24;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_bitset(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_bitset, zero)
{
    int n = 0;
    int expected_output = 0;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_bitset(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_bitset, maximum_limit)
{
    int n = 2147483647;
    int expected_output = 31;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_bitset(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_bitset, negative_maximum_limit)
{
    int n = -2147483647;
    int expected_output = 1;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_bitset(n);
    ASSERT_EQ(expected_output, actual_output);
}

/*
** get_count_of_longest_consecutive_run tests
*/

TEST(get_count_of_longest_consecutive_run, default_data)
{
    int n = 156;
    int expected_output = 3;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run, default_negative_data)
{
    int n = -156;
    int expected_output = 24;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run, zero)
{
    int n = 0;
    int expected_output = 0;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run, maximum_limit)
{
    int n = 2147483647;
    int expected_output = 31;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run, negative_maximum_limit)
{
    int n = -2147483647;
    int expected_output = 1;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run(n);
    ASSERT_EQ(expected_output, actual_output);
}

/*
** get_count_of_longest_consecutive_run_using_mask tests
*/

TEST(get_count_of_longest_consecutive_run_using_mask, default_data)
{
    int n = 156;
    int expected_output = 3;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_mask(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_mask, default_negative_data)
{
    int n = -156;
    int expected_output = 24;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_mask(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_mask, zero)
{
    int n = 0;
    int expected_output = 0;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_mask(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_mask, maximum_limit)
{
    int n = 2147483647;
    int expected_output = 31;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_mask(n);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_count_of_longest_consecutive_run_using_mask, negative_maximum_limit)
{
    int n = -2147483647;
    int expected_output = 1;
    int actual_output = -1;

    actual_output = get_count_of_longest_consecutive_run_using_mask(n);
    ASSERT_EQ(expected_output, actual_output);
}

// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}