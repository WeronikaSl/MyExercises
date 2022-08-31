#include "Zadanie3.hpp"


std::string StringConverter::toSnakeCase(std::string str) //"camelCase" 
{
	std::vector<char> vec(str.begin(), str.end());
	std::string temp = {};

	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		if (*it >= 65 && *it <= 90) //duże litery
		{
			temp.push_back('_');
			temp.push_back((*it) += 32);
			continue;
		}
		temp.push_back(*it);
	}
	return temp;

}

std::string StringConverter::toCamelCase(std::string str) //"snake_case" 
{
	std::vector<char> vec(str.begin(), str.end());
	std::string temp = {};

	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		if ((*it) == '_') //ASCII 95
		{
			it++;
			temp.push_back((* it)-=32);
			continue;
		}
		temp.push_back(*it);
	}
	return temp;
}