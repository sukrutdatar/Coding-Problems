/*
    Given a string, sort it in decreasing order based on the frequency of characters. If there are multiple possible solutions, return any of them.
    For example, given the string tweet, return tteew. eettw would also be acceptable.
*/

#include <iostream>
#include <string>
#include<map>
#include <vector>
#include <algorithm>

std::string sort_decreasing_order(std::string);

#ifndef UNIT_TEST
int main()
{
    std::string data = "computerscience";
    std::cout << std::endl << "Sorted string = " << sort_decreasing_order(data);
    std::cout << std::endl << std::endl;
    return 0;
}
#endif

std::string sort_decreasing_order(std::string input)
{
    std::map<char, int> characters_map;
    int character_count = 0;
    std::string output;

    for (char ch : input)
    {
        if (characters_map.find(ch) == characters_map.end())
        {
            characters_map[ch] = 1;
        }
        else
        {
            character_count = characters_map[ch];
            characters_map[ch] = character_count + 1;
        }
    }

    if (characters_map.size() == input.length())
    {
        return input;
    }

    std::vector<std::pair <char, int> > pairs;
    for (auto it = characters_map.begin(); it != characters_map.end(); ++it)
    {
        pairs.push_back(std::make_pair(it->first, it->second));
    }

    std::sort(pairs.begin(), pairs.end(),[&](const std::pair<char, int>& p1, const std::pair<char, int>& p2) -> int
    {
        return (p1.second > p2.second);
    });

    std::for_each(pairs.begin(), pairs.end(),[&](auto p) 
    {
        while (p.second > 0)
        {
            output += p.first;
            p.second--;
        }
    });

    return output;
}