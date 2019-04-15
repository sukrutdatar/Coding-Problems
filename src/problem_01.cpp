/*
    Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

    Bonus: Can you do this in one pass?
*/

#include <iostream>
#include <iterator>
#include<map>

void print_data(int [], size_t, int);

bool brute_force_solution(int [], size_t, int);
bool map_multi_pass_solution(int [], size_t, int);
bool map_single_pass_solution(int [], size_t, int);

#ifndef UNIT_TEST
int main()
{
    int data[] = { 10, 15, 3, 7 };
    int k = 17;
    bool result = false;
    size_t data_length = sizeof(data) / sizeof(data[0]);


    //result = brute_force_solution(data, data_length, k);
    result = map_multi_pass_solution(data, data_length, k);
    result = map_single_pass_solution(data, data_length, k);
    std::cout << std::endl << "Answer = " << ((result) ? "True" : "False");

    std::cout << std::endl << std::endl;
    return 0;
}
#endif

void print_data(int data[], size_t data_length, int k)
{
    int outer_i = 0;
    int inner_i = 0;

    std::cout << std::endl << "Given data for k = [" << k << "] is:" << std::endl;
    for(outer_i = 0 ; outer_i < data_length; outer_i++)
        std::cout << data[outer_i] << "\t";

    std::cout << std::endl << "Length of given data = " << data_length;
}

bool brute_force_solution(int data[], size_t data_length, int k)
{
    int outer_i = 0;
    int inner_i = 0;

    print_data(data, data_length, k);

    for (outer_i = 0; outer_i < data_length; outer_i++)
    {
        for (inner_i = outer_i + 1; inner_i < data_length; inner_i++)
        {
            if (data[outer_i] + data[inner_i] == k)
                return true;
        }
    }
}

bool map_multi_pass_solution(int data[], size_t data_length, int k)
{
    int counter = 0;
    int diff = 0;
    int orig = 0;
    std::map<int, int> data_map;

    print_data(data, data_length, k);

    for (counter = 0; counter < data_length; counter++)
    {
        if (data_map.find(data[counter]) == data_map.end())
            data_map.emplace(data[counter], 0);
        else
        {
            data_map[data[counter]] += 1;
        }
        
    }

    for (counter = 0; counter < data_length; counter++)
    {
        diff = k - data[counter];
        if (data_map.find(diff) != data_map.end())
        {
            orig = data[counter];
            
            // duplicate data unit tests
            if (orig != diff)
                return true;

            int cnt = data_map[orig];
            if (cnt > 0)
            {
                return true;   
            }
        }
    }

    return false;
}

bool map_single_pass_solution(int data[], size_t data_length, int k)
{
    int num;
    int diff;
    int counter;
    std::map<int, int> data_map;

    print_data(data, data_length, k);

    for (counter = 0; counter < data_length; counter++)
    {
        num = data[counter];
        diff = k - num;
        if (data_map.find(diff) == data_map.end())
        {
            data_map.emplace(num, 0);
        }
        else
        {
            return true;
        }
    }

    return false;
}

