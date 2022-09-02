#include <iostream>

int main()
{
    int* tab = new int[5];
    //std::cout << *tab;
    tab[0] = 5;
    std::cout << *tab << std::endl;


    int* a = new int;
    *a = 100;
    std::cout << *a;


}