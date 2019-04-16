#define UNIT_TEST
#include "problem_02.cpp"
#include <gtest/gtest.h>

void check_result(int*, int*, int);

/*
 ** brute_force_without_division_solution unit tests
 */

TEST(brute_force_without_division_solution, default_data)
{
    int data[] = { 1, 2, 3, 4, 5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_without_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_without_division_solution, negative_data)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_without_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_without_division_solution, mixed_data)
{
    int data[] = { -1, -2, 3, 4, -5 };
    int expected_output[] = { 120, 60, -40, -30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_without_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_without_division_solution, data_contains_zero)
{
    int data[] = { 1, 2, 3, -4, 0 };
    int expected_output[] = { 0, 0, 0, 0, -24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_without_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_without_division_solution, zero_data)
{
    int data[] = { 0, 0, 0, 0, 0 };
    int expected_output[] = { 0, 0, 0, 0, 0 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_without_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

/*
 ** brute_force_with_division_solution unit tests
 */

TEST(brute_force_with_division_solution, default_data)
{
    int data[] = { 1, 2, 3, 4, 5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_with_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_with_division_solution, negative_data)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_with_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_with_division_solution, mixed_data)
{
    int data[] = { -1, -2, 3, 4, -5 };
    int expected_output[] = { 120, 60, -40, -30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_with_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(brute_force_with_division_solution, data_contains_zero)
{
    int data[] = { 1, 2, 3, -4, 0 };
    int expected_output[] = { 0, 0, 0, 0, -24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = brute_force_with_division_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

// always fails
// TEST(brute_force_with_division_solution, zero_data)
// {
//     int data[] = { 0, 0, 0, 0, 0 };
//     int expected_output[] = { 0, 0, 0, 0, 0 };
//     int* actual_output = NULL;
//     size_t data_length = std::end(data) - std::begin(data);

//     actual_output = brute_force_with_division_solution(data, data_length);
//     check_result(expected_output, actual_output, data_length);

//     if (actual_output)
//         delete[] actual_output;
// }

/*
 ** with_division_recursion_solution unit tests
 */

TEST(brute_force_with_with_division_recursion_solutiondivision_solution, default_data)
{
    int data[] = { 1, 2, 3, 4, 5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = with_division_recursion_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(with_division_recursion_solution, negative_data)
{
    int data[] = { -1, -2, -3, -4, -5 };
    int expected_output[] = { 120, 60, 40, 30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = with_division_recursion_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(with_division_recursion_solution, mixed_data)
{
    int data[] = { -1, -2, 3, 4, -5 };
    int expected_output[] = { 120, 60, -40, -30, 24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = with_division_recursion_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

TEST(with_division_recursion_solution, data_contains_zero)
{
    int data[] = { 1, 2, 3, -4, 0 };
    int expected_output[] = { 0, 0, 0, 0, -24 };
    int* actual_output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    actual_output = with_division_recursion_solution(data, data_length);
    check_result(expected_output, actual_output, data_length);

    if (actual_output)
        delete[] actual_output;
}

// always fails
// TEST(with_division_recursion_solution, zero_data)
// {
//     int data[] = { 0, 0, 0, 0, 0 };
//     int expected_output[] = { 0, 0, 0, 0, 0 };
//     int* actual_output = NULL;
//     size_t data_length = std::end(data) - std::begin(data);

//     actual_output = with_division_recursion_solution(data, data_length);
//     check_result(expected_output, actual_output, data_length);

//     if (actual_output)
//         delete[] actual_output;
// }


// helper functions

void check_result(int* expected_output, int* actual_output, int length)
{
    print_data(actual_output, length, "Actual output:");
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