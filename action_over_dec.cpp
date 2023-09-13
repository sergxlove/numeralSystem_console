#include "action.h"

action_over_dec::action_over_dec()
{
}

action_over_dec::~action_over_dec()
{
}

std::list<int> action_over_dec::to_bin(int value)
{
	while (value >= 2)
	{
		if (value % 2 == 0)
		{
			result.push_front(0);
		}
		else
		{
			result.push_front(1);
		}
		value /= 2;
	}
	result.push_front(value);
	return result;
}

std::list<int> action_over_dec::to_oct(int value)
{
	int del_value = 0;
	int del_remains = 0;
	while (value >= 8)
	{
		del_value = value / 8;
		del_remains = value - del_value * 8;
		result.push_front(del_remains);
		value /= 8;
	}
	result.push_front(value);
	return result;
}

std::list<std::string> action_over_dec::to_hex_int(int value)
{
	int del_value = 0;
	int del_remains = 0;
	while (value >= 16)
	{
		del_value = value / 16;
		del_remains = value - del_value * 16;
		if (del_remains > 9)
		{
			switch (del_remains)
			{
			case 10:
				result_hex.push_front("A");
				break;
			case 11:
				result_hex.push_front("B");
				break;
			case 12:
				result_hex.push_front("C");
				break;
			case 13:
				result_hex.push_front("D");
				break;
			case 14:
				result_hex.push_front("E");
				break;
			case 15:
				result_hex.push_front("F");
				break;
			}
		}
		else
		{
			result_hex.push_front(std::to_string(del_remains));
		}
		value /= 16;
	}
	if (value > 9)
	{
		switch (value)
		{
		case 10:
			result_hex.push_front("A");
			break;
		case 11:
			result_hex.push_front("B");
			break;
		case 12:
			result_hex.push_front("C");
			break;
		case 13:
			result_hex.push_front("D");
			break;
		case 14:
			result_hex.push_front("E");
			break;
		case 15:
			result_hex.push_front("F");
			break;
		}
	}
	else
	{
		result_hex.push_front(std::to_string(value));
	}
	return result_hex;
}

std::list<int> action_over_dec::to_hex_string(std::string value)
{
	return std::list<int>();
}


