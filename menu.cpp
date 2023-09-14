#include "action.h"

void menu::starting_text()
{
	std::cout << "Добро пожаловать в удивительный мир различных систем счисления!" << std::endl;
	std::cout << "Этот калькулятор поможет вам с легкостью преобразовывать числа между наиболее популярными системами счисления, такими как двоичная, восьмеричная, десятичная и шестнадцатеричная." << std::endl;
	std::cout << "Благодаря ему вы сможете лучше понять и сравнить основы каждой системы, а также упросить сложные преобразования." << std::endl;
	std::cout << "Итак, выберите систему счисления, введите число и начните свое цифровое путешествие!" << std::endl;
}

void menu::print_line()
{
	for (int i = 0;i < 100;i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl;
}

void menu::sys_numeral()
{
	std::cout << "1 - двоичная" << std::endl;
	std::cout << "2 - восьмеричная" << std::endl;
	std::cout << "3 - десятичная" << std::endl;
	std::cout << "4 - шестнадцатеричная" << std::endl;
	std::cout << "Ваш выбор : " << std::endl;
}

bool menu::check_correct_value(int value, int numeral_sys)
{
	int var_del = 0;
	while(value)
	{
		var_del = value % 10;
		if (var_del >= numeral_sys)
		{
			return false;
		}
		value /= 10;
	}
	return true;
}

bool menu::check_correct_value(std::string value, int numeral_sys)
{
	int value_int = 0;
	for (int i = 0;i < value.size();i++)
	{
		if (value[i] != 'A' && value[i] != 'B' && value[i] != 'C' && value[i] != 'D' && value[i] != 'E' && value[i] != 'F')
		{
			value_int = value[i];
			if (value[i] <= 30 || value[i] >= 39)
			{
				return false;
			}
		}
	}
	return true;
}

