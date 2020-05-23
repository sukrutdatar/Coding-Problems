/*
    A number is considered perfect if its digits sum up to exactly 10.
    Given a positive integer n, return the n-th perfect number.
    For example, given 1, you should return 19. Given 2, you should return 28.
 */

#include <iostream>

int find_nth_perfect_number(int);
int find_nth_perfect_number_brute_force(int);

#ifndef UNIT_TEST
int main()
{
    int n = 8;

    std::cout << std::endl << "Perfect number = " << find_nth_perfect_number(n);
    std::cout << std::endl << "Perfect number = " << find_nth_perfect_number_brute_force(n);

    std::cout << std::endl << std::endl;
    return 0;
}
#endif


int find_nth_perfect_number(int n)
{
    int sum = 10;
    return (sum + ((sum - 1) * n));
}

int find_nth_perfect_number_brute_force(int n)
{
    int sum = 10;
    int sum_of_n = 0;
    int perfect_number = 0;

    for (int i = 0; n > 0; i++)
    {
        int temp = i;
        sum_of_n = 0;
        while (temp != 0)
        {
            sum_of_n = sum_of_n + (temp % 10);
            temp = temp / 10;
        }

        if (sum_of_n == sum)
        {
            perfect_number = i;
            n--;
        }
    }

    return perfect_number;
}