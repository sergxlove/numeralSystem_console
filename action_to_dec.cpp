#include "action.h"

action_to_dec::action_to_dec()
{
}

action_to_dec::~action_to_dec()
{
}

std::list<int> action_to_dec::to_bin(int value)
{
	int sum = 0;
	std::list<int>value_int = convert_int_to_list(value);
	int count = value_int.size() - 1;
	std::list<int>::iterator it = value_int.begin();
	while (it != value_int.end())
	{
		sum += *it * std::pow(2, count);
		count--;
		std::advance(it, 1);
	}
	result = convert_int_to_list(sum);
	return result;
}

std::list<int> action_to_dec::to_oct(int value)
{
	int sum = 0;
	std::list<int>value_int = convert_int_to_list(value);
	int count = value_int.size() - 1;
	std::list<int>::iterator it = value_int.begin();
	while (it != value_int.end())
	{
		sum += *it * std::pow(8, count);
		count--;
		std::advance(it, 1);
	}
	result = convert_int_to_list(sum);
	return result;
}

std::list<int> action_to_dec::to_hex(std::string value)
{
	return result;
}

std::list<int> action_to_dec::convert_int_to_list(int number)
{
	std::list<int> result;
	while (number)
	{
		result.push_front(number % 10);
		number /= 10;
	}
	return result;
}
