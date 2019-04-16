/*
    Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers
    in the original array except the one at i.

    For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
    If out input was [3, 2, 1], the expected output would be [2, 3, 6].

    Follow-up: what if you can't use division?
*/

#include <iostream>
#include <iterator>
#include <string>

void print_data(int [], size_t, std::string);


int* brute_force_with_division_solution(int [], size_t);
int* brute_force_without_division_solution(int [], size_t);

int* with_division_recursion_solution(int [], size_t);
int with_division_recursion_solution_(int [], size_t, int, int, int*);

#ifndef UNIT_TEST
int main()
{
    int data[] = { 1, 2, 3, 4, 5 };
    //int output[] = { 120, 60, 40, 30, 24 };
    int* output = NULL;
    size_t data_length = std::end(data) - std::begin(data);

    //output = brute_force_without_division_solution(data, data_length);
    //output = brute_force_with_division_solution(data, data_length);
    output = with_division_recursion_solution(data, data_length);

    std::cout << std::endl << "Output = ";
    for (int i = 0; i < data_length; i++)
    {
        std::cout << output[i] << "\t";
    }

    if (output)
        delete[] output;

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


int* brute_force_without_division_solution(int data[], size_t data_length)
{
    int* output = new int[data_length]{ 0 };
    int outer_i = 0;
    int inner_i = 0;
    int product = 1;

    print_data(data, data_length);

    for (outer_i = 0; outer_i < data_length; outer_i++)
    {
        product = 1;
        for (inner_i = 0; inner_i < data_length; inner_i++)
        {
            if (inner_i == outer_i)
                continue;
            product *= data[inner_i];
        }
        output[outer_i] = product;
    }
    return output;
}

int* brute_force_with_division_solution(int data[], size_t data_length)
{
    int* output = new int[data_length]{ 0 };
    int counter = 0;
    int product = 1;
    bool hasZero = false; // brute_force_with_division_solution.data_contains_zero test

    print_data(data, data_length);

    for (counter = 0; counter < data_length; counter++)
    {   
        if (data[counter] != 0) // brute_force_with_division_solution.data_contains_zero test
        { 
            product *= data[counter];
        }
        else
            hasZero = true;
    }

    for (counter = 0; counter < data_length; counter++)
    {
        output[counter] = (data[counter] != 0)? ((hasZero) ? 0 : product / data[counter]) : product;
    }

    return output;
}

int* with_division_recursion_solution(int data[], size_t data_length)
{
    int* output = new int[data_length]{ 0 };
    int counter = 0;
    int product = 1;

    print_data(data, data_length);

    with_division_recursion_solution_(data, data_length, counter, product, output);

    return output;
}
int with_division_recursion_solution_(int data[], size_t data_length, int counter, int product, int* output)
{
    static bool hasZero = false;
    if (counter < data_length)
    {
        if (data[counter] != 0)
            product *= data[counter];
        else 
        {
            hasZero = true;
        }
        product = with_division_recursion_solution_(data, data_length, counter + 1, product, output);
        output[counter] = (data[counter] != 0)? ((hasZero) ? 0 : product / data[counter]) : product;
    }
    return product;
}