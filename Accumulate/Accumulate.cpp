#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> v = { 1,2,3 };
    int sum = std::accumulate(v.begin(), v.end(), 10);

    std::cout << sum << std::endl;
}

