#include "action.h"

void menu::starting_text()
{
	std::cout << "ƒобро пожаловать в удивительный мир различных систем счислени€!" << std::endl;
	std::cout << "Ётот калькул€тор поможет вам с легкостью преобразовывать числа между наиболее попул€рными системами счислени€, такими как двоична€, восьмерична€, дес€тична€ и шестнадцатерична€." << std::endl;
	std::cout << "Ѕлагодар€ ему вы сможете лучше пон€ть и сравнить основы каждой системы, а также упросить сложные преобразовани€." << std::endl;
	std::cout << "»так, выберите систему счислени€, введите число и начните свое цифровое путешествие!" << std::endl;
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
	std::cout << "1 - двоична€" << std::endl;
	std::cout << "2 - восьмерична€" << std::endl;
	std::cout << "3 - дес€тична€" << std::endl;
	std::cout << "4 - шестнадцатерична€" << std::endl;
	std::cout << "5 - отмена" << std::endl;
	std::cout << "¬аш выбор : " << std::endl;
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
			if (value[i] <= 47 || value[i] >= 58)
			{
				return false;
			}
		}
	}
	return true;
}

