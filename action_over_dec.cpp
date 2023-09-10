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

std::list<int> action_over_dec::to_hex(int value)
{
	return result;
}

