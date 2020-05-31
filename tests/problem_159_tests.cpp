#define UNIT_TEST
#include "problem_159.cpp"
#include <gtest/gtest.h>

/*
 ** get_recurring_char_using_array unit tests
 */

TEST(get_recurring_char, get_recurring_char_using_array_b)
{
    std::string input = "acbbac";
    char expected_output = 'b';
    char actual_output;

    actual_output = get_recurring_char_using_array(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_array_a)
{
    std::string input = "acbfac";
    char expected_output = 'a';
    char actual_output;

    actual_output = get_recurring_char_using_array(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_array_c)
{
    std::string input = "acbfec";
    char expected_output = 'c';
    char actual_output;

    actual_output = get_recurring_char_using_array(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_array_none)
{
    std::string input = "acbfeh";
    char expected_output = -1;
    char actual_output;

    actual_output = get_recurring_char_using_array(input);
    ASSERT_EQ(expected_output, actual_output);
}

/*
 ** get_recurring_char_using_map unit tests
 */

TEST(get_recurring_char, get_recurring_char_using_map_b)
{
    std::string input = "acbbac";
    char expected_output = 'b';
    char actual_output;

    actual_output = get_recurring_char_using_map(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_map_a)
{
    std::string input = "acbfac";
    char expected_output = 'a';
    char actual_output;

    actual_output = get_recurring_char_using_map(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_map_c)
{
    std::string input = "acbfec";
    char expected_output = 'c';
    char actual_output;

    actual_output = get_recurring_char_using_map(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_map_none)
{
    std::string input = "acbfeh";
    char expected_output = -1;
    char actual_output;

    actual_output = get_recurring_char_using_map(input);
    ASSERT_EQ(expected_output, actual_output);
}

/*
 ** get_recurring_char_using_vector unit tests
 */

TEST(get_recurring_char, get_recurring_char_using_vector_b)
{
    std::string input = "acbbac";
    char expected_output = 'b';
    char actual_output;

    actual_output = get_recurring_char_using_vector(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_vector_a)
{
    std::string input = "acbfac";
    char expected_output = 'a';
    char actual_output;

    actual_output = get_recurring_char_using_vector(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_vector_c)
{
    std::string input = "acbfec";
    char expected_output = 'c';
    char actual_output;

    actual_output = get_recurring_char_using_vector(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_using_vector_none)
{
    std::string input = "acbfeh";
    char expected_output = -1;
    char actual_output;

    actual_output = get_recurring_char_using_vector(input);
    ASSERT_EQ(expected_output, actual_output);
}

/*
 ** get_recurring_char_no_extra_memory unit tests
 */

TEST(get_recurring_char, get_recurring_char_no_extra_memory_b)
{
    std::string input = "acbbac";
    char expected_output = 'b';
    char actual_output;

    actual_output = get_recurring_char_no_extra_memory(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_no_extra_memory_a)
{
    std::string input = "acbfac";
    char expected_output = 'a';
    char actual_output;

    actual_output = get_recurring_char_no_extra_memory(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_no_extra_memory_c)
{
    std::string input = "acbfec";
    char expected_output = 'c';
    char actual_output;

    actual_output = get_recurring_char_no_extra_memory(input);
    ASSERT_EQ(expected_output, actual_output);
}

TEST(get_recurring_char, get_recurring_char_no_extra_memory_none)
{
    std::string input = "acbfeh";
    char expected_output = -1;
    char actual_output;

    actual_output = get_recurring_char_no_extra_memory(input);
    ASSERT_EQ(expected_output, actual_output);
}


// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}