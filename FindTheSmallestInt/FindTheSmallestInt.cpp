// Given an array of integers your solution should find the smallest integer.

#include <iostream>
#include <vector>
#include <algorithm>


int findSmallest(std::vector <int> list)
{
    std::sort(list.begin(), list.end());
    return list.front();
}

int main()
{
    std::vector<int> v = { 2,3,1 };

    std::cout << findSmallest(v) << std::endl;
}

