/*
    Given a string, return the first recurring character in it, or -1 if there is no recurring character.
    For example, given the string "acbbac", return "b". Given the string "abcdef", return -1.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <map>
#include <vector>


char get_recurring_char_no_extra_memory(std::string input)
{
    std::vector<char> characters;
    char ch;

    for (std::string::size_type i = 0; i < input.size(); i++)
    {
        ch = input[i];
        if ( input.substr(0, i).find(ch) != std::string::npos)
        {
            return ch;
        }
    }

    return -1;
}

char get_recurring_char_using_vector(std::string input)
{
    std::vector<char> characters;
    char ch;

    for (std::string::size_type i = 0; i < input.size(); i++)
    {
        ch = input[i];
        if (std::find(characters.begin(), characters.end(), ch) != characters.end())
        {
            return ch;
        }
        else
        {
            characters.push_back(ch);
        }
    }
    return -1;
}


char get_recurring_char_using_map(std::string input)
{
    std::map<char, int> characters;
    char ch;

    for (std::string::size_type i = 0; i < input.size(); i++)
    {
        ch = input[i];
        if (characters.find(ch) != characters.end())
        {
            return ch;
        }
        else
        {
            characters[ch] = 1;
        }
    }
    return -1;
}


char get_recurring_char_using_array(std::string input) 
{
    int characters[256];
    memset(characters, 0, 256);
    char ch;

    for (std::string::size_type i = 0; i < input.size(); i++)
    {
        ch = input[i];
        if (characters[ch] == 1)
        {
            return ch;
        }
        else
        {
            characters[ch] = 1;
        }
    }
    return -1;
}

#ifndef UNIT_TEST
int main()
{
    std::string input = "acbfec";
    char ch = get_recurring_char_using_array(input);
    if (ch == -1)
    {
        std::cout << std::endl << "There is no recurring character.";
    }
    else
    {
        std::cout << std::endl << "Recurring character is " << ch << ".";
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
#endif