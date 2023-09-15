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
	string value_str;
	bool exit = false;
	m.print_line();
	m.starting_text();
	m.print_line();
	while (exit!=true)
	{
		m.sys_numeral();
		cin >> var_switch;
		var_switch = convert_to_enum(var_switch);
		switch (var_switch)
		{
		case var::var_bin:
			m.print_line();
			cout << "Введите ваше число" << endl;
			cin >> value_int;
			if (m.check_correct_value(value_int, 2) == true)
			{
				m.print_line();
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
				case var::var_cancel:
					m.print_line();
					cout << "Действие отменено" << endl;
					m.print_line();
					break;
				default:
					m.print_line();
					cout << "Неверно выбранный вариант ответа" << endl;
					m.print_line();
					break;
				}
			}
			else
			{
				cout << "Число введено некорректно" << endl;
			}
			break;
		case var::var_oct:
			m.print_line();
			cout << "Введите ваше число" << endl;
			cin >> value_int;
			if (m.check_correct_value(value_int, 8) == true)
			{
				m.print_line();
				cout << "В какую систему первести" << endl;
				m.sys_numeral();
				cin >> var_second_switch;
				switch (var_second_switch)
				{
				case var::var_bin:
					result = to_dec.to_oct(value_int);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_bin(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_oct:
					cout << "перевод невозможен" << endl;
					break;
				case var::var_dec:
					for (auto el : to_dec.to_oct(value_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_hex:
					result = to_dec.to_oct(value_int);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_hex_int(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_cancel:
					m.print_line();
					cout << "Действие отменено" << endl;
					m.print_line();
					break;
				default:
					m.print_line();
					cout << "Неверно выбранный вариант ответа" << endl;
					m.print_line();
					break;
				}
			}
			else
			{
				cout << "Число введено некорректно" << endl;
			}
			break;
		case var::var_dec:
			m.print_line();
			cout << "Введите ваше число" << endl;
			cin >> value_int;
			if (m.check_correct_value(value_int, 10)==true)
			{
				m.print_line();
				cout << "В какую систему первести" << endl;
				m.sys_numeral();
				cin >> var_second_switch;
				switch (var_second_switch)
				{
				case var::var_bin:
					for (auto el : to_dec.to_bin(value_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_oct:
					for (auto el : to_dec.to_oct(value_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_dec:
					cout << "перевод невозможен" << endl;
					break;
				case var::var_hex:
					for (auto el : over_dec.to_hex_int(value_int))
					{
						cout << el;
					}
					break;
				case var::var_cancel:
					m.print_line();
					cout << "Действие отменено" << endl;
					m.print_line();
					break;
				default:
					m.print_line();
					cout << "Неверно выбранный вариант ответа" << endl;
					m.print_line();
					break;
				}
			}
			else
			{
				cout << "Число введено некорректно" << endl;
			}
			break;
		case var::var_hex:
			m.print_line();
			cout << "Введите ваше число" << endl;
			cin >> value_str;
			if (m.check_correct_value(value_str, 16) == true)
			{
				m.print_line();
				cout << "В какую систему первести" << endl;
				m.sys_numeral();
				cin >> var_second_switch;
				switch (var_second_switch)
				{
				case var::var_bin:
					result = to_dec.to_hex_string(value_str);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_bin(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_oct:
					result = to_dec.to_hex_string(value_str);
					result_int = to_dec.convert_to_int(result);
					for (auto el : over_dec.to_oct(result_int))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_dec:
					for (auto el : to_dec.to_hex_string(value_str))
					{
						cout << el;
					}
					cout << endl;
					break;
				case var::var_hex:
					cout << "перевод невозможен" << endl;
					break;
				case var::var_cancel:
					m.print_line();
					cout << "Действие отменено" << endl;
					m.print_line();
					break;
				default:
					m.print_line();
					cout << "Неверно выбранный вариант ответа" << endl;
					m.print_line();
					break;
				}
			}
			else
			{
				cout << "Число введено некорректно" << endl;
			}
			break;
		case var::var_cancel:
			exit = true;
			break;
		default:
			m.print_line();
			cout << "Неверно выбранный вариант ответа" << endl;
			m.print_line();
			break;
		}
	}
	return 0;
}