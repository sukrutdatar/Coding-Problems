#define UNIT_TEST
#include "problem_18.cpp"
#include <gtest/gtest.h>

void check_result(int*, int*, int);

/*
 ** brute_force_solution unit tests
 */

TEST(brute_force_solution, default_data_k_3)
{
    int data[] = { 10, 5, 2, 7, 8, 7 };
    int k = 3;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 10, 7, 8, 8 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, negative_data_k_3)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int k = 3;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -1, -2, -3 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, mixed_data_k_3)
{
    int data[] = { -10, -2, 13, 43, -5 };
    int k = 3;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 13, 43, 43 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, data_contains_zero_k_3)
{
    int data[] = { 1, 2, -3, -4, 0 };
    int k = 3;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 2, 2, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, zero_data_k_3)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int k = 3;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 0, 0, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, default_data_k_4)
{
    int data[] = { 10, 5, 2, 7, 8, 7 };
    int k = 4;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 10, 8, 8 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, negative_data_k_4)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int k = 4;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -1, -2 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, mixed_data_k_4)
{
    int data[] = { -10, -2, 13, 43, -5 };
    int k = 4;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 43, 43 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, data_contains_zero_k_4)
{
    int data[] = { 1, 2, -3, -4, 0 };
    int k = 4;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 2, 2 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, zero_data_k_4)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int k = 4;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 0, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}


TEST(brute_force_solution, default_data_k_2)
{
    int data[] = { 10, 5, 2, 7, 8, 7 };
    int k = 2;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 10, 5, 7, 8, 8 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, negative_data_k_2)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int k = 2;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -1, -2, -3, -4 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, mixed_data_k_2)
{
    int data[] = { -10, -2, 13, 43, -5 };
    int k = 2;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -2, 13, 43, 43 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, data_contains_zero_k_2)
{
    int data[] = { 1, 2, -3, -4, 0 };
    int k = 2;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 2, 2, -3, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, zero_data_k_2)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int k = 2;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 0, 0, 0, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, default_data_k_1)
{
    int data[] = { 10, 5, 2, 7, 8, 7 };
    int k = 1;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 10, 5, 2, 7, 8, 7 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, negative_data_k_1)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int k = 1;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -1, -2, -3, -4, -5 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, mixed_data_k_1)
{
    int data[] = { -10, -2, 13, 43, -5 };
    int k = 1;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { -10, -2, 13, 43, -5 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, data_contains_zero_k_1)
{
    int data[] = { 1, 2, -3, -4, 0 };
    int k = 1;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 1, 2, -3, -4, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_solution, zero_data_k_1)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int k = 1;
    size_t data_length = std::end(data) - std::begin(data);

    int expected_output[] = { 0, 0, 0, 0, 0 };
    size_t number_of_subarrays = (data_length - k) + 1;
    int* actual_output = NULL;
    

    actual_output = brute_force_solution(data, data_length, k);
    check_result(expected_output, actual_output, number_of_subarrays);

    if (actual_output)
        delete[] actual_output;
}

// helper functions

void check_result(int* expected_output, int* actual_output, int length)
{
    print_data(actual_output, length, "\nActual output:");
    print_data(expected_output, length, "Expected output:");

    for (int i = 0; i < length; i++)
    {
        ASSERT_EQ(expected_output[i], actual_output[i]);
    }
}

// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}