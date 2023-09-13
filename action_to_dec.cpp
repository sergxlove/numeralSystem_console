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

std::list<int> action_to_dec::to_hex_string(std::string value)
{
	std::vector<char>value_char;
	std::list<int>value_int;
	int value_for_convert = 0;
	int count = 0;
	int sum = 0;
	for (int i = 0;i < value.size();i++)
	{
		value_char.push_back(value[i]);
	}
	for (int i = 0;i < value_char.size();i++)
	{
		value_int.push_back(convert_char_to_int(value_char[i]));
	}
	count = value_int.size() - 1;
	std::list<int>::iterator it = value_int.begin();
	while (it != value_int.end())
	{
		sum += *it * std::pow(16, count);
		count--;
		std::advance(it, 1);
	}
	result = convert_int_to_list(sum);
	return result;
}

std::list<std::string> action_to_dec::to_hex_int(int value)
{
	return std::list<std::string>();
}

int action_to_dec::convert_to_int(std::list<int> value_list)
{
	int result = 0;
	std::list<int>::iterator it = value_list.begin();
	for (int i = 0;i < value_list.size();i++)
	{
		result *= std::pow(10, i);
		result += *it;
		std::advance(it, 1);
	}
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

int action_to_dec::convert_char_to_int(char ch)
{
	int result = 0;
	int value = 0;
	for (int i = 0;i < 10;i++)
	{
		if (ch == (char)value+48)
		{
			result = value;
			return result;
		}
		value++;
	}
	if (ch == 'A')
	{
		return 10;
	}
	if (ch == 'B')
	{
		return 11;
	}
	if (ch == 'C')
	{
		return 12;
	}
	if (ch == 'D')
	{
		return 13;
	}
	if (ch == 'E')
	{
		return 14;
	}
	if (ch == 'F')
	{
		return 15;
	}
	return 0;
}
