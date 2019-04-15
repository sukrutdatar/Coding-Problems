#define UNIT_TEST
#include "problem_01.cpp"
#include <gtest/gtest.h>

/*
 ** brute_force_solution unit tests
 */

TEST(brute_force_solution_test, default_data_true)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 17;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}


TEST(brute_force_solution_test, default_data_false)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 5;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


TEST(brute_force_solution_test, positive_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, positive_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, negative_data_true)
{
    int data[] = { 10, 15, 3, 7, -51, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, negative_data_false)
{
    int data[] = { 10, 15, 3, 7, -41, 96, 22, 30 };
    int k = 65;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, small_positive_data_true)
{
    int data[] = { 10, 15, 3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, small_positive_data_false)
{
    int data[] = { 10, 15, 3 };
    int k = 14;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, small_negative_data_true)
{
    int data[] = { -10, -15, -3 };
    int k = -13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, small_negative_data_false)
{
    int data[] = { -10, -15, -3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


// always fails
// TEST(brute_force_solution_test, no_data_true)
// {
//     int data[] = {  };
//     int k = 0;
//     bool result = false;
//     size_t data_length = sizeof(data) / sizeof(data[0]);

//     result = brute_force_solution(data, data_length, k);
//     ASSERT_TRUE(result);
// }

TEST(brute_force_solution_test, no_data_false)
{
    int data[] = {  };
    int k = 10;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, duplicate_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, duplicate_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 22 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, zero_and_key_present_true)
{
    int data[] = { 10, 15, 3, 7, 0, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, only_key_present_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, both_zero_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(brute_force_solution_test, both_zero_true)
{
    int data[] = { 10, 15, 3, 0, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, zero_key_negative_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(brute_force_solution_test, zero_key_negative_data_false)
{
    int data[] = { 110, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = brute_force_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

/* 
**    map_multi_pass_solution unit tests
*/


TEST(map_multi_pass_solution_test, default_data_true)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 17;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}


TEST(map_multi_pass_solution_test, default_data_false)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 5;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


TEST(map_multi_pass_solution_test, positive_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, positive_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, negative_data_true)
{
    int data[] = { 10, 15, 3, 7, -51, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, negative_data_false)
{
    int data[] = { 10, 15, 3, 7, -41, 96, 22, 30 };
    int k = 65;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, small_positive_data_true)
{
    int data[] = { 10, 15, 3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, small_positive_data_false)
{
    int data[] = { 10, 15, 3 };
    int k = 14;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, small_negative_data_true)
{
    int data[] = { -10, -15, -3 };
    int k = -13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, small_negative_data_false)
{
    int data[] = { -10, -15, -3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

// always fails
// TEST(map_multi_pass_solution_test, no_data_true)
// {
//     int data[] = {  };
//     int k = 0;
//     bool result = false;
//     size_t data_length = sizeof(data) / sizeof(data[0]);

//     result = map_multi_pass_solution(data, data_length, k);
//     ASSERT_TRUE(result);
// }

TEST(map_multi_pass_solution_test, no_data_false)
{
    int data[] = {  };
    int k = 10;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


TEST(map_multi_pass_solution_test, duplicate_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, duplicate_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 22 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, zero_and_key_present_true)
{
    int data[] = { 10, 15, 3, 7, 0, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, only_key_present_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, both_zero_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_multi_pass_solution_test, both_zero_true)
{
    int data[] = { 10, 15, 3, 0, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, zero_key_negative_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_multi_pass_solution_test, zero_key_negative_data_false)
{
    int data[] = { 110, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_multi_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


/*
** map_single_pass_solution unit tests
*/

TEST(map_single_pass_solution_test, default_data_true)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 17;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}


TEST(map_single_pass_solution_test, default_data_false)
{
    int data[] = { 10, 15, 3, 7 };
    int k = 5;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


TEST(map_single_pass_solution_test, positive_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, positive_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, negative_data_true)
{
    int data[] = { 10, 15, 3, 7, -51, 96, 22, 30 };
    int k = 45;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, negative_data_false)
{
    int data[] = { 10, 15, 3, 7, -41, 96, 22, 30 };
    int k = 65;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, small_positive_data_true)
{
    int data[] = { 10, 15, 3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, small_positive_data_false)
{
    int data[] = { 10, 15, 3 };
    int k = 14;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, small_negative_data_true)
{
    int data[] = { -10, -15, -3 };
    int k = -13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, small_negative_data_false)
{
    int data[] = { -10, -15, -3 };
    int k = 13;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

// always fails
// TEST(map_single_pass_solution_test, no_data_true)
// {
//     int data[] = {  };
//     int k = 0;
//     bool result = false;
//     size_t data_length = sizeof(data) / sizeof(data[0]);

//     result = map_single_pass_solution(data, data_length, k);
//     ASSERT_TRUE(result);
// }

TEST(map_single_pass_solution_test, no_data_false)
{
    int data[] = {  };
    int k = 10;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}


TEST(map_single_pass_solution_test, duplicate_data_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 30 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, duplicate_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 22 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, zero_and_key_present_true)
{
    int data[] = { 10, 15, 3, 7, 0, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, only_key_present_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 44 };
    int k = 44;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, both_zero_false)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}

TEST(map_single_pass_solution_test, both_zero_true)
{
    int data[] = { 10, 15, 3, 0, 40, 96, 22, 0 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, zero_key_negative_data_true)
{
    int data[] = { 10, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_TRUE(result);
}

TEST(map_single_pass_solution_test, zero_key_negative_data_false)
{
    int data[] = { 110, 15, 3, 7, 40, 96, 22, -10 };
    int k = 0;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);

    result = map_single_pass_solution(data, data_length, k);
    ASSERT_FALSE(result);
}



// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}