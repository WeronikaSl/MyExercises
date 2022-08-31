#include <iostream>
#include <vector>
#include <algorithm>


int count_sheep(std::vector<bool> arr)
{
    auto lambda = [](bool value) -> int {return true == value;};
    return std::count_if(arr.cbegin(), arr.cend(), lambda);
}


int main()
{
    std::vector<bool> array1 = { true,  true,  true,  false,
                                  true,  true,  true,  true ,
                                  true,  false, true,  false,
                                  true,  false, false, true ,
                                  true,  true,  true,  true ,
                                  false, false, true,  true };

    std::cout << count_sheep(array1) << std::endl;
}
