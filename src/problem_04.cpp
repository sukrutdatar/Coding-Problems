/*
    Given an array of integers, find the first missing positive integer in linear time and constant space. 
    In other words, find the lowest positive integer that does not exist in the array. 
    The array can contain duplicates and negative numbers as well.

    For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

    You can modify the input array in-place.
*/

#include <iostream>
#include <iterator>

void print_data(int, size_t, std::string);

int sort_and_iterate_solution(int data[], int length);

#ifndef UNIT_TEST
int main()
{
    int data[] = { 3, 4, -1, 1 };
    int missing_data = 0;
    size_t data_length = std::distance(std::begin(data), std::end(data));

    missing_data = sort_and_iterate_solution(data, data_length);

    std::cout << std::endl << "Answer = " << missing_data;

    std::cout << std::endl << std::endl;
    return 0;
}
#endif

void print_data(int data[], size_t data_length, std::string message = "Data is:")
{
    int counter = 0;

    std::cout << std::endl << message << std::endl;
    for(counter = 0 ; counter < data_length; counter++)
        std::cout << data[counter] << "\t";

    std::cout << std::endl << "Length of given data = " << data_length << std::endl;
}

int sort_and_iterate_solution(int data[], int length)
{
    int missing_data = 1;
    int inner_i = 0;
    int outer_i = 0;
    int temp = 0;
    bool swap = true;

    print_data(data, length);

    for (outer_i = 0; outer_i < length && swap; outer_i++)
    {
        swap = false;
        for (inner_i = outer_i + 1; inner_i < length; inner_i++)
        {
            if (data[outer_i] > data[inner_i])
            {
                temp = data[outer_i];
                data[outer_i] = data[inner_i];
                data[inner_i] = temp;
                swap = true;
            }
        }
    }

    for (outer_i = 0; outer_i < length; outer_i++)
    {
        if (data[outer_i] == missing_data)
        {
            missing_data++;
            outer_i--;
            continue;
        }
    }
    return missing_data;
}