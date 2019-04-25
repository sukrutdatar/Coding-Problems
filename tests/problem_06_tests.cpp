#define UNIT_TEST
#include "problem_06.cpp"
#include <gtest/gtest.h>

void check(XOR_Node*, int*, int );
XOR_Node* create_list(int [], int);

/*
 ** add() & get() unit tests
 */

TEST(add_get, default_data)
{
    int data[] = { 10, 20, 30 ,40 ,50 };
    size_t data_length = std::end(data) - std::begin(data);

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

TEST(add_get, single_element_data)
{
    int data[] = { 10 };
    size_t data_length = std::end(data) - std::begin(data);

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

TEST(add_get, zero_data)
{
    int data[] = { 0, 0, 0, 0, 0 };
    size_t data_length = std::end(data) - std::begin(data);

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

TEST(add_get, two_elements_data)
{
    int data[] = { 10, 20 };
    size_t data_length = std::end(data) - std::begin(data);

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

TEST(add_get, no_data)
{
    int data[] = {  };
    size_t data_length = 0;

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

TEST(add_get, data)
{
    int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12 };
    size_t data_length = std::end(data) - std::begin(data);

    XOR_Node* head = create_list(data, data_length);
    check(head, data, data_length);
}

XOR_Node* create_list(int data[], int length)
{
    XOR_Node* head = NULL;
    for (int i = 0; i < length; i++)
    {
        add(&head, data[i]);
    }
    return head;
}

void check(XOR_Node* head, int* data, int length)
{
    for (int i = 1; i <= length; i++)
    {
        ASSERT_EQ(data[i - 1], get(head, i)->data);
    }
}

// gtest main
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}