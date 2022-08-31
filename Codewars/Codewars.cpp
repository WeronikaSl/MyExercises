#include <iostream>
#include <vector>
#include <cmath>


int square_digits(int num)
{
    std::vector<unsigned short> v = {};
    int x = num;
    int amountOfDigits = 0;
    while (x > 0) 
    {
        x = x / 10;
        amountOfDigits++;
    }
    x = num;
    while (x > 0)
    {
        v.push_back(x % 10);
        x /= 10;
    }
    std::reverse(v.begin(), v.end());
    int y = 0;
    for (auto it = v.begin(); it < v.end(); ++it)
    {
        *it *= *it;
        if (*it < 10)
        {
            y += ((*it) * pow(10, amountOfDigits - 1));
            amountOfDigits--;
        }
        else
        {
            y += ((*it) * pow(10, amountOfDigits+1));
            amountOfDigits--;
            amountOfDigits--;

        }

    }

    return y;
}


int main()
{
    std::cout << square_digits(919);


}
