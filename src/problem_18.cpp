/*
    Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.
    
    For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:

    10 = max(10, 5, 2)
    7 = max(5, 2, 7)
    8 = max(2, 7, 8)
    8 = max(7, 8, 7)

    Do this in O(n) time and O(k) space. 
    You can modify the input array in-place and you do not need to store the results. 
    You can simply print them out as you compute them.
*/

#include <iostream>
#include <iterator>


void print_data(int [], size_t, int);
void print_data(int [], size_t, std::string);
int* brute_force_solution(int [], int, int);

#ifndef UNIT_TEST
int main()
{
    int data[] = { 10, 5, 2, 7, 8, 7 };
    int k = 3;
    int* result = NULL;
    size_t data_length = sizeof(data) / sizeof(data[0]);
    int number_of_subarrays = ((data_length - k) + 1);

    result = brute_force_solution(data, data_length, k);

    std::cout << std::endl << std::endl << "Maximum value of each subarray: " << std::endl;
    for (int i = 0; i < number_of_subarrays; i++)
        std::cout << result[i] << "\t";


    if (result)
        delete []result;

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

void print_data(int data[], size_t data_length, std::string message = "Data is:")
{
    int counter = 0;

    std::cout << std::endl << message << std::endl;
    for(counter = 0 ; counter < data_length; counter++)
        std::cout << data[counter] << "\t";

    std::cout << std::endl << "Length of given data = " << data_length << std::endl;
}

int* brute_force_solution(int data[], int length, int k)
{
    int i, j, x, cnt, max;
    int number_of_subarrays = (length - k) + 1;
    int* retVal = new int[number_of_subarrays];

    cnt = 0;

    print_data(data, length, k);

    for (i = 0; i < number_of_subarrays; i++)
    {
        max = data[i];
        for (x = i, j = 0; j < k; j++, x++)
        {
            if (max < data[x])
            {
                max = data[x];
            }
        }
        retVal[cnt++] = max;
    }
    return retVal;
}

