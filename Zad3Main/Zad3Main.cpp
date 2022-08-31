#include "Zadanie3.hpp"
#include <iostream>

int main()
{
	StringConverter word1;
	std::string str = { "camelCase" };
	std::string str2 = { "snake_case" };
	std::cout << word1.toSnakeCase(str) << std::endl;
	std::cout << word1.toCamelCase(str2) << std::endl;

}