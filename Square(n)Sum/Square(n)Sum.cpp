// Complete the square sum function so that it squares each number passed into itand then sums the results together.

#include <iostream>
#include <vector>

unsigned int square_sum(const std::vector<int>& numbers)
{
    unsigned int sum = 0;

    for (auto it = numbers.begin(); it < numbers.end(); ++it)
    {
        sum += (*it)* (*it);
    }
    return sum;
}

int main()
{
    std::vector<int> v = { 2,3,1 };
    std::cout << square_sum(v) << std::endl;
}

