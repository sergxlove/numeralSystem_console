#include <iostream>
#include <list>
#include "action.h"
#include "enum.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	action_over_dec over_dec;
	action_to_dec to_dec;
	menu m;
	list<int> result;
	int result_int = 0;
	int var_switch = 0;
	int var_second_switch = 0;
	int value_int = 0;
	m.print_line();
	m.starting_text();
	m.print_line();
	m.sys_numeral();
	cin >> var_switch;
	var_switch = convert_to_enum(var_switch);
	while (var_switch != 5)
	{
		switch (var_switch)
		{
		case var::var_bin:
			cout << "Введите ваше число" << endl;
			cin >> value_int;
			if (m.check_correct_value(value_int, 2) == true)
			{
				cout << "В какую систему первести" << endl;
				m.sys_numeral();
				cin >> var_second_switch;
				switch (var_second_switch)
				{
				case var::var_bin:
					cout << "перевод невозможен" << endl;
					break;
				case var::var_oct:
					result = to_dec.to_bin(value_int);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_oct(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_dec:
					for (auto el : to_dec.to_bin(value_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_hex:
					result = to_dec.to_bin(value_int);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_hex_int(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				default:
					break;
				}
			}
			else
			{
				cout << "Число введено некорректно" << endl;
			}
			break;
		case var::var_oct:
			break;
		case var::var_dec:
			break;
		case var::var_hex:
			break;
		default:
			break;
		}
	}
	return 0;
}