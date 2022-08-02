//Write a program that finds the summation of every number from 1 to num. 
//The number will always be a positive integer greater than 0.

#include <iostream>

int summation(int num)
{
    unsigned int sum = 0;

    for (size_t i = 0; i <= num; ++i)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    std::cout << summation(3);
}

