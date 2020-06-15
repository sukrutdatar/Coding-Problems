/*
    Given an integer n return the length of the longest consecutive run of 1's in its  binary representation.
    e.g. if n = 156, the function should return 3 as 156's binary representation is 10011100.
*/

#include <iostream>
#include <bitset>
#include <string>
#include <memory>

int get_count_of_longest_consecutive_run_using_mask(int n)
{
    int mask = 1;
    int count = 0;
    int current_count = 0;

    for (int i = 0; i < 32; i++)
    {
        mask = 1;
        int ans = (n & (mask << i));

        if (ans == 0) {
				if (count < current_count) {
					count = current_count;
				}
				current_count = 0;
			} else
				current_count++;
	}

    if (count < current_count)
		count = current_count;

    return count;
}

int get_count_of_longest_consecutive_run_using_bitset(int n)
{
    std::bitset<32> bits(n);
    std::string binary = bits.to_string();
    int count = 0;
    int current_count = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        if (binary[i] == '0') 
        {
            if (count < current_count) 
            {
                count = current_count;
            }
            current_count = 0;
		} 
        else
            current_count++;
    }

    if (count < current_count) 
    {
        count = current_count;
    }

    return count;
}

int get_count_of_longest_consecutive_run(int n)
{
    std::unique_ptr<bool[]> bits = std::make_unique<bool[]>(32);
    bool is_negative = (n < 0);
    int limit = 32;
    int index = 0;

    while (n != 0) 
    {
        bits[index++] = (n % 2 != 0);
        n = n / 2;
    }

    if (is_negative) {
			
        for (int i = 0; i < limit; i++)
            bits[i] = !bits[i];
        
        bool carry = true;
        for (int i = 0; i < limit; i++) {
            if (bits[i] & carry) {
                bits[i] = false;
            } else if (carry) {
                bits[i] = true;
                carry = false;
            }
        }
	}

    int count = 0;
    int current_count = 0;
    for (int i = 0; i < 32; i++) 
    {
        if (bits[i] == false) 
        {
            if (count < current_count) 
            {
                count = current_count;
            }
            current_count = 0;
        } 
        else
            current_count++;
    }

    if (count < current_count)
        count = current_count;

    return count;
}

#ifndef UNIT_TEST
int main()
{
    int n = 156;
    std::cout << std::endl << "Length of longest consecutive run of 1's = " << get_count_of_longest_consecutive_run(n);
    std::cout << std::endl << std::endl;
    return 0;
}
#endif