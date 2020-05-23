#define UNIT_TEST
#include "problem_420.cpp"
#include <gtest/gtest.h>


/*
 ** brute_force_solution unit tests
 */

TEST(brute_force_solution_test, n_2)
{
    int n = 2;
    int expected_result = 28;
    int actual_result = 0;

    actual_result = find_nth_perfect_number_brute_force(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(brute_force_solution_test, n_1)
{
    int n = 1;
    int expected_result = 19;
    int actual_result = 0;

    actual_result = find_nth_perfect_number_brute_force(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(brute_force_solution_test, n_8)
{
    int n = 8;
    int expected_result = 82;
    int actual_result = 0;

    actual_result = find_nth_perfect_number_brute_force(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(brute_force_solution_test, n_0)
{
    int n = 0;
    int expected_result = 0;
    int actual_result = 0;

    actual_result = find_nth_perfect_number_brute_force(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(brute_force_solution_test, n_15)
{
    int n = 15;
    int expected_result = 0;
    int actual_result = 0;

    actual_result = find_nth_perfect_number_brute_force(n);
    ASSERT_EQ(expected_result, actual_result);
}

/*
** optimized solution unit tests
 */

TEST(optimized_solution_test, n_2)
{
    int n = 2;
    int expected_result = 28;
    int actual_result = 0;

    actual_result = find_nth_perfect_number(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(optimized_solution_test, n_1)
{
    int n = 1;
    int expected_result = 19;
    int actual_result = 0;

    actual_result = find_nth_perfect_number(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(optimized_solution_test, n_8)
{
    int n = 8;
    int expected_result = 82;
    int actual_result = 0;

    actual_result = find_nth_perfect_number(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(optimized_solution_test, n_0)
{
    int n = 0;
    int expected_result = 0;
    int actual_result = 0;

    actual_result = find_nth_perfect_number(n);
    ASSERT_EQ(expected_result, actual_result);
}

TEST(optimized_solution_test, n_15)
{
    int n = 15;
    int expected_result = 0;
    int actual_result = 0;

    actual_result = find_nth_perfect_number(n);
    ASSERT_EQ(expected_result, actual_result);
}


// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


// 19
// 28
// 37
// 46
// 55
// 64
// 73
// 82
// 91
// 109
// 118
// 127
// 136
// 145
// 154
// 163
// 172
// 181
// 190
