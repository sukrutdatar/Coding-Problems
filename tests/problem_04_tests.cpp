#define UNIT_TEST
#include "problem_04.cpp"
#include <gtest/gtest.h>

/*
 ** sort_and_iterate_solution unit tests
 */

TEST(sort_and_iterate_solution, default_data1)
{
    int data[] = { 3, 4, -1, 1 };
    int expected_output = 2;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, default_data2)
{
    int data[] = { 1, 2, 0 };
    int expected_output = 3;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, zero_data)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int expected_output = 1;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, negative_data)
{
    int data[] = { 0, -1, -2, -56, -10 };
    int expected_output = 1;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, mixed_data)
{
    int data[] = { -1, 1, 2, -56, -10, 44, 4, 6 };
    int expected_output = 3;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, sequential_data)
{
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12 };
    int expected_output = 13;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(sort_and_iterate_solution, reverse_sequential_data)
{
    int data[] = { 12, 11 ,10, 9, 8, 7, 6, 5, 4, 2, 1 };
    int expected_output = 3;
    int actual_output = 0;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = sort_and_iterate_solution(data, data_length);
    ASSERT_EQ(expected_output, actual_output);
}

// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}